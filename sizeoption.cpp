#include "sizeoption.h"

SizeOption::SizeOption(const QString &name, const QString &value)
    : myName(name), myValue(value)
{
}

QString SizeOption::optionName() const
{
    return myName;
}

QString SizeOption::optionValue() const
{
    return myValue;
}

