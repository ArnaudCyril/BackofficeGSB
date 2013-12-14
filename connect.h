#ifndef CONNECT_H
#define CONNECT_H

#include <QDialog>
#include <QString>
#include "mainwindow.h"

namespace Ui {
    class connect;
}

class connect : public QDialog {
    Q_OBJECT
public:
    connect(QWidget *parent = 0);
    ~connect();
    QString visiteur;
   bool connectionValide;


protected:
    void changeEvent(QEvent *e);

private:
    Ui::connect *ui;

private slots:
    void on_pushButtonAnnuler_clicked();
    void on_pushButtonOK_clicked();
    void on_lineEditLogin_cursorPositionChanged(int arg1, int arg2);
    void on_lineEditMdp_cursorPositionChanged(int arg1, int arg2);
};

#endif // CONNECT_H
