#include "dbinput.h"
#include "ui_dbinput.h"

#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <connectionmaker.h>
#include <QMessageBox>

DBInput::DBInput(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DBInput)
{
    ui->setupUi(this);
    ConnectionMaker cm;

    if(cm.makeConnection()){
        mModel = new QSqlTableModel(this);
        mModel->setTable("teams");
        mModel->select();

        ui->tableView->setModel(mModel);
        isLoaded = true;
    }else{
        QMessageBox::information(this,tr("DB connection"), tr("Connection error."));
        isLoaded = false;
    }
}

DBInput::~DBInput()
{
    delete ui;
}

void DBInput::on_dbNew_clicked()
{
    mModel->insertRow(mModel->rowCount());
}

void DBInput::on_dbDelete_clicked()
{
    mModel->removeRow(ui->tableView->currentIndex().row());
}

void DBInput::on_dbUpdate_clicked()
{
    mModel->select();
}

void DBInput::on_buttonBox_accepted()
{

}
