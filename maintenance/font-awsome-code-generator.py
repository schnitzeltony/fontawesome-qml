#!/usr/bin/env python3

import sys
import os
import glob
import re
import shutil

# This is a helper script to be run once awesome-fonts are upgraded.
# It updates cpp source code:

# svg files to parse (might change in future versions)
svg_files = ('fa-brands-400.svg', 'fa-regular-400.svg', 'fa-solid-900.svg')

# some worker paths
project_path = os.path.realpath(sys.path[0] + '/..')
awesome_path_rel = 'src/lib/Font-Awesome'
awesome_path = os.path.join(project_path, awesome_path_rel)
svg_path = os.path.join(awesome_path, 'webfonts')
# our global header
global_header = os.path.join(project_path, 'include/fontawesome-qml.h')


# upgrade submodule for Fort-Awesome
print("Try FortAwesome upgrade git submodule...")
if os.system('git submodule update --remote ' + awesome_path_rel):
	raise Exception('Something went wrong upgrading FortAwesome submodule!')


# list of glyph tupels: (<filename>, <glyphname>, <glyphval>)
glyphs=[]

# parse svg files - they are much easier to parse
for svg in svg_files:
    svg_file = os.path.join(svg_path, svg)
    print("Parse " + svg_file)
    for line in open(svg_file):
        if "glyph-name=" in line and "unicode=" in line:
            line = line.replace('<glyph', '')
            line = line.replace(' ', '')
            glyph_name = ''
            code = ''
            next_is_glyph_name = False
            next_is_unicode = False
            for entry in line.split('"'):
                if next_is_glyph_name:
                    glyph_name = entry.replace('-', '_')
                    next_is_glyph_name = False
                if next_is_unicode:
                    code = entry.replace(';', '').replace('&', '').replace('#', '').replace('x', '')
                    next_is_unicode = False
                if 'glyph-name=' in entry:
                    next_is_glyph_name = True
                if 'unicode=' in entry:
                    next_is_unicode = True
            if code != '' and glyph_name != '':
                # Hmm moc does not like linux..
                if glyph_name == 'linux':
                    glyph_name = 'linux_rocks'
                # and some anallowed
                if glyph_name == '500px':
                    glyph_name = 'px500'
                
                t = (svg, glyph_name, code)
                glyphs.append(t)

# recreate our header in a tmp file
global_header_tmp = global_header + '_'
in_auto=False
tmpfile = open(global_header_tmp, 'w')
glyph_names_added=[]

for line in open(global_header):
    if '// START AUTO-GENERATED' in line:
        in_auto=True
        tmpfile.write(line)
    if '// END AUTO-GENERATED' in line:
        in_auto=False
    if in_auto:
        for g in glyphs:
            name = g[1]
            val = g[2]
            # avoid double entries
            if not name in glyph_names_added:
                glyph_names_added.append(name)
                tmpfile.write('    Q_PROPERTY(QString ' + name + ' READ ' + name + ' CONSTANT);\n')
                tmpfile.write('    QString ' + name + '() const { return QString::fromUtf8("\\u' + val +'"); }\n')
    else:
        tmpfile.write(line)
tmpfile.close()

# copy & cleanup
shutil.copyfile(global_header_tmp, global_header)
os.remove(global_header_tmp) 
