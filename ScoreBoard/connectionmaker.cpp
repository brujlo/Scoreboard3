#include "connectionmaker.h"
#include "dbinput.h"

#include <QStandardPaths>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QtSql/QSqlError>
#include <Windows.h>

ConnectionMaker::ConnectionMaker()
{

}

bool ConnectionMaker::makeConnection(){
    db = QSqlDatabase::addDatabase("QODBC");

    //DBQ = "DBQ=E:/VisualProjects/QT/QT2/ScoreBoard/scoreboardDB.mdb;";
    DBQ = "DBQ=" + Scoreboard::dbPath;
    DSN = "DSN=C:/Users/bruno.brckovic/Documents/scoreboard2;";
    driver = "Driver={Microsoft Access Driver (*.mdb, *.accdb)};";
    connString = driver + DBQ;

    db.setConnectOptions();
    db.setDatabaseName(connString);

    if(db.open()){
        //qDebug() << "oK";
        return true;
    }else{
        //qDebug() << db.isValid();
        //qDebug() << db.lastError().text();
        //qDebug() << db.isDriverAvailable("Microsoft Access Driver (*.mdb)");
        //qDebug() << db.drivers();
        //qDebug() << db.isOpen();
        return false;
    }
}
