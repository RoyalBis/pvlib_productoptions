#ifndef SIZEOPTION_H
#define SIZEOPTION_H

#include <QObject>

class SizeOption
{
public:
    SizeOption(const QString &name, const QString &value);

    QString optionName() const;
    QString  optionValue() const;

private:
    QString myName;
    QString  myValue;
};

#endif // SIZEOPTION_H
