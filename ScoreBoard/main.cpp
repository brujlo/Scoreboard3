#include "scoreboard.h"
#include <QApplication>
#include <QGraphicsView>
#include <QGraphicsScene>
//#include <QDeclarativeEngine>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    Scoreboard w;
    w.show();


    return a.exec();
}
