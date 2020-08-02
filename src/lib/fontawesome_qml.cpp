#include <fontawesome-qml.h>
#include <QQmlEngine>
#include <QFontDatabase>

FontAwesomeQml* FontAwesomeQml::theInstance = nullptr;

int FontAwesomeQml::registerQml(bool faBrands, bool faRegular, bool faSolid)
{
    // Fonts must be loaded before QML is running
    getInstance(faBrands, faRegular, faSolid);
    return qmlRegisterSingletonType<FontAwesomeQml>("FontAwesomeQml", 1, 0, "FA", FontAwesomeQml::getQMLInstance);
}

FontAwesomeQml *FontAwesomeQml::getInstance(bool faBrands, bool faRegular, bool faSolid)
{
    if(!theInstance) {
        theInstance = new FontAwesomeQml();
        if(faBrands) {
            Q_ASSERT(QFontDatabase::addApplicationFont(QStringLiteral(":/Font-Awesome/webfonts/fa-brands-400.ttf")) != -1);
        }
        if(faRegular) {
            Q_ASSERT(QFontDatabase::addApplicationFont(QStringLiteral(":/Font-Awesome/webfonts/fa-regular-400.ttf")) != -1);
        }
        if(faSolid) {
            Q_ASSERT(QFontDatabase::addApplicationFont(QStringLiteral(":/Font-Awesome/webfonts/fa-solid-900.ttf")) != -1);
        }
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
