#!/usr/bin/env python3

import sys
import os
import glob
import re


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
#print("Try FortAwesome upgrade git submodule...")
#if os.system('git submodule update --remote ' + awesome_path_rel):
#	raise Exception('Something went wrong upgrading FortAwesome submodule!')


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

# recreate our header
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
tmpfile.close    



exit()






js_path = project_path + 'fa-js-wrapper/'

# create_js_wrapper() is our magic worker
def create_js_wrapper(svg_full_path):
    js_wrapper_base_name = os.path.basename(svg_full_path).replace('.svg', '').replace('-', '_')
    js_wrapper_file = js_path + os.path.basename(svg_full_path).replace('.svg', '.js')
    print('Create wrapper "' + js_wrapper_file + '...')
    f = open(js_wrapper_file, 'w')
    # header
    f.write('.pragma library\n\n')
    # helper
    f.write('// helper for easy coloring\n')
    f.write('function icon(symbol, color) {\n')
    f.write('    var colorStart=""\n')
    f.write('    var colorEnd=""\n')
    f.write('    if(color !== null) {\n')
    f.write('        colorStart="<font color=\'"+color+"\'>"\n')
    f.write('        colorEnd="</font>"\n')
    f.write('    }\n')
    f.write('    return colorStart+symbol+colorEnd\n')
    f.write('}')
    f.write('\n\n')

    # alias variables
    for line in open(svg_full_path):
        if "glyph-name=" in line and "unicode=" in line:
            line = line.replace('<glyph', '')
            line = line.replace(' ', '')
            glyph_name = ''
            unicode = ''
            next_is_glyph_name = False
            next_is_unicode = False
            for entry in line.split('"'):
                if next_is_glyph_name:
                    glyph_name = entry.replace('-', '_')
                    next_is_glyph_name = False
                if next_is_unicode:
                    unicode = entry.replace(';', '').replace('&', '').replace('#', '').replace('x', '')
                    next_is_unicode = False
                if 'glyph-name=' in entry:
                    next_is_glyph_name = True
                if 'unicode=' in entry:
                    next_is_unicode = True
            if unicode != '' and glyph_name != '':
                glyph_name_len = len(glyph_name)
                spacer = ''
                spacelen = 40
                if glyph_name_len < spacelen:
                    spacer = ' ' * int(spacelen - glyph_name_len)
                f.write('var ' + js_wrapper_base_name + '_' + glyph_name + spacer + '= "\\u' + unicode + '"\n')
    f.close()

# create js-wrapper path
if not os.path.exists(js_path):
   os.mkdir(js_path)
   print('"' + js_path + '" created.')



# parse svgs and create our wrappers
for svg in glob.glob(svg_path + '*.svg'):
    create_js_wrapper(svg)

