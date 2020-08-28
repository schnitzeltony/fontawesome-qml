#ifndef FONTAWESOMEHASH_H
#define FONTAWESOMEHASH_H

#include <QObject>
#include <QHash>

class QQmlEngine;
class QJSEngine;

class FontAwesomeHash : public QObject
{
    Q_OBJECT
public:
    static void registerQML();
    Q_INVOKABLE static QString strToGlyph(QString strGlypName);
private:
    explicit FontAwesomeHash(QObject *parent = nullptr);
    static QObject *getQMLInstance(QQmlEngine *t_engine, QJSEngine *t_scriptEngine);

    static bool faHashWasRegistered;
    static QHash<QString, QString> faHash;
};

#endif // FONTAWESOMEHASH_H
