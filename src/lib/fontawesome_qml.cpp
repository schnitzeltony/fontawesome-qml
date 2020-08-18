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

static QString getQmlFile(QString strFile)
{
#if defined(QML_DEBUG_SOURCE_DIR) && defined(LOAD_QML_FROM_SOURCE)
    return QStringLiteral("file:///" QT_STRINGIFY(QML_DEBUG_SOURCE_DIR) "/") + strFile;
#else
    return QStringLiteral("qrc:/") + strFile;
#endif
}

void FontAwesomeQml::registerFAQml()
{
    if(!faWasRegistered) {
        qmlRegisterSingletonType(QUrl(getQmlFile("qml/Fontawesome.qml")), "FontAwesomeQml", 1, 0, "FAQ");
        faWasRegistered = true;
    }
}

void FontAwesomeQml::registerFAModelQml()
{
    // Avoid multiple registration
    if(!faModelWasRegistered) {
        qmlRegisterSingletonType(QUrl(getQmlFile("qml/FontawesomeModel.qml")), "FontAwesomeModelQml", 1, 0, "FAMQ");
        faModelWasRegistered = true;
    }
}
