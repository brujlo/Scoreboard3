#include "scoreboard.h"
#include "ui_scoreboard.h"
#include "scoreboard_shower.h"
#include "dbinput.h"
#include "connectionmaker.h"
#include "timeandfolu.h"
#include "mythread.h"

#include <QMessageBox>
#include <QDebug>
#include <QtSql/QSqlQuery>
#include <QVector2D>
#include <QThread>
#include <QTimer>
#include <QDate>
#include <Windows.h>
#include <QFileDialog>

int Scoreboard::timerLimit = 0;
QString Scoreboard::dbPath = "";

Scoreboard::Scoreboard(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Scoreboard)
{
    ui->setupUi(this);

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(setTimer()));
    scoreboardShower = new Scoreboard_Shower(this);
}

Scoreboard::~Scoreboard()
{
    delete ui;
}

void Scoreboard::on_pushButton_clicked()
{
    QPalette pal = ui->pushButton->palette();
    ui->pushButton->setAutoFillBackground(true);
    pal.setColor(QPalette::Button, QColor(240,240,240));
    ui->pushButton->setPalette(pal);
    //scoreboardShower = new Scoreboard_Shower(this);
    scoreboardShower->adjustSize();
    scoreboardShower->setWindowFlags(windowFlags() | Qt::WindowFullscreenButtonHint);
    //scoreboardShower->showMaximized();
    scoreboardShower->show();

}

void Scoreboard::on_setTeams_clicked()
{
    DBInput dbi;
    if (dbi.isLoaded){
        dbi.setModal(true);
        dbi.exec();
    }
}


void Scoreboard::on_setHalfTime_clicked()
{
    TimeAndFolu tf;
    if (tf.isLoaded){
        tf.setModal(true);
        tf.exec();
    }
}

void Scoreboard::on_goolPlusHome_clicked()
{
    ui->goalHome->setStyleSheet("QLabel { background-color : green; color : white}");
    ui->goalHome->setText(QString::number(ui->goalHome->text().toInt() + 1));
    qApp->processEvents();
    QThread::msleep(200);
    ui->goalHome->setStyleSheet("");

    connect(this, SIGNAL(goalHome(QString)), scoreboardShower, SLOT(goalHome(QString)));
    emit goalHome(ui->goalHome->text());
}

void Scoreboard::on_goolMinusHome_clicked()
{
    if(ui->goalHome->text().toInt()> 0){
        ui->goalHome->setStyleSheet("QLabel { background-color : red; color : white}");
        ui->goalHome->setText(QString::number(ui->goalHome->text().toInt() - 1));
        qApp->processEvents();
        QThread::msleep(200);
        ui->goalHome->setStyleSheet("");

        connect(this, SIGNAL(goalHome(QString)), scoreboardShower, SLOT(goalHome(QString)));
        emit goalHome(ui->goalHome->text());
    }
}

void Scoreboard::on_goolPlusAway_clicked()
{
    ui->goalAway->setStyleSheet("QLabel { background-color : green; color : white}");
    ui->goalAway->setText(QString::number(ui->goalAway->text().toInt() + 1));
    qApp->processEvents();
    QThread::msleep(200);
    ui->goalAway->setStyleSheet("");

    connect(this, SIGNAL(goalAway(QString)), scoreboardShower, SLOT(goalAway(QString)));
    emit goalAway(ui->goalAway->text());
}

void Scoreboard::on_goolMinusAway_clicked()
{
    if(ui->goalAway->text().toInt()> 0){
        ui->goalAway->setStyleSheet("QLabel { background-color : red; color : white}");
        ui->goalAway->setText(QString::number(ui->goalAway->text().toInt() - 1));
        qApp->processEvents();
        QThread::msleep(200);
        ui->goalAway->setStyleSheet("");

        connect(this, SIGNAL(goalAway(QString)), scoreboardShower, SLOT(goalAway(QString)));
        emit goalAway(ui->goalAway->text());
    }
}

void Scoreboard::on_foulPlusHome_clicked()
{
    int foulsCommited = foulsStringToInt(ui->foulsCommitedHome->text()) + 1;
    int foulsLimit =limtFoulsStringToInt(ui->foulsCommitedHome->text());
    QString value = QString::number(foulsCommited) + "/" + QString::number(foulsLimit);

    if(foulsCommited <= foulsLimit){
        ui->foulsCommitedHome->setStyleSheet("QLabel { background-color : green; color : white}");
        ui->foulsCommitedHome->setText(value);

        connect(this, SIGNAL(foulHome(QString)), scoreboardShower, SLOT(foulHome(QString)));
        emit foulHome(ui->foulsCommitedHome->text());

        qApp->processEvents();
        QThread::msleep(200);
        ui->foulsCommitedHome->setStyleSheet("");
    }
}

void Scoreboard::on_foulMinusHome_clicked()
{
    int foulsCommited = foulsStringToInt(ui->foulsCommitedHome->text()) - 1;
    int foulsLimit =limtFoulsStringToInt(ui->foulsCommitedHome->text());
    QString value = QString::number(foulsCommited) + "/" + QString::number(foulsLimit);

    if(foulsCommited >= 0){
        ui->foulsCommitedHome->setStyleSheet("QLabel { background-color : red; color : white}");
        ui->foulsCommitedHome->setText(value);

        connect(this, SIGNAL(foulHome(QString)), scoreboardShower, SLOT(foulHome(QString)));
        emit foulHome(ui->foulsCommitedHome->text());

        qApp->processEvents();
        QThread::msleep(200);
        ui->foulsCommitedHome->setStyleSheet("");
    }

}

void Scoreboard::on_foulPlusAway_clicked()
{
    int foulsCommited = foulsStringToInt(ui->folusCommitedAway->text()) + 1;
    int foulsLimit =limtFoulsStringToInt(ui->folusCommitedAway->text());
    QString value = QString::number(foulsCommited) + "/" + QString::number(foulsLimit);

    if(foulsCommited <= foulsLimit){
        ui->folusCommitedAway->setStyleSheet("QLabel { background-color : green; color : white}");
        ui->folusCommitedAway->setText(value);

        connect(this, SIGNAL(foulAway(QString)), scoreboardShower, SLOT(foulAway(QString)));
        emit foulAway(ui->folusCommitedAway->text());

        qApp->processEvents();
        QThread::msleep(200);
        ui->folusCommitedAway->setStyleSheet("");
    }
}

void Scoreboard::on_foulMinusAway_clicked()
{
    int foulsCommited = foulsStringToInt(ui->folusCommitedAway->text()) - 1;
    int foulsLimit =limtFoulsStringToInt(ui->folusCommitedAway->text());
    QString value = QString::number(foulsCommited) + "/" + QString::number(foulsLimit);

    if(foulsCommited >= 0){
        ui->folusCommitedAway->setStyleSheet("QLabel { background-color : red; color : white}");
        ui->folusCommitedAway->setText(value);

        connect(this, SIGNAL(foulAway(QString)), scoreboardShower, SLOT(foulAway(QString)));
        emit foulAway(ui->folusCommitedAway->text());

        qApp->processEvents();
        QThread::msleep(200);
        ui->folusCommitedAway->setStyleSheet("");
    }
}

int Scoreboard::foulsStringToInt(QString fc){
    QRegExp rx("(\\/)");
    QStringList arr = fc.split(rx);

    return arr.at(0).toInt();
}

int Scoreboard::limtFoulsStringToInt(QString fc){
    QRegExp rx("(\\/)");
    QStringList arr = fc.split(rx);

    return arr.at(1).toInt();
}

void Scoreboard::on_resetTimer_clicked()
{
    ui->TimerLabel->setStyleSheet("QLineEdit { background: rgb(240, 240, 240); color : rgb(0, 0, 0) }");
    ConnectionMaker cm;
    QString foulsLimit;

    QPalette pal = ui->pauseTimer->palette();
    ui->pauseTimer->setAutoFillBackground(true);
    pal.setColor(QPalette::Button, QColor(240,240,240));
    ui->pauseTimer->setPalette(pal);

    if(cm.makeConnection()){
        QSqlQuery query;

        if(ui->comboBox_2->count() < 1 || ui->comboBox->count() < 1){
            query.exec("select * from teams");
            ui->comboBox->clear();
            ui->comboBox_2->clear();
            ui->comboBox->addItem("Team Name Away");
            ui->comboBox_2->addItem("Team Name Home");
            while (query.next()) {
                ui->comboBox->addItem(query.value(1).toString());
                ui->comboBox_2->addItem(query.value(1).toString());
            }
        }

        query.exec("select * from Settings");
        while (query.next()) {
            foulsLimit = query.value(2).toString();
        }

        query.exec("select * from Settings");
        while (query.next()) {
            timerLimit = query.value(1).toString().toInt();
        }

        int ht =ui->halfTimevalue->text().toInt();

        switch (ht) {
        case 1:
            ui->halfTimevalue->setText("2");
            break;
        default:
            ui->halfTimevalue->setText("1");
        }

        if(ht == 2 || ht == 0){
            ui->goalAway->setText("0");
            ui->goalHome->setText("0");

            connect(this, SIGNAL(goalHome(QString)), scoreboardShower, SLOT(goalHome(QString)));
            emit goalHome(ui->goalHome->text());

            connect(this, SIGNAL(goalAway(QString)), scoreboardShower, SLOT(goalAway(QString)));
            emit goalAway(ui->goalAway->text());

            ui->comboBox->setCurrentIndex(0);
            ui->comboBox_2->setCurrentIndex(0);
        }
        ui->foulsCommitedHome->setText("0/" + foulsLimit);
        ui->folusCommitedAway->setText("0/" + foulsLimit);

        connect(this, SIGNAL(foulAway(QString)), scoreboardShower, SLOT(foulAway(QString)));
        emit foulAway(ui->folusCommitedAway->text());

        connect(this, SIGNAL(foulHome(QString)), scoreboardShower, SLOT(foulHome(QString)));
        emit foulHome(ui->foulsCommitedHome->text());

        ui->TimerLabel->setText(((timerLimit < 10) ? "0" + QString::number(timerLimit) : QString::number(timerLimit)) + ":00");
    }else{
        QMessageBox::information(this,tr("DB connection"), tr("Connection error."));
    }
}

void Scoreboard::on_startTimer_clicked()
{
    QPalette pal = ui->pushButton->palette();
    ui->pushButton->setAutoFillBackground(true);

    if(!scoreboardShower->isVisible()){
        pal.setColor(QPalette::Button, QColor(Qt::red));
        ui->pushButton->setPalette(pal);
    }else{
        pal.setColor(QPalette::Button, QColor(240,240,240));
        ui->pushButton->setPalette(pal);
    }
    ui->TimerLabel->setStyleSheet("QLineEdit { background: rgb(240, 240, 240); color : rgb(0, 0, 0) }");
    if (ui->TimerLabel->text() != "00:00")
        timer->start(1000);
}

void Scoreboard::setTimer()
{
    int min;
    int sec;
    bool show = true;

    QRegExp rx("(\\:)");
    QStringList arr = ui->TimerLabel->text().split(rx);

    min = arr.at(0).toInt();
    sec = arr.at(1).toInt();

    if(sec == 0){
        if(min == 0){
            timer->stop();
            for(int i = 0; i < 10; i++){
                ui->TimerLabel->setStyleSheet("QLineEdit { background: rgb(255, 0, 51); color : rgb(255, 255, 255) }");
                qApp->processEvents();
                QThread::msleep(500);
                ui->TimerLabel->setStyleSheet("QLineEdit { background: rgb(240, 240, 240); color : rgb(0, 0, 0) }");
                qApp->processEvents();
                QThread::msleep(500);
                show = false;
               }
        }
        sec = 59;
        min--;
    }else{
        sec--;
    }
    if(show){
        ui->TimerLabel->setText(((min < 10) ? "0" + QString::number(min) : QString::number(min)) + ":" + ((sec < 10) ? "0" + QString::number(sec) : QString::number(sec)));
    }
}

void Scoreboard::on_pauseTimer_clicked()
{
    QPalette pal = ui->pauseTimer->palette();
    ui->pauseTimer->setAutoFillBackground(true);

    if (ui->TimerLabel->text() != "00:00"){
        if(timer->isActive()){
            timer->stop();
            ui->TimerLabel->setStyleSheet("QLineEdit { background: rgb(239, 255, 0); color : rgb(0, 145, 255) }");
            ui->pauseTimer->setStyleSheet("QLabel { background-color : rgb(239, 255, 0); color : rgb(0, 145, 255)}");
            pal.setColor(QPalette::Button, QColor(Qt::yellow));
            ui->pauseTimer->setPalette(pal);
        }
        else{
            timer->start();
            ui->TimerLabel->setStyleSheet("QLineEdit { background: rgb(240, 240, 240); color : rgb(0, 0, 0) }");
            pal.setColor(QPalette::Button, QColor(240,240,240));
            ui->pauseTimer->setPalette(pal);
        }
    }
}

void Scoreboard::on_TimerLabel_textChanged(const QString &arg1)
{
    connect(this, SIGNAL(timerHasChanged(QString)), scoreboardShower, SLOT(timerHasChanged(QString)));
    emit timerHasChanged(arg1);

}

void Scoreboard::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    connect(this, SIGNAL(teamHome(QString)), scoreboardShower, SLOT(teamHome(QString)));
    emit teamHome(arg1);
}

void Scoreboard::on_comboBox_currentTextChanged(const QString &arg1)
{
    connect(this, SIGNAL(teamAway(QString)), scoreboardShower, SLOT(teamAway(QString)));
    emit teamAway(arg1);
}

void Scoreboard::on_selectDB_clicked()
{
    dbPath = QFileDialog::getOpenFileName(
                this,
                "Find DB file",
                "C://",
                "All files (*.*);; MDF (*.mdf);; ACCDB (*.accdb)"
                );
}
