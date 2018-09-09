/********************************************************************************
** Form generated from reading UI file 'timeandfolu.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEANDFOLU_H
#define UI_TIMEANDFOLU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TimeAndFolu
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *HalftimeInput;
    QLineEdit *FolusInput;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *updateTiFoBT;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TimeAndFolu)
    {
        if (TimeAndFolu->objectName().isEmpty())
            TimeAndFolu->setObjectName(QStringLiteral("TimeAndFolu"));
        TimeAndFolu->resize(267, 126);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TimeAndFolu->sizePolicy().hasHeightForWidth());
        TimeAndFolu->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(TimeAndFolu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(TimeAndFolu);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        HalftimeInput = new QLineEdit(TimeAndFolu);
        HalftimeInput->setObjectName(QStringLiteral("HalftimeInput"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(HalftimeInput->sizePolicy().hasHeightForWidth());
        HalftimeInput->setSizePolicy(sizePolicy1);
        HalftimeInput->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(HalftimeInput);

        FolusInput = new QLineEdit(TimeAndFolu);
        FolusInput->setObjectName(QStringLiteral("FolusInput"));
        sizePolicy1.setHeightForWidth(FolusInput->sizePolicy().hasHeightForWidth());
        FolusInput->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(FolusInput);


        gridLayout->addLayout(verticalLayout, 0, 1, 2, 1);

        label_2 = new QLabel(TimeAndFolu);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(115, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        updateTiFoBT = new QPushButton(TimeAndFolu);
        updateTiFoBT->setObjectName(QStringLiteral("updateTiFoBT"));

        horizontalLayout->addWidget(updateTiFoBT);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(TimeAndFolu);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 1, 1, 1);


        retranslateUi(TimeAndFolu);
        QObject::connect(buttonBox, SIGNAL(accepted()), TimeAndFolu, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TimeAndFolu, SLOT(reject()));

        QMetaObject::connectSlotsByName(TimeAndFolu);
    } // setupUi

    void retranslateUi(QDialog *TimeAndFolu)
    {
        TimeAndFolu->setWindowTitle(QApplication::translate("TimeAndFolu", "Settings", nullptr));
        label->setText(QApplication::translate("TimeAndFolu", "Halftime (exm.8)", nullptr));
        label_2->setText(QApplication::translate("TimeAndFolu", "Max fouls (exm.6)", nullptr));
        updateTiFoBT->setText(QApplication::translate("TimeAndFolu", "Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeAndFolu: public Ui_TimeAndFolu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEANDFOLU_H
