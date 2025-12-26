#include <fontawesome-qml.h>
#include "fontawesomehash.h"
#include <QFontDatabase>
#include <QQmlEngine>

#if !defined(FA_QML_DEBUG_SOURCE_DIR)
static bool faWasRegistered;
static bool faModelWasRegistered;
#endif

static bool bRegularFontWasRegistered;
static bool bSolidFontWasRegistered;
static bool bBrandsFontWasRegistered;

void FontAwesomeQml::registerFonts(bool bRegularFont, bool bSolidFont, bool bBrandFont)
{
    Q_INIT_RESOURCE(fontawesome_qml);
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
    // we have already many register functions so auto.register hash
    // if not used it is of almost zero cost
    FontAwesomeHash::registerQML();
#if defined(FA_QML_DEBUG_SOURCE_DIR)
    QStringList importPaths = engine->importPathList();
    QString importPath = QStringLiteral(QT_STRINGIFY(FA_QML_DEBUG_SOURCE_DIR));
    if(!importPaths.contains(importPath)) {
        engine->addImportPath(importPath);
    }
#else
    if(!faWasRegistered) {
        Q_UNUSED(engine)
        qmlRegisterSingletonType(QUrl("qrc:/qml/FontAwesomeQml/Fontawesome.qml"), "FontAwesomeQml", 1, 0, "FAQ");
        faWasRegistered = true;
    }
#endif
}

void FontAwesomeQml::registerFAModelQml(QQmlEngine* engine)
{
#if defined(FA_QML_DEBUG_SOURCE_DIR)
    QStringList importPaths = engine->importPathList();
    QString importPath = QStringLiteral(QT_STRINGIFY(FA_QML_DEBUG_SOURCE_DIR));
    if(!importPaths.contains(importPath)) {
        engine->addImportPath(importPath);
    }
#else
    if(!faModelWasRegistered) {
        Q_UNUSED(engine)
        qmlRegisterSingletonType(QUrl("qrc:/qml/FontAwesomeModelQml/FontawesomeModel.qml"), "FontAwesomeModelQml", 1, 0, "FAMQ");
        faModelWasRegistered = true;
    }
#endif
}
