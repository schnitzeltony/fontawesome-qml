fontawesome-qml
============================

[Font-Awesome](https://github.com/FortAwesome/Font-Awesome) is a project that deserves its name :heart:.
Since it cannot be expected on distros to be installed, using it in (QML-) projects is a bit tedious. One needs to:

* Get the ttf's into your QML's project resource
* register the fonts
* search for the glyphs wanted
* find a more descripitive way than unicode chars to add icons to the code

To make things more simple this project contains:

* a [wrapper library](src/lib/qml/Fontawesome.qml) that translates symbolic variable names to unicode and adds a tiny
  helper function to colorize glyphs
* A [viewer-application](src/viewer/qml/main.qml)
  ![Screenshot_2020-08-15_21-02-51](https://user-images.githubusercontent.com/2571823/90319784-9723ed00-df3b-11ea-915e-86c3b9b57e63.png)
  to search for glyphs and directly copy symbol name into QML-source code.
* A [python-script](maintenance/font-awsome-code-generator.py) to auto-upgrade symbol-list/model to latest
  Font-Awesome.

----------------------------------------------
To use this project do

1. Download it by ```git clone --recursive https://github.com/schnitzeltony/fontawesome-qml.git```
2. Build it and install it to a location cmake can find it

In your project add:

1. In CMakeList.txt:
```cmake
...
find_package(FontAweSomeQml REQUIRED)
...
target_link_libraries(<your-target>
...
        FontAweSomeQml::FontAweSomeQml
...
)

```

2. In main.cpp (for parameters of FontAwesomeQml::registerFonts see [fontawesome-qml.h](include/fontawesome-qml.h))

```cpp
#include <fontawesome-qml.h>
...
int main(int argc, char *argv[])
{
    QQmlApplicationEngine engine;
    ...
    FontAwesomeQml::registerFonts(false, true, false);
    FontAwesomeQml::registerFAQml();
    ...
    engine.load(url);
    return app.exec();
}
```
3. In QML:
```QML
...
import FontAwesomeQml 1.0
...
    Button {
        font.family: FAQ.fontFamily
        font.styleName: "Solid" // or "Regular" requires registerFonts(true, ..) - see main.cpp above
        text: FAQ.fa_file
    }
...
```

----------------------------------------------
For dependencies check [CMakeLists.txt](CMakeLists.txt) / ```find_package```.

----------------------------------------------
**THE CODE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND and licensed under LGPL-3.0 License.**
