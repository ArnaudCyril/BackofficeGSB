#include <QApplication>
#include "mainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include "connect.h"
#include "qdebug.h"

int main(int argc, char *argv[])
{


    //connection a la bdd
    QSqlDatabase baseGSB=QSqlDatabase::addDatabase("QMYSQL");

    baseGSB.setHostName("127.0.0.1");
    baseGSB.setPassword("ini01");
    baseGSB.setUserName("admin");
    baseGSB.setDatabaseName("db_gestionCR");
    if(baseGSB.open())
    {
         qDebug()<<"COnnection a la base reussie";
    }

    QApplication a(argc, argv);
    connect c;
    c.show();
   
    a.exec();

    if(c.connectionValide)
    {

        MainWindow w(0,c.visiteur);
          w.show();
        return a.exec();
    }
    else
    {
        return 0;
    }

}
