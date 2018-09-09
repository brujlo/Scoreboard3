#ifndef CONNECTIONMAKER_H
#define CONNECTIONMAKER_H

#include <QMainWindow>
#include "scoreboard_shower.h"
#include "scoreboard.h"
#include <QtSql/QSqlDatabase>

class ConnectionMaker
{
public:
    ConnectionMaker();
    bool makeConnection();

private:
    QSqlDatabase db;
    QString DBQ;
    QString driver;
    QString connString;
    QString DSN;
};

#endif // CONNECTIONMAKER_H
