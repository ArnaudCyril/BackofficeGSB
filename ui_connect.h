/********************************************************************************
** Form generated from reading UI file 'connect.ui'
**
** Created: Sat Dec 14 14:01:56 2013
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECT_H
#define UI_CONNECT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connect
{
public:
    QLabel *labelEroor;
    QLabel *label_3;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditMdp;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonOK;
    QPushButton *pushButtonAnnuler;

    void setupUi(QDialog *connect)
    {
        if (connect->objectName().isEmpty())
            connect->setObjectName(QString::fromUtf8("connect"));
        connect->resize(346, 221);
        connect->setLayoutDirection(Qt::LeftToRight);
        connect->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0,150), stop:1 rgba(90, 200, 2, 150));"));
        labelEroor = new QLabel(connect);
        labelEroor->setObjectName(QString::fromUtf8("labelEroor"));
        labelEroor->setGeometry(QRect(30, 40, 291, 21));
        labelEroor->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);\n"
"color:white;"));
        label_3 = new QLabel(connect);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 20, 131, 21));
        label_3->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:rgba(0,0,0,0);"));
        groupBox = new QGroupBox(connect);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 60, 282, 149));
        groupBox->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(8, 16, 256, 113));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:rgba(0,0,0,0);"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background-color:rgba(0,0,0,0);"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEditLogin = new QLineEdit(layoutWidget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));

        verticalLayout_2->addWidget(lineEditLogin);

        lineEditMdp = new QLineEdit(layoutWidget);
        lineEditMdp->setObjectName(QString::fromUtf8("lineEditMdp"));

        verticalLayout_2->addWidget(lineEditMdp);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonOK = new QPushButton(layoutWidget);
        pushButtonOK->setObjectName(QString::fromUtf8("pushButtonOK"));
        pushButtonOK->setEnabled(false);
        pushButtonOK->setStyleSheet(QString::fromUtf8("background-color:white;"));

        horizontalLayout_2->addWidget(pushButtonOK);

        pushButtonAnnuler = new QPushButton(layoutWidget);
        pushButtonAnnuler->setObjectName(QString::fromUtf8("pushButtonAnnuler"));
        pushButtonAnnuler->setStyleSheet(QString::fromUtf8("background-color:white;"));

        horizontalLayout_2->addWidget(pushButtonAnnuler);


        verticalLayout_3->addLayout(horizontalLayout_2);


        retranslateUi(connect);

        QMetaObject::connectSlotsByName(connect);
    } // setupUi

    void retranslateUi(QDialog *connect)
    {
        connect->setWindowTitle(QApplication::translate("connect", "Connection", 0, QApplication::UnicodeUTF8));
        labelEroor->setText(QString());
        label_3->setText(QApplication::translate("connect", "Connectez-vous !", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("connect", "Login :", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("connect", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        pushButtonOK->setText(QApplication::translate("connect", "OK", 0, QApplication::UnicodeUTF8));
        pushButtonAnnuler->setText(QApplication::translate("connect", "Annuler", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class connect: public Ui_connect {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECT_H
