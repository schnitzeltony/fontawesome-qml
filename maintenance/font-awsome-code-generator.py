#!/usr/bin/env python3

import sys
import os
import shutil
import bisect

# This is a helper script to be run once awesome-fonts are upgraded.
# It updates cpp source code:

# svg files to parse is most esiest (might change in future versions)
brand_svg = 'fa-brands-400.svg'
regular_svg = 'fa-regular-400.svg'
solid_svg = 'fa-solid-900.svg'
svg_files = { brand_svg, regular_svg, solid_svg }

# some worker paths
project_path = os.path.realpath(sys.path[0] + '/..')
awesome_path_rel = 'src/lib/Font-Awesome'
awesome_path = os.path.join(project_path, awesome_path_rel)
svg_path = os.path.join(awesome_path, 'webfonts')


# upgrade submodule for Fort-Awesome
print("Try FortAwesome upgrade git submodule...")
if os.system('git submodule update --remote ' + awesome_path_rel):
    raise Exception('Something went wrong upgrading FortAwesome submodule!')


# parse svg files - they are much easier to parse to
# create list of glyph tupels: (<glyphname>, <glyphval>, <svg-filename>)
glyphs=[]
for svg in svg_files:
    svg_file = os.path.join(svg_path, svg)
    print('Parsing %s...' % svg_file) 
    in_file = open(svg_file, 'r')
    for line in in_file.readlines():
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
                t = (glyph_name, code, svg)
                bisect.insort(glyphs, t)
    in_file.close()


# read Fontawesome.qml and write updated version to Fontawesome.qml_
qml_file = os.path.join(project_path, 'src/lib/qml/Fontawesome.qml')
qml_file_tmp = qml_file + '_'
in_file = open(qml_file, 'r')
out_file = open(qml_file_tmp, 'w')

in_auto=False
glyph_names_added=[]
print('Upgrading %s...' % qml_file, end='')
for line in in_file.readlines():
    if '// START AUTO-GENERATED' in line:
        in_auto=True
        out_file.write(line)
        for g in glyphs:
            name = g[0]
            val = g[1]
            # avoid double entries
            if not name in glyph_names_added:
                glyph_names_added.append(name)
                out_file.write('    readonly property string g_' + name + ': "\\u' + val +'"\n')
    if '// END AUTO-GENERATED' in line:
        in_auto=False
    if not in_auto:
        out_file.write(line)

in_file.close()
out_file.close()

# copy / remove fontawesome.qml_
shutil.copyfile(qml_file_tmp, qml_file)
os.remove(qml_file_tmp)
print(' done')


# read FontawesomeModel.qml and write updated version to FontawesomeModel.qml_
qml_file = os.path.join(project_path, 'src/lib/qml/FontawesomeModel.qml')
qml_file_tmp = qml_file + '_'
in_file = open(qml_file, 'r')
out_file = open(qml_file_tmp, 'w')

in_auto_regular=False
in_auto_solid=False
in_auto_brands=False
print('Upgrading %s...' % qml_file, end='')
for line in in_file.readlines():
    # regular model
    if '// START AUTO-GENERATED REGULAR' in line:
        in_auto_regular=True
        out_file.write(line)
        for g in glyphs:
            svg_file = g[2]
            if regular_svg == svg_file:
                name = g[0]
                val = g[1]
                glyph_names_added.append(name)
                out_file.write('        ListElement { name: "g_' + name + '"; glyph: "\\u' + val +'"; unicode: "\\\\u' + val +'"; style: "Regular" }\n')
    if '// END AUTO-GENERATED REGULAR' in line:
        in_auto_regular=False
        
    # solid model
    if '// START AUTO-GENERATED SOLID' in line:
        in_auto_solid=True
        out_file.write(line)
        for g in glyphs:
            svg_file = g[2]
            if solid_svg == svg_file:
                name = g[0]
                val = g[1]
                glyph_names_added.append(name)
                out_file.write('        ListElement { name: "g_' + name + '"; glyph: "\\u' + val +'"; unicode: "\\\\u' + val +'"; style: "Solid" }\n')
    if '// END AUTO-GENERATED SOLID' in line:
        in_auto_solid=False
        
    # brands model
    if '// START AUTO-GENERATED BRANDS' in line:
        in_auto_brands=True
        out_file.write(line)
        for g in glyphs:
            svg_file = g[2]
            if brand_svg == svg_file:
                name = g[0]
                val = g[1]
                glyph_names_added.append(name)
                out_file.write('        ListElement { name: "g_' + name + '"; glyph: "\\u' + val +'"; unicode: "\\\\u' + val +'"; style: "Regular" }\n')
    if '// END AUTO-GENERATED BRANDS' in line:
        in_auto_brands=False
        
    if not in_auto_regular and not in_auto_solid and not in_auto_brands:
        out_file.write(line)

in_file.close()
out_file.close()

# copy / remove fontawesome.qml_
shutil.copyfile(qml_file_tmp, qml_file)
os.remove(qml_file_tmp)
print(' done')
