#ifndef FABASE_H
#define FABASE_H

#include <QObject>

// forward
class QFontDatabase;


class FABase : public QObject
{
    Q_OBJECT
public:
    explicit FABase(QObject *parent = nullptr);

    // TODO: model / iteration
};

#endif // FABASE_H
