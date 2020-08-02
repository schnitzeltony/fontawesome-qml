#ifndef FONTAWESOME_QML_H
#define FONTAWESOME_QML_H

#include <QObject>
#include <QColor>
#include "fontawesomeqml_export.h"

// forwards
class QQmlEngine;
class QJSEngine;

class FONTAWESOMEQML_EXPORT FontAwesomeQml : public QObject
{
    Q_OBJECT
public:
    static int registerQml(bool faBrands=true, bool faRegular=true, bool faSolid=true);
    static FontAwesomeQml *getInstance(bool faBrands=true, bool faRegular=true, bool faSolid=true);

    Q_PROPERTY(QString family READ family CONSTANT);
    QString family() { return QStringLiteral("Font Awesome 5 Free"); };

    Q_INVOKABLE QString icon(const QString &symbol, QColor color) const;

    // START AUTO-GENERATED
    Q_PROPERTY(QString firefox_browser READ firefox_browser CONSTANT);
    QString firefox_browser() const { return QString::fromUtf8("\ue007"); }
    Q_PROPERTY(QString flag READ flag CONSTANT);
    QString flag() const { return QString::fromUtf8("\uf024"); }
    // END AUTO-GENERATED
private:
    explicit FontAwesomeQml(QObject *parent = nullptr);
    static QObject *getQMLInstance(QQmlEngine *t_engine, QJSEngine *t_scriptEngine);

    static FontAwesomeQml* theInstance;
};

#endif // FONTAWESOME_QML_H
