#include "scoreboard_shower.h"
#include "ui_scoreboard_shower.h"
#include "scoreboard.h"

Scoreboard_Shower::Scoreboard_Shower(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Scoreboard_Shower)
{
    ui->setupUi(this);
}

Scoreboard_Shower::~Scoreboard_Shower()
{
    delete ui;
}

void Scoreboard_Shower::timerHasChanged(const QString& message){
    ui->swTimer->setText(message);
}

void Scoreboard_Shower::foulHome(const QString& message){
    ui->sFoulsHome->setText(message);
}

void Scoreboard_Shower::foulAway(const QString& message){
    ui->sFoulsAway->setText(message);
}

void Scoreboard_Shower::goalHome(const QString& message){
    ui->sResultHome->setText(message);
}

void Scoreboard_Shower::goalAway(const QString& message){
    ui->sResultAway->setText(message);
}

void Scoreboard_Shower::teamHome(const QString& message){
    ui->sNameHome->setText(message);
}

void Scoreboard_Shower::teamAway(const QString& message){
    ui->sNameAway->setText(message);
}

