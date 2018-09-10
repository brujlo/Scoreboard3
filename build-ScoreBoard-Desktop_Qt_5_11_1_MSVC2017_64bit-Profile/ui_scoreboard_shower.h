/********************************************************************************
** Form generated from reading UI file 'scoreboard_shower.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREBOARD_SHOWER_H
#define UI_SCOREBOARD_SHOWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Scoreboard_Shower
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *sFoulsAway;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_9;
    QLabel *sResultAway;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *horizontalSpacer_5;
    QLabel *sResultHome;
    QSpacerItem *horizontalSpacer_2;
    QLabel *sFoulsHome;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QLabel *swTimer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *sNameHome;
    QLabel *sNameAway;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *Scoreboard_Shower)
    {
        if (Scoreboard_Shower->objectName().isEmpty())
            Scoreboard_Shower->setObjectName(QStringLiteral("Scoreboard_Shower"));
        Scoreboard_Shower->resize(955, 732);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Scoreboard_Shower->sizePolicy().hasHeightForWidth());
        Scoreboard_Shower->setSizePolicy(sizePolicy);
        Scoreboard_Shower->setAutoFillBackground(false);
        Scoreboard_Shower->setStyleSheet(QStringLiteral("background: rgb(0,0,0);"));
        gridLayout = new QGridLayout(Scoreboard_Shower);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_3 = new QLabel(Scoreboard_Shower);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(300);
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        label_3->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        gridLayout_2->addWidget(label_3, 0, 5, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 0, 6, 1, 1);

        sFoulsAway = new QLabel(Scoreboard_Shower);
        sFoulsAway->setObjectName(QStringLiteral("sFoulsAway"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sFoulsAway->sizePolicy().hasHeightForWidth());
        sFoulsAway->setSizePolicy(sizePolicy2);
        sFoulsAway->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setFamily(QStringLiteral("Digital-7"));
        font1.setPointSize(50);
        sFoulsAway->setFont(font1);
        sFoulsAway->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        sFoulsAway->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout_2->addWidget(sFoulsAway, 0, 9, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 0, 0, 1, 1);

        sResultAway = new QLabel(Scoreboard_Shower);
        sResultAway->setObjectName(QStringLiteral("sResultAway"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(sResultAway->sizePolicy().hasHeightForWidth());
        sResultAway->setSizePolicy(sizePolicy3);
        sResultAway->setSizeIncrement(QSize(0, 0));
        QFont font2;
        font2.setFamily(QStringLiteral("Digital-7"));
        font2.setPointSize(300);
        sResultAway->setFont(font2);
        sResultAway->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        sResultAway->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_2->addWidget(sResultAway, 0, 7, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_10, 0, 10, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 0, 4, 1, 1);

        sResultHome = new QLabel(Scoreboard_Shower);
        sResultHome->setObjectName(QStringLiteral("sResultHome"));
        sizePolicy3.setHeightForWidth(sResultHome->sizePolicy().hasHeightForWidth());
        sResultHome->setSizePolicy(sizePolicy3);
        sResultHome->setSizeIncrement(QSize(0, 0));
        sResultHome->setFont(font2);
        sResultHome->setStyleSheet(QStringLiteral("color: rgb(85, 255, 127);"));
        sResultHome->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        gridLayout_2->addWidget(sResultHome, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 8, 1, 1);

        sFoulsHome = new QLabel(Scoreboard_Shower);
        sFoulsHome->setObjectName(QStringLiteral("sFoulsHome"));
        sizePolicy2.setHeightForWidth(sFoulsHome->sizePolicy().hasHeightForWidth());
        sFoulsHome->setSizePolicy(sizePolicy2);
        sFoulsHome->setMaximumSize(QSize(16777215, 16777215));
        sFoulsHome->setBaseSize(QSize(0, 0));
        sFoulsHome->setFont(font1);
        sFoulsHome->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        sFoulsHome->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        gridLayout_2->addWidget(sFoulsHome, 0, 1, 1, 1);


        gridLayout->addLayout(gridLayout_2, 3, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 6, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(10, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        swTimer = new QLabel(Scoreboard_Shower);
        swTimer->setObjectName(QStringLiteral("swTimer"));
        sizePolicy3.setHeightForWidth(swTimer->sizePolicy().hasHeightForWidth());
        swTimer->setSizePolicy(sizePolicy3);
        swTimer->setMaximumSize(QSize(16777215, 16777215));
        swTimer->setSizeIncrement(QSize(0, 0));
        QFont font3;
        font3.setFamily(QStringLiteral("Digital-7"));
        font3.setPointSize(100);
        font3.setKerning(true);
        swTimer->setFont(font3);
        swTimer->setStyleSheet(QStringLiteral("color: rgb(255, 255, 127);"));
        swTimer->setTextFormat(Qt::AutoText);
        swTimer->setScaledContents(true);
        swTimer->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        swTimer->setWordWrap(false);

        gridLayout_3->addWidget(swTimer, 0, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 1, 3, 1, 1);


        gridLayout->addLayout(gridLayout_3, 5, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sNameHome = new QLabel(Scoreboard_Shower);
        sNameHome->setObjectName(QStringLiteral("sNameHome"));
        sizePolicy3.setHeightForWidth(sNameHome->sizePolicy().hasHeightForWidth());
        sNameHome->setSizePolicy(sizePolicy3);
        sNameHome->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamily(QStringLiteral("Digital-7"));
        font4.setPointSize(30);
        sNameHome->setFont(font4);
        sNameHome->setStyleSheet(QStringLiteral("color: rgb(85, 255, 255);"));
        sNameHome->setAlignment(Qt::AlignBottom|Qt::AlignLeading|Qt::AlignLeft);

        horizontalLayout_4->addWidget(sNameHome);

        sNameAway = new QLabel(Scoreboard_Shower);
        sNameAway->setObjectName(QStringLiteral("sNameAway"));
        sizePolicy3.setHeightForWidth(sNameAway->sizePolicy().hasHeightForWidth());
        sNameAway->setSizePolicy(sizePolicy3);
        sNameAway->setMaximumSize(QSize(16777215, 16777215));
        sNameAway->setFont(font4);
        sNameAway->setStyleSheet(QStringLiteral("color: rgb(85, 255, 255);"));
        sNameAway->setAlignment(Qt::AlignBottom|Qt::AlignRight|Qt::AlignTrailing);

        horizontalLayout_4->addWidget(sNameAway);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 7, 0, 1, 1);


        retranslateUi(Scoreboard_Shower);

        QMetaObject::connectSlotsByName(Scoreboard_Shower);
    } // setupUi

    void retranslateUi(QDialog *Scoreboard_Shower)
    {
        Scoreboard_Shower->setWindowTitle(QApplication::translate("Scoreboard_Shower", "Scoreboard", nullptr));
        label_3->setText(QApplication::translate("Scoreboard_Shower", "-", nullptr));
        sFoulsAway->setText(QApplication::translate("Scoreboard_Shower", "0/6", nullptr));
        sResultAway->setText(QApplication::translate("Scoreboard_Shower", "0", nullptr));
        sResultHome->setText(QApplication::translate("Scoreboard_Shower", "0", nullptr));
        sFoulsHome->setText(QApplication::translate("Scoreboard_Shower", "0/6", nullptr));
        swTimer->setText(QApplication::translate("Scoreboard_Shower", "00:00", nullptr));
        sNameHome->setText(QApplication::translate("Scoreboard_Shower", "TeamNameHome", nullptr));
        sNameAway->setText(QApplication::translate("Scoreboard_Shower", "TeamNameGuest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Scoreboard_Shower: public Ui_Scoreboard_Shower {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREBOARD_SHOWER_H
