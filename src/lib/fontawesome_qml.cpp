#include <fontawesome-qml.h>
#include <QQmlEngine>
#include <QFontDatabase>

FontAwesomeQml* FontAwesomeQml::theInstance = nullptr;

int FontAwesomeQml::registerQml()
{
    // Fonts must be loaded before QML is running
    getInstance();
    return qmlRegisterSingletonType<FontAwesomeQml>("FontAwesomeQml", 1, 0, "FA", FontAwesomeQml::getQMLInstance);
}

FontAwesomeQml *FontAwesomeQml::getInstance()
{
    if(!theInstance) {
        theInstance = new FontAwesomeQml();
        Q_ASSERT(QFontDatabase::addApplicationFont(QStringLiteral(":/Font-Awesome/webfonts/fa-brands-400.ttf")) != -1);
        Q_ASSERT(QFontDatabase::addApplicationFont(QStringLiteral(":/Font-Awesome/webfonts/fa-regular-400.ttf")) != -1);
        Q_ASSERT(QFontDatabase::addApplicationFont(QStringLiteral(":/Font-Awesome/webfonts/fa-solid-900.ttf")) != -1);
    }
    return theInstance;
}

QObject *FontAwesomeQml::getQMLInstance(QQmlEngine *t_engine, QJSEngine *t_scriptEngine)
{
    Q_UNUSED(t_engine)
    Q_UNUSED(t_scriptEngine)
    return getInstance();
}

FontAwesomeQml::FontAwesomeQml(QObject *parent) : QObject(parent)
{
}

QString FontAwesomeQml::icon(const QString &symbol, QColor color) const
{
    // TODO

}
