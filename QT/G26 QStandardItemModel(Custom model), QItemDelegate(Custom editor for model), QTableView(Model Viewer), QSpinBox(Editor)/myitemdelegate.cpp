#include "myitemdelegate.h"

MyItemDelegate::MyItemDelegate(QObject *parent) :
    QItemDelegate(parent)
{

}


// Create editor
QWidget* MyItemDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    // Init editor
    QSpinBox *spin=new QSpinBox(parent);
    // Set max and minimum values
    spin->setMinimum(0);
    spin->setMaximum(50);
    // return
    return spin;
}
// Update back to model after editor is done editing
void MyItemDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    // Extract editor from param and cast to appropriate editor widget
    QSpinBox *spin= static_cast<QSpinBox*>(editor);
    // Process input text
    spin->interpretText();
    // Extract input
    int val=spin->value();
    // Store it to model
    model->setData(index,val,Qt::EditRole);
}
// Get data from view to editor to edit
void MyItemDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    // Extract editor from param and cast to appropriate editor widget
    QSpinBox *spin= static_cast<QSpinBox*>(editor);
    // Get currentvalue from table to edit
    int val=index.model()->data(index,Qt::EditRole).toInt();
    // Set it to editor
    spin->setValue(val);
}
// Set geometry to editor
void MyItemDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    // Set geometry
    editor->setGeometry(option.rect);
}
