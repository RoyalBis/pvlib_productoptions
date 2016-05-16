#include "coloroption.h"

ColorOption::ColorOption(const QString &name, const QColor &value)
    : myColorName(name), myColorValue(value)
{
}

QString ColorOption::colorName() const
{
    return myColorName;
}

QColor ColorOption::colorValue() const
{
    return myColorValue;
}
