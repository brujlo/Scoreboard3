/********************************************************************************
** Form generated from reading UI file 'scoreboard.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREBOARD_H
#define UI_SCOREBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Scoreboard
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_22;
    QPushButton *startTimer;
    QSpacerItem *horizontalSpacer_20;
    QPushButton *pauseTimer;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *resetTimer;
    QSpacerItem *horizontalSpacer_23;
    QHBoxLayout *horizontalLayout_6;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *TimerLabel;
    QSpacerItem *horizontalSpacer_8;
    QFrame *line_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *foulPlusHome;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *foulMinusHome;
    QSpacerItem *horizontalSpacer_17;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_25;
    QPushButton *foulPlusAway;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *foulMinusAway;
    QSpacerItem *horizontalSpacer_19;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QFrame *line_4;
    QFrame *line_5;
    QPushButton *setTeams;
    QPushButton *setHalfTime;
    QPushButton *selectDB;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *goolPlusHome;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *goolMinusHome;
    QSpacerItem *horizontalSpacer_12;
    QLabel *halfTimevalue;
    QSpacerItem *horizontalSpacer_24;
    QPushButton *goolPlusAway;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *goolMinusAway;
    QSpacerItem *horizontalSpacer_14;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *goalHome;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_4;
    QComboBox *comboBox;
    QLabel *foulsCommitedHome;
    QLabel *lbFoulsH;
    QLabel *folusCommitedAway;
    QComboBox *comboBox_2;
    QLabel *label;
    QLabel *goalAway;
    QLabel *label_2;
    QLabel *lbFoulsA;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Scoreboard)
    {
        if (Scoreboard->objectName().isEmpty())
            Scoreboard->setObjectName(QStringLiteral("Scoreboard"));
        Scoreboard->setEnabled(true);
        Scoreboard->resize(883, 555);
        Scoreboard->setAutoFillBackground(false);
        Scoreboard->setStyleSheet(QStringLiteral(""));
        centralWidget = new QWidget(Scoreboard);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_22);

        startTimer = new QPushButton(centralWidget);
        startTimer->setObjectName(QStringLiteral("startTimer"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(startTimer->sizePolicy().hasHeightForWidth());
        startTimer->setSizePolicy(sizePolicy);
        startTimer->setMinimumSize(QSize(100, 50));
        startTimer->setSizeIncrement(QSize(0, 0));

        horizontalLayout_5->addWidget(startTimer);

        horizontalSpacer_20 = new QSpacerItem(50, 50, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_20);

        pauseTimer = new QPushButton(centralWidget);
        pauseTimer->setObjectName(QStringLiteral("pauseTimer"));
        sizePolicy.setHeightForWidth(pauseTimer->sizePolicy().hasHeightForWidth());
        pauseTimer->setSizePolicy(sizePolicy);
        pauseTimer->setMinimumSize(QSize(100, 50));
        pauseTimer->setSizeIncrement(QSize(0, 0));

        horizontalLayout_5->addWidget(pauseTimer);

        horizontalSpacer_21 = new QSpacerItem(50, 50, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_21);

        resetTimer = new QPushButton(centralWidget);
        resetTimer->setObjectName(QStringLiteral("resetTimer"));
        sizePolicy.setHeightForWidth(resetTimer->sizePolicy().hasHeightForWidth());
        resetTimer->setSizePolicy(sizePolicy);
        resetTimer->setMinimumSize(QSize(100, 50));
        resetTimer->setSizeIncrement(QSize(0, 0));

        horizontalLayout_5->addWidget(resetTimer);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_23);


        gridLayout_4->addLayout(horizontalLayout_5, 11, 7, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));

        gridLayout_4->addLayout(horizontalLayout_6, 0, 7, 1, 1);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_2, 10, 7, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout->setContentsMargins(40, -1, 40, -1);
        horizontalSpacer_9 = new QSpacerItem(200, 40, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        TimerLabel = new QLineEdit(centralWidget);
        TimerLabel->setObjectName(QStringLiteral("TimerLabel"));
        TimerLabel->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(TimerLabel->sizePolicy().hasHeightForWidth());
        TimerLabel->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(29);
        font.setBold(true);
        font.setWeight(75);
        font.setKerning(true);
        TimerLabel->setFont(font);
        TimerLabel->setMouseTracking(false);
        TimerLabel->setContextMenuPolicy(Qt::DefaultContextMenu);
        TimerLabel->setLayoutDirection(Qt::LeftToRight);
        TimerLabel->setAutoFillBackground(false);
        TimerLabel->setStyleSheet(QStringLiteral("background: rgba(240, 240, 240, 240);"));
        TimerLabel->setInputMethodHints(Qt::ImhNone);
        TimerLabel->setFrame(true);
        TimerLabel->setAlignment(Qt::AlignCenter);
        TimerLabel->setReadOnly(true);

        horizontalLayout->addWidget(TimerLabel);

        horizontalSpacer_8 = new QSpacerItem(200, 40, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);


        gridLayout_4->addLayout(horizontalLayout, 1, 7, 1, 1);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_3, 5, 7, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line, 13, 7, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_15);

        foulPlusHome = new QPushButton(centralWidget);
        foulPlusHome->setObjectName(QStringLiteral("foulPlusHome"));
        QFont font1;
        font1.setPointSize(12);
        foulPlusHome->setFont(font1);

        horizontalLayout_4->addWidget(foulPlusHome);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_16);

        foulMinusHome = new QPushButton(centralWidget);
        foulMinusHome->setObjectName(QStringLiteral("foulMinusHome"));
        foulMinusHome->setFont(font1);

        horizontalLayout_4->addWidget(foulMinusHome);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_17);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_25 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_25);

        foulPlusAway = new QPushButton(centralWidget);
        foulPlusAway->setObjectName(QStringLiteral("foulPlusAway"));
        foulPlusAway->setFont(font1);

        horizontalLayout_4->addWidget(foulPlusAway);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_18);

        foulMinusAway = new QPushButton(centralWidget);
        foulMinusAway->setObjectName(QStringLiteral("foulMinusAway"));
        foulMinusAway->setFont(font1);

        horizontalLayout_4->addWidget(foulMinusAway);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_19);


        gridLayout_4->addLayout(horizontalLayout_4, 8, 7, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(30);
        gridLayout_2->setVerticalSpacing(20);
        gridLayout_2->setContentsMargins(30, 20, 30, 20);
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout_2->addWidget(pushButton, 2, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 2, 2, 1, 1);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 2, 5, 1, 1);

        line_5 = new QFrame(centralWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_5, 2, 3, 1, 1);

        setTeams = new QPushButton(centralWidget);
        setTeams->setObjectName(QStringLiteral("setTeams"));

        gridLayout_2->addWidget(setTeams, 1, 0, 1, 1);

        setHalfTime = new QPushButton(centralWidget);
        setHalfTime->setObjectName(QStringLiteral("setHalfTime"));

        gridLayout_2->addWidget(setHalfTime, 2, 0, 1, 1);

        selectDB = new QPushButton(centralWidget);
        selectDB->setObjectName(QStringLiteral("selectDB"));

        gridLayout_2->addWidget(selectDB, 2, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 15, 7, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 12, 7, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 9, 7, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_10);

        goolPlusHome = new QPushButton(centralWidget);
        goolPlusHome->setObjectName(QStringLiteral("goolPlusHome"));
        goolPlusHome->setFont(font1);

        horizontalLayout_3->addWidget(goolPlusHome);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        goolMinusHome = new QPushButton(centralWidget);
        goolMinusHome->setObjectName(QStringLiteral("goolMinusHome"));
        goolMinusHome->setFont(font1);

        horizontalLayout_3->addWidget(goolMinusHome);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        halfTimevalue = new QLabel(centralWidget);
        halfTimevalue->setObjectName(QStringLiteral("halfTimevalue"));
        halfTimevalue->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(halfTimevalue);

        horizontalSpacer_24 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_24);

        goolPlusAway = new QPushButton(centralWidget);
        goolPlusAway->setObjectName(QStringLiteral("goolPlusAway"));
        goolPlusAway->setFont(font1);

        horizontalLayout_3->addWidget(goolPlusAway);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_13);

        goolMinusAway = new QPushButton(centralWidget);
        goolMinusAway->setObjectName(QStringLiteral("goolMinusAway"));
        goolMinusAway->setFont(font1);

        horizontalLayout_3->addWidget(goolMinusAway);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_14);


        gridLayout_4->addLayout(horizontalLayout_3, 7, 7, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 3, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 3, 6, 1, 1);

        goalHome = new QLabel(centralWidget);
        goalHome->setObjectName(QStringLiteral("goalHome"));
        goalHome->setMinimumSize(QSize(50, 20));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        goalHome->setFont(font2);
        goalHome->setFrameShape(QFrame::WinPanel);
        goalHome->setTextFormat(Qt::PlainText);
        goalHome->setAlignment(Qt::AlignCenter);
        goalHome->setWordWrap(true);

        gridLayout->addWidget(goalHome, 3, 3, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 3, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 3, 4, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 40, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 8, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(comboBox, 3, 7, 1, 1);

        foulsCommitedHome = new QLabel(centralWidget);
        foulsCommitedHome->setObjectName(QStringLiteral("foulsCommitedHome"));
        foulsCommitedHome->setFont(font1);
        foulsCommitedHome->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(foulsCommitedHome, 5, 3, 1, 1);

        lbFoulsH = new QLabel(centralWidget);
        lbFoulsH->setObjectName(QStringLiteral("lbFoulsH"));
        QFont font3;
        font3.setPointSize(8);
        lbFoulsH->setFont(font3);
        lbFoulsH->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbFoulsH, 6, 3, 1, 1);

        folusCommitedAway = new QLabel(centralWidget);
        folusCommitedAway->setObjectName(QStringLiteral("folusCommitedAway"));
        folusCommitedAway->setFont(font1);
        folusCommitedAway->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(folusCommitedAway, 5, 5, 1, 1);

        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        sizePolicy2.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy2);
        comboBox_2->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(comboBox_2, 3, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        goalAway = new QLabel(centralWidget);
        goalAway->setObjectName(QStringLiteral("goalAway"));
        goalAway->setMinimumSize(QSize(50, 20));
        goalAway->setFont(font2);
        goalAway->setFrameShape(QFrame::WinPanel);
        goalAway->setTextFormat(Qt::PlainText);
        goalAway->setAlignment(Qt::AlignCenter);
        goalAway->setWordWrap(true);

        gridLayout->addWidget(goalAway, 3, 5, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 7, 1, 1);

        lbFoulsA = new QLabel(centralWidget);
        lbFoulsA->setObjectName(QStringLiteral("lbFoulsA"));
        lbFoulsA->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbFoulsA, 6, 5, 1, 1);


        gridLayout_4->addLayout(gridLayout, 4, 7, 1, 1);

        Scoreboard->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Scoreboard);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 883, 21));
        Scoreboard->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Scoreboard);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Scoreboard->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Scoreboard);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Scoreboard->setStatusBar(statusBar);

        retranslateUi(Scoreboard);

        QMetaObject::connectSlotsByName(Scoreboard);
    } // setupUi

    void retranslateUi(QMainWindow *Scoreboard)
    {
        Scoreboard->setWindowTitle(QApplication::translate("Scoreboard", "Scoreboard", nullptr));
        startTimer->setText(QApplication::translate("Scoreboard", "Start timer", nullptr));
        pauseTimer->setText(QApplication::translate("Scoreboard", "Pause/Resume", nullptr));
        resetTimer->setText(QApplication::translate("Scoreboard", "Reset/Set", nullptr));
        TimerLabel->setText(QApplication::translate("Scoreboard", "00:00", nullptr));
        foulPlusHome->setText(QApplication::translate("Scoreboard", "+1 FOUL", nullptr));
        foulMinusHome->setText(QApplication::translate("Scoreboard", "-1 FOUL", nullptr));
        label_3->setText(QApplication::translate("Scoreboard", "Halftime", nullptr));
        foulPlusAway->setText(QApplication::translate("Scoreboard", "+1 FOUL", nullptr));
        foulMinusAway->setText(QApplication::translate("Scoreboard", "-1 FOUL", nullptr));
        pushButton->setText(QApplication::translate("Scoreboard", "Open scoreboard", nullptr));
        setTeams->setText(QApplication::translate("Scoreboard", "Add teams", nullptr));
        setHalfTime->setText(QApplication::translate("Scoreboard", "Settings", nullptr));
        selectDB->setText(QApplication::translate("Scoreboard", "Select DB", nullptr));
        goolPlusHome->setText(QApplication::translate("Scoreboard", "+1 GOL", nullptr));
        goolMinusHome->setText(QApplication::translate("Scoreboard", "-1 GOL", nullptr));
        halfTimevalue->setText(QApplication::translate("Scoreboard", "0", nullptr));
        goolPlusAway->setText(QApplication::translate("Scoreboard", "+1 GOL", nullptr));
        goolMinusAway->setText(QApplication::translate("Scoreboard", "-1 GOL", nullptr));
        goalHome->setText(QApplication::translate("Scoreboard", "0", nullptr));
        foulsCommitedHome->setText(QApplication::translate("Scoreboard", "0/6", nullptr));
        lbFoulsH->setText(QApplication::translate("Scoreboard", "Fouls", nullptr));
        folusCommitedAway->setText(QApplication::translate("Scoreboard", "0/6", nullptr));
        label->setText(QApplication::translate("Scoreboard", "Home", nullptr));
        goalAway->setText(QApplication::translate("Scoreboard", "0", nullptr));
        label_2->setText(QApplication::translate("Scoreboard", "Guest", nullptr));
        lbFoulsA->setText(QApplication::translate("Scoreboard", "Fouls", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Scoreboard: public Ui_Scoreboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREBOARD_H
