#include <fontawesome-qml.h>
#include <QFontDatabase>
#include <QQmlEngine>

bool FontAwesomeQml::faModelWasRegistered = false;
bool FontAwesomeQml::faWasRegistered = false;

bool FontAwesomeQml::bRegularFontWasRegistered = false;
bool FontAwesomeQml::bSolidFontWasRegistered = false;
bool FontAwesomeQml::bBrandsFontWasRegistered = false;

void FontAwesomeQml::registerFonts(bool bRegularFont, bool bSolidFont, bool bBrandFont)
{
    if(bRegularFont && !bRegularFontWasRegistered) {
        if (QFontDatabase::addApplicationFont(":/Font-Awesome/webfonts/fa-regular-400.ttf") == -1) {
            qWarning("Failed to add fa-regular-400.ttf");
        }
        else {
            bRegularFontWasRegistered = true;
        }
    }
    if(bSolidFont && !bSolidFontWasRegistered) {
        if (QFontDatabase::addApplicationFont(":/Font-Awesome/webfonts/fa-solid-900.ttf") == -1) {
            qWarning("Failed to add fa-solid-900.ttf");
        }
        else {
            bSolidFontWasRegistered = true;
        }
    }
    if(bBrandFont && !bBrandsFontWasRegistered) {
        if (QFontDatabase::addApplicationFont(":/Font-Awesome/webfonts/fa-brands-400.ttf") == -1) {
            qWarning("Failed to add fa-brands-400.ttf");
        }
        else {
            bBrandsFontWasRegistered = true;
        }
    }
}

void FontAwesomeQml::registerFAQml(QQmlEngine* engine)
{
    if(!faWasRegistered) {
#if defined(FA_QML_DEBUG_SOURCE_DIR)
        QStringList importPaths = engine->importPathList();
        QString importPath = QStringLiteral(QT_STRINGIFY(FA_QML_DEBUG_SOURCE_DIR));
        if(!importPaths.contains(importPath)) {
            engine->addImportPath(importPath);
        }
#else
        Q_UNUSED(engine)
        qmlRegisterSingletonType(QUrl("qrc:/qml/FontAwesomeQml/Fontawesome.qml"), "FontAwesomeQml", 1, 0, "FAQ");
#endif
        faWasRegistered = true;
    }
}

void FontAwesomeQml::registerFAModelQml(QQmlEngine* engine)
{
    if(!faModelWasRegistered) {
#if defined(FA_QML_DEBUG_SOURCE_DIR)
        QStringList importPaths = engine->importPathList();
        QString importPath = QStringLiteral(QT_STRINGIFY(FA_QML_DEBUG_SOURCE_DIR));
        if(!importPaths.contains(importPath)) {
            engine->addImportPath(importPath);
        }
#else
        Q_UNUSED(engine)
        qmlRegisterSingletonType(QUrl("qrc:/qml/FontAwesomeModelQml/FontawesomeModel.qml"), "FontAwesomeModelQml", 1, 0, "FAMQ");
#endif
        faModelWasRegistered = true;
    }
}
