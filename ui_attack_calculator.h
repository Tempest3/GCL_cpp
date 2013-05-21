/********************************************************************************
** Form generated from reading UI file 'attack_calculator.ui'
**
** Created: Thu Apr 25 21:09:58 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATTACK_CALCULATOR_H
#define UI_ATTACK_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_attack_calculator
{
public:
    QAction *actionE_xit;
    QAction *actionStandard;
    QAction *actionNPC;
    QAction *actionInvasion;
    QAction *actionBase_Combat;
    QAction *action_About;
    QAction *actionTutorial;
    QAction *action_Undo;
    QAction *action_Save;
    QAction *action_Load;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QListWidget *list_installed;
    QPushButton *btnReset;
    QVBoxLayout *verticalLayout_4;
    QLabel *lbl_CalcAttack;
    QLineEdit *ln_CalcAttack;
    QPushButton *btn_addSW;
    QHBoxLayout *horizontalLayout;
    QListWidget *list_rw;
    QSpinBox *spinRW;
    QListWidget *list_sw;
    QSpinBox *spinSW;
    QVBoxLayout *verticalLayout_3;
    QLabel *lbl_TacOfficers;
    QLineEdit *ln_TacOfficers;
    QPushButton *btn_addRW;
    QLabel *lbl_sw;
    QPushButton *btn_Remove;
    QLabel *lbl_rw;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QVBoxLayout *verticalLayout;
    QCheckBox *cbCerulean;
    QCheckBox *cbNightclaw;
    QCheckBox *cbDarkSmuggler;
    QPushButton *btnCalculate;
    QLabel *lbl_installed;
    QGridLayout *gridLayout;
    QLabel *lbl_anubix;
    QComboBox *comboApparitious;
    QLabel *lbl_apparitious;
    QLabel *lbl_bioship;
    QComboBox *comboBioship;
    QComboBox *comboAnubix;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *cbACF;
    QCheckBox *cbCrimsonObelisk;
    QCheckBox *cbCrimsonAmp;
    QCheckBox *cbCruxAmp;
    QCheckBox *cbShockPulse;
    QPushButton *btnSave;
    QPushButton *btnLoad;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_View;
    QMenu *menu_Help;
    QMenu *menu_Edit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *attack_calculator)
    {
        if (attack_calculator->objectName().isEmpty())
            attack_calculator->setObjectName(QString::fromUtf8("attack_calculator"));
        attack_calculator->resize(1048, 561);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        attack_calculator->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image_folder/smaller_icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        attack_calculator->setWindowIcon(icon);
        attack_calculator->setStyleSheet(QString::fromUtf8(""));
        attack_calculator->setIconSize(QSize(150, 150));
        attack_calculator->setUnifiedTitleAndToolBarOnMac(false);
        actionE_xit = new QAction(attack_calculator);
        actionE_xit->setObjectName(QString::fromUtf8("actionE_xit"));
        actionStandard = new QAction(attack_calculator);
        actionStandard->setObjectName(QString::fromUtf8("actionStandard"));
        actionStandard->setCheckable(true);
        actionStandard->setChecked(true);
        actionNPC = new QAction(attack_calculator);
        actionNPC->setObjectName(QString::fromUtf8("actionNPC"));
        actionNPC->setCheckable(true);
        actionInvasion = new QAction(attack_calculator);
        actionInvasion->setObjectName(QString::fromUtf8("actionInvasion"));
        actionInvasion->setCheckable(true);
        actionBase_Combat = new QAction(attack_calculator);
        actionBase_Combat->setObjectName(QString::fromUtf8("actionBase_Combat"));
        actionBase_Combat->setCheckable(true);
        action_About = new QAction(attack_calculator);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        actionTutorial = new QAction(attack_calculator);
        actionTutorial->setObjectName(QString::fromUtf8("actionTutorial"));
        action_Undo = new QAction(attack_calculator);
        action_Undo->setObjectName(QString::fromUtf8("action_Undo"));
        action_Save = new QAction(attack_calculator);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        action_Load = new QAction(attack_calculator);
        action_Load->setObjectName(QString::fromUtf8("action_Load"));
        centralWidget = new QWidget(attack_calculator);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        list_installed = new QListWidget(centralWidget);
        list_installed->setObjectName(QString::fromUtf8("list_installed"));
        list_installed->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(list_installed, 4, 0, 2, 3);

        btnReset = new QPushButton(centralWidget);
        btnReset->setObjectName(QString::fromUtf8("btnReset"));

        gridLayout_2->addWidget(btnReset, 6, 7, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lbl_CalcAttack = new QLabel(centralWidget);
        lbl_CalcAttack->setObjectName(QString::fromUtf8("lbl_CalcAttack"));
        lbl_CalcAttack->setStyleSheet(QString::fromUtf8("background-image: url(:/image_folder/transparent.png);"));

        verticalLayout_4->addWidget(lbl_CalcAttack);

        ln_CalcAttack = new QLineEdit(centralWidget);
        ln_CalcAttack->setObjectName(QString::fromUtf8("ln_CalcAttack"));
        ln_CalcAttack->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_4->addWidget(ln_CalcAttack);


        gridLayout_2->addLayout(verticalLayout_4, 5, 7, 1, 2);

        btn_addSW = new QPushButton(centralWidget);
        btn_addSW->setObjectName(QString::fromUtf8("btn_addSW"));
        btn_addSW->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(btn_addSW, 0, 5, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        list_rw = new QListWidget(centralWidget);
        list_rw->setObjectName(QString::fromUtf8("list_rw"));
        list_rw->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(list_rw);

        spinRW = new QSpinBox(centralWidget);
        spinRW->setObjectName(QString::fromUtf8("spinRW"));
        spinRW->setStyleSheet(QString::fromUtf8(""));
        spinRW->setValue(1);

        horizontalLayout->addWidget(spinRW);

        list_sw = new QListWidget(centralWidget);
        list_sw->setObjectName(QString::fromUtf8("list_sw"));
        list_sw->setStyleSheet(QString::fromUtf8("background-image: url();"));

        horizontalLayout->addWidget(list_sw);

        spinSW = new QSpinBox(centralWidget);
        spinSW->setObjectName(QString::fromUtf8("spinSW"));
        spinSW->setStyleSheet(QString::fromUtf8(""));
        spinSW->setValue(1);

        horizontalLayout->addWidget(spinSW);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 6);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lbl_TacOfficers = new QLabel(centralWidget);
        lbl_TacOfficers->setObjectName(QString::fromUtf8("lbl_TacOfficers"));
        lbl_TacOfficers->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(lbl_TacOfficers);

        ln_TacOfficers = new QLineEdit(centralWidget);
        ln_TacOfficers->setObjectName(QString::fromUtf8("ln_TacOfficers"));
        ln_TacOfficers->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_3->addWidget(ln_TacOfficers);


        gridLayout_2->addLayout(verticalLayout_3, 5, 6, 1, 1);

        btn_addRW = new QPushButton(centralWidget);
        btn_addRW->setObjectName(QString::fromUtf8("btn_addRW"));
        btn_addRW->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(btn_addRW, 0, 2, 1, 1);

        lbl_sw = new QLabel(centralWidget);
        lbl_sw->setObjectName(QString::fromUtf8("lbl_sw"));
        lbl_sw->setStyleSheet(QString::fromUtf8("background-image: url(:/image_folder/transparent.png);"));

        gridLayout_2->addWidget(lbl_sw, 0, 3, 1, 1);

        btn_Remove = new QPushButton(centralWidget);
        btn_Remove->setObjectName(QString::fromUtf8("btn_Remove"));

        gridLayout_2->addWidget(btn_Remove, 6, 1, 1, 2);

        lbl_rw = new QLabel(centralWidget);
        lbl_rw->setObjectName(QString::fromUtf8("lbl_rw"));
        lbl_rw->setStyleSheet(QString::fromUtf8(""));

        gridLayout_2->addWidget(lbl_rw, 0, 0, 1, 2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_5->addWidget(checkBox_3);

        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_5->addWidget(checkBox);

        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_5->addWidget(checkBox_2);


        gridLayout_2->addLayout(verticalLayout_5, 4, 6, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        cbCerulean = new QCheckBox(centralWidget);
        cbCerulean->setObjectName(QString::fromUtf8("cbCerulean"));
        cbCerulean->setLayoutDirection(Qt::RightToLeft);
        cbCerulean->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(cbCerulean);

        cbNightclaw = new QCheckBox(centralWidget);
        cbNightclaw->setObjectName(QString::fromUtf8("cbNightclaw"));
        cbNightclaw->setLayoutDirection(Qt::RightToLeft);
        cbNightclaw->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(cbNightclaw);

        cbDarkSmuggler = new QCheckBox(centralWidget);
        cbDarkSmuggler->setObjectName(QString::fromUtf8("cbDarkSmuggler"));
        cbDarkSmuggler->setLayoutDirection(Qt::RightToLeft);
        cbDarkSmuggler->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(cbDarkSmuggler);


        gridLayout_2->addLayout(verticalLayout, 4, 7, 1, 2);

        btnCalculate = new QPushButton(centralWidget);
        btnCalculate->setObjectName(QString::fromUtf8("btnCalculate"));

        gridLayout_2->addWidget(btnCalculate, 6, 8, 1, 1);

        lbl_installed = new QLabel(centralWidget);
        lbl_installed->setObjectName(QString::fromUtf8("lbl_installed"));
        lbl_installed->setStyleSheet(QString::fromUtf8("background-image: url(:/image_folder/transparent.png);"));

        gridLayout_2->addWidget(lbl_installed, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbl_anubix = new QLabel(centralWidget);
        lbl_anubix->setObjectName(QString::fromUtf8("lbl_anubix"));
        lbl_anubix->setStyleSheet(QString::fromUtf8("background-image: url(:/image_folder/transparent.png);"));

        gridLayout->addWidget(lbl_anubix, 2, 0, 1, 1);

        comboApparitious = new QComboBox(centralWidget);
        comboApparitious->setObjectName(QString::fromUtf8("comboApparitious"));
        comboApparitious->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(comboApparitious, 1, 1, 1, 1);

        lbl_apparitious = new QLabel(centralWidget);
        lbl_apparitious->setObjectName(QString::fromUtf8("lbl_apparitious"));
        lbl_apparitious->setLayoutDirection(Qt::RightToLeft);
        lbl_apparitious->setStyleSheet(QString::fromUtf8("background-image: url(:/image_folder/transparent.png);"));

        gridLayout->addWidget(lbl_apparitious, 1, 0, 1, 1);

        lbl_bioship = new QLabel(centralWidget);
        lbl_bioship->setObjectName(QString::fromUtf8("lbl_bioship"));
        lbl_bioship->setLayoutDirection(Qt::RightToLeft);
        lbl_bioship->setStyleSheet(QString::fromUtf8("background-image: url(:/image_folder/transparent.png);"));

        gridLayout->addWidget(lbl_bioship, 0, 0, 1, 1);

        comboBioship = new QComboBox(centralWidget);
        comboBioship->setObjectName(QString::fromUtf8("comboBioship"));
        comboBioship->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(comboBioship, 0, 1, 1, 1);

        comboAnubix = new QComboBox(centralWidget);
        comboAnubix->setObjectName(QString::fromUtf8("comboAnubix"));
        comboAnubix->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(comboAnubix, 2, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 7, 1, 2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        cbACF = new QCheckBox(centralWidget);
        cbACF->setObjectName(QString::fromUtf8("cbACF"));
        cbACF->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(cbACF);

        cbCrimsonObelisk = new QCheckBox(centralWidget);
        cbCrimsonObelisk->setObjectName(QString::fromUtf8("cbCrimsonObelisk"));
        cbCrimsonObelisk->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(cbCrimsonObelisk);

        cbCrimsonAmp = new QCheckBox(centralWidget);
        cbCrimsonAmp->setObjectName(QString::fromUtf8("cbCrimsonAmp"));
        cbCrimsonAmp->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(cbCrimsonAmp);

        cbCruxAmp = new QCheckBox(centralWidget);
        cbCruxAmp->setObjectName(QString::fromUtf8("cbCruxAmp"));
        cbCruxAmp->setStyleSheet(QString::fromUtf8(""));

        verticalLayout_2->addWidget(cbCruxAmp);

        cbShockPulse = new QCheckBox(centralWidget);
        cbShockPulse->setObjectName(QString::fromUtf8("cbShockPulse"));

        verticalLayout_2->addWidget(cbShockPulse);


        gridLayout_2->addLayout(verticalLayout_2, 4, 4, 1, 2);

        btnSave = new QPushButton(centralWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        gridLayout_2->addWidget(btnSave, 6, 5, 1, 1);

        btnLoad = new QPushButton(centralWidget);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        gridLayout_2->addWidget(btnLoad, 6, 4, 1, 1);

        attack_calculator->setCentralWidget(centralWidget);
        lbl_rw->raise();
        lbl_installed->raise();
        lbl_bioship->raise();
        lbl_apparitious->raise();
        lbl_anubix->raise();
        lbl_CalcAttack->raise();
        lbl_TacOfficers->raise();
        list_installed->raise();
        list_rw->raise();
        list_sw->raise();
        comboBioship->raise();
        comboApparitious->raise();
        comboAnubix->raise();
        ln_TacOfficers->raise();
        ln_CalcAttack->raise();
        cbACF->raise();
        cbCrimsonObelisk->raise();
        cbCrimsonAmp->raise();
        cbCruxAmp->raise();
        cbCerulean->raise();
        cbNightclaw->raise();
        cbDarkSmuggler->raise();
        spinRW->raise();
        spinSW->raise();
        cbACF->raise();
        cbCerulean->raise();
        btnCalculate->raise();
        btnReset->raise();
        checkBox_2->raise();
        checkBox_3->raise();
        checkBox->raise();
        btn_Remove->raise();
        btn_addRW->raise();
        lbl_sw->raise();
        btn_addSW->raise();
        btnSave->raise();
        btnLoad->raise();
        menuBar = new QMenuBar(attack_calculator);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1048, 25));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        attack_calculator->setMenuBar(menuBar);
        mainToolBar = new QToolBar(attack_calculator);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        attack_calculator->addToolBar(Qt::TopToolBarArea, mainToolBar);
        attack_calculator->insertToolBarBreak(mainToolBar);
        statusBar = new QStatusBar(attack_calculator);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        attack_calculator->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Load);
        menu_File->addAction(action_Save);
        menu_File->addAction(actionE_xit);
        menu_View->addAction(actionBase_Combat);
        menu_View->addAction(actionInvasion);
        menu_View->addAction(actionNPC);
        menu_View->addAction(actionStandard);
        menu_Help->addAction(action_About);
        menu_Help->addAction(actionTutorial);
        menu_Edit->addAction(action_Undo);

        retranslateUi(attack_calculator);

        QMetaObject::connectSlotsByName(attack_calculator);
    } // setupUi

    void retranslateUi(QMainWindow *attack_calculator)
    {
        attack_calculator->setWindowTitle(QApplication::translate("attack_calculator", "Attack Calculator", 0, QApplication::UnicodeUTF8));
        actionE_xit->setText(QApplication::translate("attack_calculator", "E&xit", 0, QApplication::UnicodeUTF8));
        actionStandard->setText(QApplication::translate("attack_calculator", "Standard", 0, QApplication::UnicodeUTF8));
        actionNPC->setText(QApplication::translate("attack_calculator", "NPC", 0, QApplication::UnicodeUTF8));
        actionInvasion->setText(QApplication::translate("attack_calculator", "Invasion", 0, QApplication::UnicodeUTF8));
        actionBase_Combat->setText(QApplication::translate("attack_calculator", "Base Combat", 0, QApplication::UnicodeUTF8));
        action_About->setText(QApplication::translate("attack_calculator", "&About", 0, QApplication::UnicodeUTF8));
        actionTutorial->setText(QApplication::translate("attack_calculator", "Tutorial", 0, QApplication::UnicodeUTF8));
        action_Undo->setText(QApplication::translate("attack_calculator", "&Undo", 0, QApplication::UnicodeUTF8));
        action_Save->setText(QApplication::translate("attack_calculator", "&Save", 0, QApplication::UnicodeUTF8));
        action_Load->setText(QApplication::translate("attack_calculator", "&Load", 0, QApplication::UnicodeUTF8));
        btnReset->setText(QApplication::translate("attack_calculator", "Clear/Reset", 0, QApplication::UnicodeUTF8));
        lbl_CalcAttack->setText(QApplication::translate("attack_calculator", "<html><head/><body><p><span style=\" font-weight:600; color:#000000;\">Calculated Attack:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_addSW->setText(QApplication::translate("attack_calculator", "Add SW", 0, QApplication::UnicodeUTF8));
        lbl_TacOfficers->setText(QApplication::translate("attack_calculator", "<html><head/><body><p><span style=\" color:#000000;\">Tactical Officers:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_addRW->setText(QApplication::translate("attack_calculator", "Add RW", 0, QApplication::UnicodeUTF8));
        lbl_sw->setText(QApplication::translate("attack_calculator", "<html><head/><body><p><span style=\" font-weight:600; color:#000000;\">Special Weapons:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_Remove->setText(QApplication::translate("attack_calculator", "Remove Item", 0, QApplication::UnicodeUTF8));
        lbl_rw->setText(QApplication::translate("attack_calculator", "<html><head/><body><p><span style=\" font-weight:600; color:#000000;\">Researched Weapons:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("attack_calculator", "Mutagenic Cartridge", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("attack_calculator", "Stryll Pathogen", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("attack_calculator", "Kulgox Octal Sac", 0, QApplication::UnicodeUTF8));
        cbCerulean->setText(QApplication::translate("attack_calculator", "Cerulean Fighter", 0, QApplication::UnicodeUTF8));
        cbNightclaw->setText(QApplication::translate("attack_calculator", "Nightclaw Fighter", 0, QApplication::UnicodeUTF8));
        cbDarkSmuggler->setText(QApplication::translate("attack_calculator", "Dark Smuggler Chassis", 0, QApplication::UnicodeUTF8));
        btnCalculate->setText(QApplication::translate("attack_calculator", "Calculate", 0, QApplication::UnicodeUTF8));
        lbl_installed->setText(QApplication::translate("attack_calculator", "<html><head/><body><p><span style=\" font-weight:600; color:#000000;\">Installed Modules:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lbl_anubix->setText(QApplication::translate("attack_calculator", "<html><head/><body><p align=\"right\">Anubix Drone:</p></body></html>", 0, QApplication::UnicodeUTF8));
        lbl_apparitious->setText(QApplication::translate("attack_calculator", "<html><head/><body><p align=\"right\">Apparitious Ally:</p></body></html>", 0, QApplication::UnicodeUTF8));
        lbl_bioship->setText(QApplication::translate("attack_calculator", "<html><head/><body><p align=\"right\">Bioship Ally:</p></body></html>", 0, QApplication::UnicodeUTF8));
        cbACF->setText(QApplication::translate("attack_calculator", "Ancient Crystal Foci", 0, QApplication::UnicodeUTF8));
        cbCrimsonObelisk->setText(QApplication::translate("attack_calculator", "Crimson Obelisk", 0, QApplication::UnicodeUTF8));
        cbCrimsonAmp->setText(QApplication::translate("attack_calculator", "Crimson Amplifier", 0, QApplication::UnicodeUTF8));
        cbCruxAmp->setText(QApplication::translate("attack_calculator", "Crux Amplifier", 0, QApplication::UnicodeUTF8));
        cbShockPulse->setText(QApplication::translate("attack_calculator", "ShockPulse Charger", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("attack_calculator", "&Save", 0, QApplication::UnicodeUTF8));
        btnLoad->setText(QApplication::translate("attack_calculator", "&Load", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("attack_calculator", "&File", 0, QApplication::UnicodeUTF8));
        menu_View->setTitle(QApplication::translate("attack_calculator", "&View", 0, QApplication::UnicodeUTF8));
        menu_Help->setTitle(QApplication::translate("attack_calculator", "&Help", 0, QApplication::UnicodeUTF8));
        menu_Edit->setTitle(QApplication::translate("attack_calculator", "&Edit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class attack_calculator: public Ui_attack_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATTACK_CALCULATOR_H
