#include "timeandfolu.h"
#include "ui_timeandfolu.h"

#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlError>
#include <connectionmaker.h>
#include <QMessageBox>

TimeAndFolu::TimeAndFolu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TimeAndFolu)
{
    ui->setupUi(this);

    ConnectionMaker cm;

    if(cm.makeConnection()){
        QSqlQuery query;

        query.exec("select * from Settings");

        while (query.next()) {
            ui->HalftimeInput->setText(query.value(1).toString());
            ui->FolusInput->setText(query.value(2).toString());
        }

        isLoaded = true;
    }else{
        QMessageBox::information(this,tr("DB connection"), tr("Connection error."));
        isLoaded = false;
    }
}

TimeAndFolu::~TimeAndFolu()
{
    delete ui;
}

void TimeAndFolu::on_updateTiFoBT_clicked()
{
    ConnectionMaker cm;
    QSqlQuery query;
    int halftime = ui->HalftimeInput->text().toInt();
    int fouls = ui->FolusInput->text().toInt();

    query.prepare("UPDATE Settings SET HalfTime = " + QString::number(halftime) + ", Fouls = " + QString::number(fouls) + " WHERE ID = 1;");

    if(query.exec()){
        QMessageBox::information(this,tr("Settings"), tr("Updated."));
    }else{
        QMessageBox::critical(this,tr("error::"), query.lastError().text());
    }

}
