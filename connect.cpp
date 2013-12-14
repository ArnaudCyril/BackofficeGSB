#include "connect.h"
#include "ui_connect.h"
#include "mainwindow.h"
#include <QSqlQuery>
#include <qdebug.h>


connect::connect(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::connect)
{
    ui->setupUi(this);
    connectionValide=false; // on initialise la connexion a false
    ui->lineEditMdp->setEchoMode(QLineEdit::Password);

    /// met a jour les departements si besion
    /*QSqlQuery req("select VIS_MATRICULE,VIS_CP from visiteur");
    while(req.next())
    {
        QString res=req.value(1).toString();
        QString s=res.at(0);
        s=s+res.at(1);
    qDebug()<<"update visiteur set DEP_CODE='"+s+"' where VIS_MATRICULE='"+req.value(0).toString()+"'";
        QSqlQuery req2("update visiteur set DEP_CODE='"+s+"' where VIS_MATRICULE='"+req.value(0).toString()+"'");
    }*/

}

connect::~connect()
{
    delete ui;
}

void connect::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void connect::on_pushButtonOK_clicked()// si on veut se connecter
{

    QSqlQuery maReq("select login,mdp from secretaire where login='"+ui->lineEditLogin->text()+"' and mdp='"+ui->lineEditMdp->text()+"'");
     maReq.first();

    if(maReq.isNull(0)) // si le mdp ou login n est pas bon
    {
        ui->labelEroor->setText("Erreur lors de la connexion ,reessayer ! ");
        setStyleSheet("connect { background : qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0,150), stop:1 rgba(247, 49, 53, 150)); }"); // change la couleur de fond
        connectionValide=false;
    }
    else // si c est bon
    {
    visiteur=ui->lineEditLogin->text();// on recupere celui qui se connecte
     this->close(); // on ferme la fenetre
     connectionValide=true; // on passe la connexion a true
     }
}

void connect::on_pushButtonAnnuler_clicked()// si on annule
{
    this->close();
}


void connect::on_lineEditLogin_cursorPositionChanged(int arg1, int arg2)// si il y a qqchose dans les 2 line edit , on peut proposer de se connecter sinon le boutton ok est grisé
{
    if(ui->lineEditLogin->text().length()*ui->lineEditMdp->text().length()>0)
    {
        ui->pushButtonOK->setEnabled(true);
    }
    else
    {
        ui->pushButtonOK->setEnabled(false);
    }
}

void connect::on_lineEditMdp_cursorPositionChanged(int arg1, int arg2)// si il y a qqchose dans les 2 line edit , on peut proposer de se connecter sinon le boutton ok est grisé
{
    if(ui->lineEditLogin->text().length()*ui->lineEditMdp->text().length()>0)
    {
        ui->pushButtonOK->setEnabled(true);
    }
    else
    {
        ui->pushButtonOK->setEnabled(false);
    }
}
