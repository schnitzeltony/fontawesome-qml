#include <fontawesome-qml.h>
#include <QQmlEngine>

bool FontAwesomeQml::faWasRegistered = false;
bool FontAwesomeQml::faModelWasRegistered = false;

void FontAwesomeQml::registerFAQml()
{
    // Avoid multiple registration
    if(!faWasRegistered) {
        qmlRegisterSingletonType(QUrl("qrc:/qml/Fontawesome.qml"), "FontAwesomeQml", 1, 0, "FAQ");
        faWasRegistered = true;
    }
}

void FontAwesomeQml::registerFAModelQml()
{
    // Avoid multiple registration
    if(!faModelWasRegistered) {
        qmlRegisterSingletonType(QUrl("qrc:/qml/FontawesomeModel.qml"), "FontAwesomeModelQml", 1, 0, "FAMQ");
        faModelWasRegistered = true;
    }
}
