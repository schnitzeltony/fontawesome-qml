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
    static void registerFAQml();
    static void registerFAModelQml();
private:
    static bool faWasRegistered;
    static bool faModelWasRegistered;
};

#endif // FONTAWESOME_QML_H
