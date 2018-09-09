#ifndef TIMEANDFOLU_H
#define TIMEANDFOLU_H

#include <QDialog>

namespace Ui {
class TimeAndFolu;
}

class TimeAndFolu : public QDialog
{
    Q_OBJECT

public:
    explicit TimeAndFolu(QWidget *parent = nullptr);
    ~TimeAndFolu();

private:
    Ui::TimeAndFolu *ui;
public:
    bool isLoaded;
private slots:
    void on_updateTiFoBT_clicked();
};

#endif // TIMEANDFOLU_H
