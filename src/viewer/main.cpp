#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <fontawesome-qml.h>
#include <sortfilterproxymodel.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    SortFilterProxyModel::registerQml();
    FontAwesomeQml::registerFonts();
    FontAwesomeQml::registerFAQml(&engine);
    FontAwesomeQml::registerFAModelQml(&engine);

    const QUrl url(QStringLiteral("qrc:/qml/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
