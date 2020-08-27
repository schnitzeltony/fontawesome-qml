#ifndef FONTAWESOME_QML_H
#define FONTAWESOME_QML_H
#include <QObject>
#include "fontawesomeqml_export.h"

// forward
class QQmlEngine;

class FONTAWESOMEQML_EXPORT FontAwesomeQml : public QObject
{
    Q_OBJECT
public:
    /**
     * @brief registerFonts Register Font-Awesome fonts from C++ before QML
     * @param bRegularFont true: register fa-regular-400.ttf
     * @param bSolidFont true: register fa-solid-900.ttf
     * @param bBrandFont true: register fa-brands-400.ttf
     */
    static void registerFonts(bool bRegularFont = true, bool bSolidFont = true, bool bBrandFont = true);
    /**
     * @brief registerFAQml Register Font-Awesome QML component (add 'import FontAwesomeQml 1.0' in your QML
     * to use it
     * @param engine the engine to register for - only used for debug
     */
    static void registerFAQml(QQmlEngine *engine);
    /**
     * @brief registerFAModelQml Register model wrapper supplying faModel
     * check out viewer application to see it's usage
     * @param engine the engine to register for - only used for debug
     */
    static void registerFAModelQml(QQmlEngine* engine);
private:
    static bool faWasRegistered;
    static bool faModelWasRegistered;

    static bool bRegularFontWasRegistered;
    static bool bSolidFontWasRegistered;
    static bool bBrandsFontWasRegistered;
};

#endif // FONTAWESOME_QML_H
