#include "timer.h"
#include "scoreboard.h"
#include <QtCore>

Timer::Timer()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MySlot()));
    timer->start(1000);
}

void Timer::MySlot(){

}
