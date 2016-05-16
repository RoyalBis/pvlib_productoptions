#ifndef OPTIONMODEL_H
#define OPTIONMODEL_H

#include "coloroption.h"

#include <QAbstractListModel>

class OptionModel : public QAbstractListModel
{
    Q_OBJECT
public:
    enum OptionRoles {
        NameRole = Qt::UserRole + 1,
        ValueRole
    };

    OptionModel(QObject *parent = 0);

    void addOption(const ColorOption &option);

    int rowCount(const QModelIndex & parent = QModelIndex()) const;

    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const;
protected:
    QHash<int, QByteArray> roleNames() const;
private:
    QList<ColorOption> myColorOptions;
};
#endif // OPTIONMODEL_H
