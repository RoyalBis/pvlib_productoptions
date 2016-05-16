#ifndef COLOROPTION_H
#define COLOROPTION_H

#include <QObject>
#include <QColor>

class ColorOption
{
public:
    ColorOption(const QString &name, const QColor &value);

    QString colorName() const;
    QColor  colorValue() const;

private:
    QString myColorName;
    QColor  myColorValue;
};

#endif // COLOROPTION_H
