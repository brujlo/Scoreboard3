/********************************************************************************
** Form generated from reading UI file 'dbinput.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBINPUT_H
#define UI_DBINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DBInput
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *dbNew;
    QPushButton *dbDelete;
    QPushButton *dbUpdate;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView;

    void setupUi(QDialog *DBInput)
    {
        if (DBInput->objectName().isEmpty())
            DBInput->setObjectName(QStringLiteral("DBInput"));
        DBInput->resize(352, 270);
        gridLayout = new QGridLayout(DBInput);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buttonBox = new QDialogButtonBox(DBInput);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        dbNew = new QPushButton(DBInput);
        dbNew->setObjectName(QStringLiteral("dbNew"));

        horizontalLayout->addWidget(dbNew);

        dbDelete = new QPushButton(DBInput);
        dbDelete->setObjectName(QStringLiteral("dbDelete"));

        horizontalLayout->addWidget(dbDelete);

        dbUpdate = new QPushButton(DBInput);
        dbUpdate->setObjectName(QStringLiteral("dbUpdate"));

        horizontalLayout->addWidget(dbUpdate);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        tableView = new QTableView(DBInput);
        tableView->setObjectName(QStringLiteral("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(tableView);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        retranslateUi(DBInput);
        QObject::connect(buttonBox, SIGNAL(accepted()), DBInput, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DBInput, SLOT(reject()));

        QMetaObject::connectSlotsByName(DBInput);
    } // setupUi

    void retranslateUi(QDialog *DBInput)
    {
        DBInput->setWindowTitle(QApplication::translate("DBInput", "Dialog", nullptr));
        dbNew->setText(QApplication::translate("DBInput", "new", nullptr));
        dbDelete->setText(QApplication::translate("DBInput", "delete", nullptr));
        dbUpdate->setText(QApplication::translate("DBInput", "update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DBInput: public Ui_DBInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBINPUT_H
