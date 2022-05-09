#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // To build model, we need data
    QString data="cat,dog,mouse";

    // Build model from data
    model=new QStringListModel(this);
    model->setStringList(data.split(","));

    // Connect model to view
    ui->comboBox->setModel(model);
    ui->listView->setModel(model);

    // Changes to view as per need
    ui->listView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    // Add last

    // To push at last, get current item count
    int pos=model->rowCount();
    // Insert 1 row at that position
    model->insertRows(pos,1);
    // Using index twice, so Extract and store index for future use
    QModelIndex qmi=model->index(pos);
    // Move current cursor to last row, which is just added above
    ui->listView->setCurrentIndex(qmi);
    // Edit this row
    ui->listView->edit(qmi);
}

void Dialog::on_pushButton_2_clicked()
{
    // Insert
    // To insert at specific position, get position number of selected index
    int pos=ui->listView->currentIndex().row();
    // Insert one empty row at position
    model->insertRows(pos,1);
    // Extract index of added row
    QModelIndex qmi=model->index(pos);
    // Move cursor to newe;y added item
    ui->listView->setCurrentIndex(qmi);
    // Edit newly added item
    ui->listView->edit(qmi);
}

void Dialog::on_pushButton_3_clicked()
{
    //Delete
    // To remove selected item
    // Get selected item by currentIndex()
    // Get row number by row() method
    // To delete single row, parameter is 1
    // Method: removeRows(index,howMany) is method of model, used to remove item from model
    model->removeRows(ui->listView->currentIndex().row(),1);
}



//Note: To add we use model->insertRows(index,howMany)
//Note: To remove we use model->removeRows(index,howMany)
//Note: To set model we use setModel(Model) method of view

//Steps: Create model, setModel to view(UI), manipulateModel only to modify UI
