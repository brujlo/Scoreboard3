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

        mModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
        ui->tableView->setModel(mModel);
        ui->tableView->hideColumn(0);

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
    if(mModel->submitAll()){
        QMessageBox::information(this,tr("Settings"), tr("Updated."));
    }else{
        QMessageBox::critical(this,tr("Error"), "Not updated!");
    }
}

void DBInput::on_dbDone_clicked()
{
    this->close();
}

void DBInput::on_dbDeleteAll_clicked()
{
    mModel->removeRows(0, mModel->rowCount());
}
