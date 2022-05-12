#ifndef MYITEMDELEGATE_H
#define MYITEMDELEGATE_H

#include <QItemDelegate>
#include <QWidget>
#include <QObject>
#include <QStyleOptionViewItem>
#include <QModelIndex>
#include <QAbstractItemModel>
#include <QSpinBox>

class MyItemDelegate : public QItemDelegate
{
    Q_OBJECT
public:
    explicit MyItemDelegate(QObject *parent = 0);
    // This 4 methods are virtual and must be redefined to execute code without errors

    // This creates editor widget, is placed in current Index to edit item
    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    // This method is used to store data back to model after edit
    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;
    // This method is used to get data from table view to editor to edit it(otherwise it init to 0/ and have to re insert value/ old value disappears)
    void setEditorData(QWidget *editor, const QModelIndex &index) const;
    // This is to initialize geometry for editor widget
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;
signals:

public slots:

};

#endif // MYITEMDELEGATE_H
