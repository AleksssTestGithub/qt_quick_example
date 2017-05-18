#ifndef BRAINS_H
#define BRAINS_H

#include <QObject>

class Brains : public QObject
{
    Q_OBJECT
public:
    explicit Brains(QObject *parent = 0);

signals:

public slots:
    void Addition(const QString& msg);
};

#endif // BRAINS_H
