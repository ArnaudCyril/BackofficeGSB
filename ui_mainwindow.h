/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat Dec 14 14:01:56 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_9;
    QLabel *labelInfoUSer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidgetMedocs;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_28;
    QTextEdit *textEditCompo;
    QLabel *label_29;
    QTextEdit *textEditContreIndic;
    QLabel *label_30;
    QTextEdit *textEditEffets;
    QComboBox *comboBoxFamille;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditMedoc;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBoxRechercheFamille;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLineEdit *lineEditNomComm;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEditPrixMedoc;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QLineEdit *lineEditDepot;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_12;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonAbbandonnerMedocs;
    QPushButton *pushButtonModifier;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonAJouterMedoc;
    QPushButton *pushButtonSupprimer;
    QWidget *tab_2;
    QLabel *label_8;
    QListWidget *listWidgetpraticient;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEditCodeP;
    QLineEdit *lineEditNomP;
    QLineEdit *lineEditPrenomP;
    QLineEdit *lineEditAdresseP;
    QLineEdit *lineEditCPP;
    QLineEdit *lineEditVilleP;
    QLineEdit *lineEditCoeffP;
    QComboBox *comboBoxTypePra;
    QWidget *layoutWidget7;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButtonAjouterPra;
    QPushButton *pushButtonModifierPra;
    QPushButton *pushButtonSupprimerPra;
    QPushButton *pushButtonAbandonnerpra;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_18;
    QLineEdit *lineEditRechercheNomPra;
    QLabel *label_20;
    QLineEdit *lineEditRecherchePrenomPra;
    QLabel *label_19;
    QComboBox *comboBoxREchercheTypePra;
    QLabel *label_21;
    QWidget *tab_3;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_22;
    QLineEdit *lineEditRechercheNomVisteur;
    QLabel *label_23;
    QLineEdit *lineEditRecherchePrenomVisiteur;
    QLabel *label_26;
    QListWidget *listWidgetVisteur;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButtonAjouterVisteur;
    QPushButton *pushButtonModifierVisiteur;
    QPushButton *pushButtonSupprimerVisiteur;
    QPushButton *pushButtonAbandonnerVisteur;
    QWidget *layoutWidget9;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_27;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_38;
    QVBoxLayout *verticalLayout_7;
    QLineEdit *lineEditMatricule;
    QLineEdit *lineEditNomVisiteur;
    QLineEdit *lineEditPrenomVisiteur;
    QLineEdit *lineEditAdresseVisiteur;
    QLineEdit *lineEditCPVisiteur;
    QLineEdit *lineEditVilleVisiteur;
    QDateEdit *dateEditVisteur;
    QComboBox *comboBoxSecteurVisiteur;
    QComboBox *comboBoxLaboVisiteur;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_25;
    QLabel *label_41;
    QVBoxLayout *verticalLayout_10;
    QComboBox *comboBoxDeptVIs;
    QComboBox *comboBoxTypeVisiteur;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 575);
        MainWindow->setMinimumSize(QSize(900, 575));
        MainWindow->setMaximumSize(QSize(900, 575));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_9 = new QVBoxLayout(centralWidget);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        labelInfoUSer = new QLabel(centralWidget);
        labelInfoUSer->setObjectName(QString::fromUtf8("labelInfoUSer"));

        verticalLayout_9->addWidget(labelInfoUSer);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        listWidgetMedocs = new QListWidget(tab);
        listWidgetMedocs->setObjectName(QString::fromUtf8("listWidgetMedocs"));
        listWidgetMedocs->setGeometry(QRect(10, 50, 711, 131));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(280, 270, 67, 21));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 270, 101, 31));
        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(270, 190, 121, 16));
        label_28 = new QLabel(tab);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(21, 381, 47, 21));
        textEditCompo = new QTextEdit(tab);
        textEditCompo->setObjectName(QString::fromUtf8("textEditCompo"));
        textEditCompo->setGeometry(QRect(110, 270, 131, 61));
        label_29 = new QLabel(tab);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(270, 190, 121, 16));
        textEditContreIndic = new QTextEdit(tab);
        textEditContreIndic->setObjectName(QString::fromUtf8("textEditContreIndic"));
        textEditContreIndic->setGeometry(QRect(390, 190, 191, 81));
        label_30 = new QLabel(tab);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(280, 270, 67, 21));
        textEditEffets = new QTextEdit(tab);
        textEditEffets->setObjectName(QString::fromUtf8("textEditEffets"));
        textEditEffets->setGeometry(QRect(390, 280, 191, 81));
        comboBoxFamille = new QComboBox(tab);
        comboBoxFamille->setObjectName(QString::fromUtf8("comboBoxFamille"));
        comboBoxFamille->setGeometry(QRect(129, 381, 301, 31));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 330, 33));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEditMedoc = new QLineEdit(layoutWidget);
        lineEditMedoc->setObjectName(QString::fromUtf8("lineEditMedoc"));

        horizontalLayout->addWidget(lineEditMedoc);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(390, 10, 213, 33));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBoxRechercheFamille = new QComboBox(layoutWidget1);
        comboBoxRechercheFamille->setObjectName(QString::fromUtf8("comboBoxRechercheFamille"));

        horizontalLayout_2->addWidget(comboBoxRechercheFamille);

        layoutWidget2 = new QWidget(tab);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 230, 231, 33));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_8->addWidget(label_4);

        lineEditNomComm = new QLineEdit(layoutWidget2);
        lineEditNomComm->setObjectName(QString::fromUtf8("lineEditNomComm"));

        horizontalLayout_8->addWidget(lineEditNomComm);

        layoutWidget3 = new QWidget(tab);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(20, 340, 221, 33));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_9->addWidget(label_9);

        lineEditPrixMedoc = new QLineEdit(layoutWidget3);
        lineEditPrixMedoc->setObjectName(QString::fromUtf8("lineEditPrixMedoc"));

        horizontalLayout_9->addWidget(lineEditPrixMedoc);

        layoutWidget4 = new QWidget(tab);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 190, 232, 33));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        lineEditDepot = new QLineEdit(layoutWidget4);
        lineEditDepot->setObjectName(QString::fromUtf8("lineEditDepot"));

        horizontalLayout_7->addWidget(lineEditDepot);

        layoutWidget5 = new QWidget(tab);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(600, 270, 250, 78));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButtonAbbandonnerMedocs = new QPushButton(layoutWidget5);
        pushButtonAbbandonnerMedocs->setObjectName(QString::fromUtf8("pushButtonAbbandonnerMedocs"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Images/abandonner.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAbbandonnerMedocs->setIcon(icon);

        verticalLayout->addWidget(pushButtonAbbandonnerMedocs);

        pushButtonModifier = new QPushButton(layoutWidget5);
        pushButtonModifier->setObjectName(QString::fromUtf8("pushButtonModifier"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Images/modifier.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonModifier->setIcon(icon1);

        verticalLayout->addWidget(pushButtonModifier);


        horizontalLayout_12->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonAJouterMedoc = new QPushButton(layoutWidget5);
        pushButtonAJouterMedoc->setObjectName(QString::fromUtf8("pushButtonAJouterMedoc"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Images/ajouter.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonAJouterMedoc->setIcon(icon2);

        verticalLayout_2->addWidget(pushButtonAJouterMedoc);

        pushButtonSupprimer = new QPushButton(layoutWidget5);
        pushButtonSupprimer->setObjectName(QString::fromUtf8("pushButtonSupprimer"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Images/supprimer.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonSupprimer->setIcon(icon3);

        verticalLayout_2->addWidget(pushButtonSupprimer);


        horizontalLayout_12->addLayout(verticalLayout_2);

        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Images/medoc.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(50, 20, 131, 16));
        listWidgetpraticient = new QListWidget(tab_2);
        listWidgetpraticient->setObjectName(QString::fromUtf8("listWidgetpraticient"));
        listWidgetpraticient->setGeometry(QRect(10, 100, 341, 361));
        layoutWidget6 = new QWidget(tab_2);
        layoutWidget6->setObjectName(QString::fromUtf8("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(380, 100, 290, 331));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_10 = new QLabel(layoutWidget6);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);

        label_11 = new QLabel(layoutWidget6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_3->addWidget(label_11);

        label_12 = new QLabel(layoutWidget6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_3->addWidget(label_12);

        label_13 = new QLabel(layoutWidget6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_3->addWidget(label_13);

        label_14 = new QLabel(layoutWidget6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_3->addWidget(label_14);

        label_15 = new QLabel(layoutWidget6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        verticalLayout_3->addWidget(label_15);

        label_16 = new QLabel(layoutWidget6);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        verticalLayout_3->addWidget(label_16);

        label_17 = new QLabel(layoutWidget6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_3->addWidget(label_17);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lineEditCodeP = new QLineEdit(layoutWidget6);
        lineEditCodeP->setObjectName(QString::fromUtf8("lineEditCodeP"));

        verticalLayout_4->addWidget(lineEditCodeP);

        lineEditNomP = new QLineEdit(layoutWidget6);
        lineEditNomP->setObjectName(QString::fromUtf8("lineEditNomP"));

        verticalLayout_4->addWidget(lineEditNomP);

        lineEditPrenomP = new QLineEdit(layoutWidget6);
        lineEditPrenomP->setObjectName(QString::fromUtf8("lineEditPrenomP"));

        verticalLayout_4->addWidget(lineEditPrenomP);

        lineEditAdresseP = new QLineEdit(layoutWidget6);
        lineEditAdresseP->setObjectName(QString::fromUtf8("lineEditAdresseP"));

        verticalLayout_4->addWidget(lineEditAdresseP);

        lineEditCPP = new QLineEdit(layoutWidget6);
        lineEditCPP->setObjectName(QString::fromUtf8("lineEditCPP"));

        verticalLayout_4->addWidget(lineEditCPP);

        lineEditVilleP = new QLineEdit(layoutWidget6);
        lineEditVilleP->setObjectName(QString::fromUtf8("lineEditVilleP"));

        verticalLayout_4->addWidget(lineEditVilleP);

        lineEditCoeffP = new QLineEdit(layoutWidget6);
        lineEditCoeffP->setObjectName(QString::fromUtf8("lineEditCoeffP"));

        verticalLayout_4->addWidget(lineEditCoeffP);

        comboBoxTypePra = new QComboBox(layoutWidget6);
        comboBoxTypePra->setObjectName(QString::fromUtf8("comboBoxTypePra"));

        verticalLayout_4->addWidget(comboBoxTypePra);


        horizontalLayout_3->addLayout(verticalLayout_4);

        layoutWidget7 = new QWidget(tab_2);
        layoutWidget7->setObjectName(QString::fromUtf8("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(710, 260, 127, 156));
        verticalLayout_5 = new QVBoxLayout(layoutWidget7);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButtonAjouterPra = new QPushButton(layoutWidget7);
        pushButtonAjouterPra->setObjectName(QString::fromUtf8("pushButtonAjouterPra"));
        pushButtonAjouterPra->setIcon(icon2);

        verticalLayout_5->addWidget(pushButtonAjouterPra);

        pushButtonModifierPra = new QPushButton(layoutWidget7);
        pushButtonModifierPra->setObjectName(QString::fromUtf8("pushButtonModifierPra"));
        pushButtonModifierPra->setIcon(icon1);

        verticalLayout_5->addWidget(pushButtonModifierPra);

        pushButtonSupprimerPra = new QPushButton(layoutWidget7);
        pushButtonSupprimerPra->setObjectName(QString::fromUtf8("pushButtonSupprimerPra"));
        pushButtonSupprimerPra->setIcon(icon3);

        verticalLayout_5->addWidget(pushButtonSupprimerPra);

        pushButtonAbandonnerpra = new QPushButton(layoutWidget7);
        pushButtonAbandonnerpra->setObjectName(QString::fromUtf8("pushButtonAbandonnerpra"));
        pushButtonAbandonnerpra->setIcon(icon);

        verticalLayout_5->addWidget(pushButtonAbandonnerpra);

        layoutWidget8 = new QWidget(tab_2);
        layoutWidget8->setObjectName(QString::fromUtf8("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(1, 50, 586, 33));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(layoutWidget8);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_4->addWidget(label_18);

        lineEditRechercheNomPra = new QLineEdit(layoutWidget8);
        lineEditRechercheNomPra->setObjectName(QString::fromUtf8("lineEditRechercheNomPra"));

        horizontalLayout_4->addWidget(lineEditRechercheNomPra);

        label_20 = new QLabel(layoutWidget8);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_4->addWidget(label_20);

        lineEditRecherchePrenomPra = new QLineEdit(layoutWidget8);
        lineEditRecherchePrenomPra->setObjectName(QString::fromUtf8("lineEditRecherchePrenomPra"));

        horizontalLayout_4->addWidget(lineEditRecherchePrenomPra);

        label_19 = new QLabel(layoutWidget8);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_4->addWidget(label_19);

        comboBoxREchercheTypePra = new QComboBox(layoutWidget8);
        comboBoxREchercheTypePra->setObjectName(QString::fromUtf8("comboBoxREchercheTypePra"));

        horizontalLayout_4->addWidget(comboBoxREchercheTypePra);

        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(380, 450, 281, 17));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Images/pra.png"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        layoutWidget_2 = new QWidget(tab_3);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(1, 40, 351, 33));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_2);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_5->addWidget(label_22);

        lineEditRechercheNomVisteur = new QLineEdit(layoutWidget_2);
        lineEditRechercheNomVisteur->setObjectName(QString::fromUtf8("lineEditRechercheNomVisteur"));

        horizontalLayout_5->addWidget(lineEditRechercheNomVisteur);

        label_23 = new QLabel(layoutWidget_2);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_5->addWidget(label_23);

        lineEditRecherchePrenomVisiteur = new QLineEdit(layoutWidget_2);
        lineEditRecherchePrenomVisiteur->setObjectName(QString::fromUtf8("lineEditRecherchePrenomVisiteur"));

        horizontalLayout_5->addWidget(lineEditRecherchePrenomVisiteur);

        label_26 = new QLabel(tab_3);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(50, 10, 131, 16));
        listWidgetVisteur = new QListWidget(tab_3);
        listWidgetVisteur->setObjectName(QString::fromUtf8("listWidgetVisteur"));
        listWidgetVisteur->setGeometry(QRect(10, 90, 341, 331));
        layoutWidget_4 = new QWidget(tab_3);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(720, 250, 127, 156));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButtonAjouterVisteur = new QPushButton(layoutWidget_4);
        pushButtonAjouterVisteur->setObjectName(QString::fromUtf8("pushButtonAjouterVisteur"));
        pushButtonAjouterVisteur->setIcon(icon2);

        verticalLayout_8->addWidget(pushButtonAjouterVisteur);

        pushButtonModifierVisiteur = new QPushButton(layoutWidget_4);
        pushButtonModifierVisiteur->setObjectName(QString::fromUtf8("pushButtonModifierVisiteur"));
        pushButtonModifierVisiteur->setIcon(icon1);

        verticalLayout_8->addWidget(pushButtonModifierVisiteur);

        pushButtonSupprimerVisiteur = new QPushButton(layoutWidget_4);
        pushButtonSupprimerVisiteur->setObjectName(QString::fromUtf8("pushButtonSupprimerVisiteur"));
        pushButtonSupprimerVisiteur->setIcon(icon3);

        verticalLayout_8->addWidget(pushButtonSupprimerVisiteur);

        pushButtonAbandonnerVisteur = new QPushButton(layoutWidget_4);
        pushButtonAbandonnerVisteur->setObjectName(QString::fromUtf8("pushButtonAbandonnerVisteur"));
        pushButtonAbandonnerVisteur->setIcon(icon);

        verticalLayout_8->addWidget(pushButtonAbandonnerVisteur);

        layoutWidget9 = new QWidget(tab_3);
        layoutWidget9->setObjectName(QString::fromUtf8("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(360, 80, 267, 368));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget9);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_27 = new QLabel(layoutWidget9);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        verticalLayout_6->addWidget(label_27);

        label_31 = new QLabel(layoutWidget9);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        verticalLayout_6->addWidget(label_31);

        label_32 = new QLabel(layoutWidget9);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        verticalLayout_6->addWidget(label_32);

        label_33 = new QLabel(layoutWidget9);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout_6->addWidget(label_33);

        label_34 = new QLabel(layoutWidget9);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        verticalLayout_6->addWidget(label_34);

        label_35 = new QLabel(layoutWidget9);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        verticalLayout_6->addWidget(label_35);

        label_36 = new QLabel(layoutWidget9);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        verticalLayout_6->addWidget(label_36);

        label_37 = new QLabel(layoutWidget9);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        verticalLayout_6->addWidget(label_37);

        label_38 = new QLabel(layoutWidget9);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        verticalLayout_6->addWidget(label_38);


        horizontalLayout_6->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        lineEditMatricule = new QLineEdit(layoutWidget9);
        lineEditMatricule->setObjectName(QString::fromUtf8("lineEditMatricule"));

        verticalLayout_7->addWidget(lineEditMatricule);

        lineEditNomVisiteur = new QLineEdit(layoutWidget9);
        lineEditNomVisiteur->setObjectName(QString::fromUtf8("lineEditNomVisiteur"));

        verticalLayout_7->addWidget(lineEditNomVisiteur);

        lineEditPrenomVisiteur = new QLineEdit(layoutWidget9);
        lineEditPrenomVisiteur->setObjectName(QString::fromUtf8("lineEditPrenomVisiteur"));

        verticalLayout_7->addWidget(lineEditPrenomVisiteur);

        lineEditAdresseVisiteur = new QLineEdit(layoutWidget9);
        lineEditAdresseVisiteur->setObjectName(QString::fromUtf8("lineEditAdresseVisiteur"));

        verticalLayout_7->addWidget(lineEditAdresseVisiteur);

        lineEditCPVisiteur = new QLineEdit(layoutWidget9);
        lineEditCPVisiteur->setObjectName(QString::fromUtf8("lineEditCPVisiteur"));

        verticalLayout_7->addWidget(lineEditCPVisiteur);

        lineEditVilleVisiteur = new QLineEdit(layoutWidget9);
        lineEditVilleVisiteur->setObjectName(QString::fromUtf8("lineEditVilleVisiteur"));

        verticalLayout_7->addWidget(lineEditVilleVisiteur);

        dateEditVisteur = new QDateEdit(layoutWidget9);
        dateEditVisteur->setObjectName(QString::fromUtf8("dateEditVisteur"));

        verticalLayout_7->addWidget(dateEditVisteur);

        comboBoxSecteurVisiteur = new QComboBox(layoutWidget9);
        comboBoxSecteurVisiteur->setObjectName(QString::fromUtf8("comboBoxSecteurVisiteur"));

        verticalLayout_7->addWidget(comboBoxSecteurVisiteur);

        comboBoxLaboVisiteur = new QComboBox(layoutWidget9);
        comboBoxLaboVisiteur->setObjectName(QString::fromUtf8("comboBoxLaboVisiteur"));

        verticalLayout_7->addWidget(comboBoxLaboVisiteur);


        horizontalLayout_6->addLayout(verticalLayout_7);

        layoutWidget10 = new QWidget(tab_3);
        layoutWidget10->setObjectName(QString::fromUtf8("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(640, 80, 231, 72));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_25 = new QLabel(layoutWidget10);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_11->addWidget(label_25);


        verticalLayout_11->addLayout(horizontalLayout_11);

        label_41 = new QLabel(layoutWidget10);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        verticalLayout_11->addWidget(label_41);


        horizontalLayout_10->addLayout(verticalLayout_11);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        comboBoxDeptVIs = new QComboBox(layoutWidget10);
        comboBoxDeptVIs->setObjectName(QString::fromUtf8("comboBoxDeptVIs"));

        verticalLayout_10->addWidget(comboBoxDeptVIs);

        comboBoxTypeVisiteur = new QComboBox(layoutWidget10);
        comboBoxTypeVisiteur->setObjectName(QString::fromUtf8("comboBoxTypeVisiteur"));

        verticalLayout_10->addWidget(comboBoxTypeVisiteur);


        horizontalLayout_10->addLayout(verticalLayout_10);

        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Images/vis.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_3, icon6, QString());

        verticalLayout_9->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Outil de gestion GSB", 0, QApplication::UnicodeUTF8));
        labelInfoUSer->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "Effets", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "Composition", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "Contre indication", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindow", "Famille", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindow", "Contre indication", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindow", "Effets", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Rechercher un m\303\251dicament", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "Famille : ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "Nom commercial", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "Prix", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Depot l\303\251gal", 0, QApplication::UnicodeUTF8));
        pushButtonAbbandonnerMedocs->setText(QApplication::translate("MainWindow", "Abandonner", 0, QApplication::UnicodeUTF8));
        pushButtonModifier->setText(QApplication::translate("MainWindow", "Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonAJouterMedoc->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimer->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "M\303\251dicaments", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "Liste des praticiens", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "Code *", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "Nom", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "Prenom", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindow", "Adresse", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "CP :", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindow", "Ville", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindow", "Coefficient de notori\303\251t\303\251", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindow", "Type de praticien", 0, QApplication::UnicodeUTF8));
        pushButtonAjouterPra->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonModifierPra->setText(QApplication::translate("MainWindow", "Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimerPra->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButtonAbandonnerpra->setText(QApplication::translate("MainWindow", "Abandonner", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindow", "Par nom : ", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindow", "Prenom", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindow", "Par type", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindow", "* G\303\251n\303\251r\303\251 automatiquement en cas d'ajout", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Praticiens", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindow", "Par Nom : ", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindow", "Prenom", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindow", "Liste des visiteurs", 0, QApplication::UnicodeUTF8));
        pushButtonAjouterVisteur->setText(QApplication::translate("MainWindow", "Ajouter", 0, QApplication::UnicodeUTF8));
        pushButtonModifierVisiteur->setText(QApplication::translate("MainWindow", "Modifier", 0, QApplication::UnicodeUTF8));
        pushButtonSupprimerVisiteur->setText(QApplication::translate("MainWindow", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButtonAbandonnerVisteur->setText(QApplication::translate("MainWindow", "Abandonner", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindow", "Matricule ", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindow", "Nom", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindow", "Prenom", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("MainWindow", "Adresse", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("MainWindow", "CP :", 0, QApplication::UnicodeUTF8));
        label_35->setText(QApplication::translate("MainWindow", "Ville", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("MainWindow", "Date d'Enbauche", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("MainWindow", "Secteur", 0, QApplication::UnicodeUTF8));
        label_38->setText(QApplication::translate("MainWindow", "Laboratoire", 0, QApplication::UnicodeUTF8));
        dateEditVisteur->setDisplayFormat(QApplication::translate("MainWindow", "dd/MM/yyyy", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindow", "D\303\251partement", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("MainWindow", "Type", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Visiteurs", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
