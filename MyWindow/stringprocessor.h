#ifndef STRINGPROCESSOR_H
#define STRINGPROCESSOR_H

#include <QObject>

class StringProcessor : public QObject
{
    Q_OBJECT
public:
    StringProcessor();
public slots:
    void PureSting(const QString& str);
    void UpcaseString(const QString& str);
    void InverseString(const QString& str);
    void UpcaseInverseString(const QString& str);
};

#endif // STRINGPROCESSOR_H
