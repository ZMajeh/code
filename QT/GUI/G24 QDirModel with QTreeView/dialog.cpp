#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);

    // Build model
    model=new QDirModel(this);                                          // Making model
    model->setReadOnly(false);                                          // To get ability to modify
    model->setSorting(QDir::Name|QDir::DirsFirst|QDir::IgnoreCase);     // Sorting files
    // Set model
    ui->treeView->setModel(model);
    // Configure view
    QModelIndex qmi= model->index(".");
    ui->treeView->expand(qmi);                  // Auto click on +
    ui->treeView->scrollTo(qmi);                // Scroll to file
    ui->treeView->setCurrentIndex(qmi);         // Select that index
    ui->treeView->resizeColumnToContents(0);    // Resize to column number
}

Dialog::~Dialog()
{
    delete ui;
}

// SLOT
// To create new
void Dialog::on_pushButton_clicked()
{
    // Get index of selected
    QModelIndex qmi=ui->treeView->currentIndex();
    // Is selected valid
    if(!qmi.isValid())return;
    // Get name from user
    QString name=QInputDialog::getText(this,"Input","Enter Dir name");
    // Is name valid
    if(name.isEmpty())return;
    // Create directory
    model->mkdir(qmi,name);
}

// SLOT
// To delete existing
void Dialog::on_pushButton_2_clicked()
{
    // Get index of selected
    QModelIndex qmi=ui->treeView->currentIndex();
    // Is selected valid
    if(!qmi.isValid())return;
    // Get user's configuration to delete
    if(QMessageBox::information(this,"Conformation","Are you sure you want to delete : "+model->fileInfo(qmi).fileName(),"Yes","No")==0)
    {
        // rmdir() to remove directory
        if(model->fileInfo(qmi).isDir())
            model->rmdir(qmi);
        // remove to remove file
        else
            model->remove(qmi);
    }
}
