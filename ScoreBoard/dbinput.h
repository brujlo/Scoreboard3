#ifndef DBINPUT_H
#define DBINPUT_H

#include <QDialog>
#include <QSqlDatabase>
#include<QTableView>

//#include <QDialog>
//#include <QtCore>
//#include<QtGui>

namespace Ui {
class DBInput;
}

class QSqlTableModel;

class DBInput : public QDialog
{
    Q_OBJECT

public:
    explicit DBInput(QWidget *parent = nullptr);
    ~DBInput();

private slots:
    void on_dbNew_clicked();

    void on_dbDelete_clicked();

    void on_dbUpdate_clicked();

    void on_buttonBox_accepted();

private:
    Ui::DBInput *ui;
    QSqlTableModel *mModel;
public:
    bool isLoaded;
};

#endif // DBINPUT_H
