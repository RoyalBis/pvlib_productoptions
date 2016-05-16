#include "coloroptionmodel.h"

ColorOptionModel::ColorOptionModel(QObject *parent)
    : QAbstractListModel(parent)
{
}

void ColorOptionModel::addOption(const ColorOption &option)
{
    //Allows response to the insert
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    myColorOptions << option;
    endInsertRows();
}

int ColorOptionModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    return myColorOptions.count();
}

QVariant ColorOptionModel::data(const QModelIndex &index, int role) const
{
    //First check if the index is out of bounds
    //if the index is out of range return an empty QVariant
    if (index.row() < 0 || index.row() >= myColorOptions.count())
        return QVariant();   //empty

    //we can get the item at that index
    const ColorOption &option = myColorOptions[index.row()];

    //Now we check what data role to return from the item
    if (role == NameRole)
        return option.colorName();
    else if (role == ValueRole)
        return option.colorValue();

    //Return an empty QVariant if the role is unknown
    return QVariant();
}

QHash<int, QByteArray> ColorOptionModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[NameRole] = "colorName";
    roles[ValueRole] = "colorValue";
    return roles;
}
