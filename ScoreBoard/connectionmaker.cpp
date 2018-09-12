#include "connectionmaker.h"
#include "dbinput.h"

#include <QStandardPaths>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QtSql/QSqlError>
#include <Windows.h>

ConnectionMaker::ConnectionMaker(){}

bool ConnectionMaker::makeConnection(){
    db = QSqlDatabase::addDatabase("QODBC");

    DBQ = "DBQ=" + Scoreboard::dbPath;
    DSN = "DSN=C:/Users/bruno.brckovic/Documents/scoreboard2;";
    driver = "Driver={Microsoft Access Driver (*.mdb, *.accdb)};";
    connString = driver + DBQ;

    db.setConnectOptions();
    db.setDatabaseName(connString);

    return db.open() ? true : false;
}
