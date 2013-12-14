#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "connect.h"
#include <QDebug>
#include <QListWidgetItem>
#include <QColor>
#include <QLinearGradient>
#include <QGradient>

MainWindow::MainWindow(QWidget *parent,QString log) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    // chargement des onglets
    getInfoUser(log); // recupertation du nom de celui qui s est connecté
    chargerMedocs();
  chargerPraticiens();
    chargerVisteur();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changeEvent(QEvent *e)
{
    QMainWindow::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
void MainWindow::getInfoUser(QString log)
{

    QSqlQuery req("select nom , prenom from secretaire where login='"+log+"'"); // on recupere le nom et le prenom de celui qui s'est connecté

    if(req.first())
    {
        qDebug()<<log;
        ui->labelInfoUSer->setText(req.value(0).toString()+" "+req.value(1).toString()); // on l affiche
    }
}


void MainWindow::on_tabWidget_currentChanged(int index) // si on change d onglet , on recharge l onglet
{
    if(index==0)
    {
        chargerMedocs();
    }
    if(index==1)
    {
        chargerPraticiens();
    }
    if(index==2)
    {
        chargerVisteur();
    }
}
// **************************************** DEBUT DE L ONGLET MEDICAMENT ***************************************
void MainWindow::chargerMedocs() // on clear tout on réinitialise tout
{

     ui->lineEditDepot->clear();

    ui->textEditCompo->clear();
    ui->textEditContreIndic->clear();
    ui->textEditEffets->clear();
    ui->lineEditPrixMedoc->clear();
  ui->comboBoxFamille->clear();
   ui->lineEditNomComm->clear();
    ui->lineEditMedoc->clear();
    ui->comboBoxRechercheFamille->clear();
     chargerListWidgetMedoc();
      chargerListeFamille();// combobox famille
      chargerRechercheListeFamille(); // combo box recherche famille
}
void MainWindow::chargerListWidgetMedoc()// on charge la liste
{
    ui->listWidgetMedocs->clear();
    vectorMedoc.clear();
     int i=0;
    QSqlQuery req("select MED_NOMCOMMERCIAL, FAM_LIBELLE,MED_DEPOTLEGAL from medicament natural join famille where MED_NOMCOMMERCIAL like '"+ui->lineEditMedoc->text()+"%' and FAM_LIBELLE like '"+ui->comboBoxRechercheFamille->currentText()+"%' order by MED_NOMCOMMERCIAL");
    while(req.next())
    {

        QListWidgetItem *item=new QListWidgetItem(req.value(0).toString()+" "+req.value(1).toString());
        QLinearGradient linGrad;
        linGrad.setStart(0,ui->listWidgetMedocs->y());// gradiant
        linGrad.setFinalStop(ui->listWidgetMedocs->width(),ui->listWidgetMedocs->y());// stop gradiant
        if(i%2==0)
        {
            linGrad.setColorAt( 0, QColor(191,230,244));//couleur
            linGrad.setColorAt( 1, Qt::white );


          }
        else
        {

              linGrad.setColorAt( 0, QColor(157,214,237));
               linGrad.setColorAt( 1, Qt::white );
        }
          i++;

            QBrush brush(linGrad);//definit une QBrush

        item->setBackground(brush);//ajout de la couleur dd l item


        ui->listWidgetMedocs->addItem(item);
        vectorMedoc.push_back(req.value(2).toString());
    }
    if(i==0)ui->listWidgetMedocs->addItem("Pas de médicament(s)");
    ui->pushButtonAJouterMedoc->setEnabled(false); // on grise les bouttons
    ui->pushButtonAbbandonnerMedocs->setEnabled(false);
    ui->pushButtonModifier->setEnabled(false);
    ui->pushButtonSupprimer->setEnabled(false);

}

void MainWindow::on_lineEditMedoc_cursorPositionChanged(int arg1, int arg2) // quand on fait une recherche
{
    chargerListWidgetMedoc();
    gererBuutonMedocs();
}

void MainWindow::on_comboBoxRechercheFamille_currentIndexChanged(int index)
{
    chargerListWidgetMedoc();
    gererBuutonMedocs();
}

void MainWindow::on_listWidgetMedocs_clicked(const QModelIndex &index)// quand on clique sur un medoc
{

    QSqlQuery req("select * from medicament natural join famille where MED_DEPOTLEGAL='"+vectorMedoc.value(ui->listWidgetMedocs->currentRow())+"'");// on recupe les infos du medoc
    if(req.first())
    {
        ui->lineEditNomComm->setText(req.value(2).toString());nomMedoc=req.value(2).toString();

    ui->lineEditDepot->setText(req.value(1).toString());depot=req.value(1).toString();
    ui->textEditCompo->setText(req.value(3).toString());compo=req.value(3).toString(); // on les affiche et on enregistre les parametres pour les comparer
    ui->textEditContreIndic->setText(req.value(5).toString());contre=req.value(5).toString();
    ui->textEditEffets->setText(req.value(4).toString());effets=req.value(4).toString();
    ui->lineEditPrixMedoc->setText(req.value(6).toString());prix=req.value(6).toString();

    ui->comboBoxFamille->setCurrentIndex(this->vectorFamille.lastIndexOf(req.value(0).toString()));famille=ui->comboBoxFamille->currentText();

    gererBuutonMedocs(); // on appelle cette procedure pour l initialiser
    ui->pushButtonAbbandonnerMedocs->setEnabled(true);
    ui->pushButtonSupprimer->setEnabled(true);


    }
}
void MainWindow::chargerListeFamille() // charge la combo box des familles
{
    ui->comboBoxFamille->clear();
    this->vectorFamille.clear();

    ui->comboBoxFamille->addItem("Choisir une famille...");
    this->vectorFamille.push_back("null");

    QSqlQuery res("select * from famille");
   while(res.next())
        {
        ui->comboBoxFamille->addItem(res.value(1).toString());
        this->vectorFamille.push_back(res.value(0).toString());
         }

}
void MainWindow::chargerRechercheListeFamille()// charge la combo box de recherche de famille
{
    ui->comboBoxRechercheFamille->clear();


    QSqlQuery res("select distinct FAM_LIBELLE from famille natural join medicament");
   while(res.next())
        {
        ui->comboBoxRechercheFamille->addItem(res.value(0).toString());
         }
    ui->comboBoxRechercheFamille->setCurrentIndex(6);
}
bool MainWindow::isDifferentMedocs() // methode qui revoi vrai si il y a eu des modifs false sinon
{
    bool test=contre!=ui->textEditContreIndic->toPlainText();
    qDebug()<<test;
    qDebug()<<contre;
    qDebug()<<ui->textEditContreIndic->toPlainText();

    return(depot!=ui->lineEditDepot->text() or nomMedoc!=ui->lineEditNomComm->text() or compo!=ui->textEditCompo->toPlainText() or effets!=ui->textEditEffets->toPlainText() or contre!=ui->textEditContreIndic->toPlainText() or prix!=ui->lineEditPrixMedoc->text() or famille!=ui->comboBoxFamille->currentText());
}
bool MainWindow::nonVideMedocs() // verifie que tout les champs sont replis
{
    return (ui->lineEditDepot->text().length()*ui->lineEditNomComm->text().length()*ui->lineEditPrixMedoc->text().length()*ui->textEditCompo->toPlainText().length()*ui->textEditContreIndic->toPlainText().length()*ui->textEditEffets->toPlainText().length()>0 and ui->comboBoxFamille->currentIndex()>0);
}
bool MainWindow::nonVideMedocsAbandonner() // verifie qu au moins un des champs et remplis
{

    return (ui->lineEditDepot->text().length()+ui->lineEditNomComm->text().length()+ui->lineEditPrixMedoc->text().length()+ui->textEditCompo->toPlainText().length()+ui->textEditContreIndic->toPlainText().length()+ui->textEditEffets->toPlainText().length()>0 or ui->comboBoxFamille->currentIndex()>0);
}
void MainWindow::gererBuutonMedocs()// selon si il a eu des modis et si les champs sont remplis on active ou non les boutton modifier , ajouter , abbandonner
{


    if(nonVideMedocs() and isDifferentMedocs())//si il a eu des changements et que rien n est vide
    {
        if(depot==ui->lineEditDepot->text())// si c est la meme primary key
        {
         ui->pushButtonModifier->setEnabled(true);//modifier oui
          ui->pushButtonAJouterMedoc->setEnabled(false);//ajouter non
        }
        else //pas la meme primary key
        {
             ui->pushButtonAJouterMedoc->setEnabled(true);// modifier non
             ui->pushButtonModifier->setEnabled(false); // modifier oui
        }


    }
    else // sinon on desactive les bouttons ajouter et modifier
    {
        ui->pushButtonAJouterMedoc->setEnabled(false);
        ui->pushButtonModifier->setEnabled(false);

    }

    if(nonVideMedocsAbandonner()) // si un des champs est rempli
    {

        ui->pushButtonAbbandonnerMedocs->setEnabled(true); // on peut abandonner
    }
    else // sinon on peut pas
    {

        ui->pushButtonAbbandonnerMedocs->setEnabled(false);
    }
}

void MainWindow::on_pushButtonAbbandonnerMedocs_clicked()// quand on abandonne
{

    chargerMedocs();//recharge l onglet
}

void MainWindow::on_lineEditDepot_cursorPositionChanged(int arg1, int arg2)// au chagement d'un champ on recharge les bouttons
{
    gererBuutonMedocs();
}

void MainWindow::on_lineEditNomComm_cursorPositionChanged(int arg1, int arg2)// au chagement d'un champ on recharge les bouttons
{
    gererBuutonMedocs();
}

void MainWindow::on_textEditCompo_cursorPositionChanged()// au chagement d'un champ on recharge les bouttons
{
    gererBuutonMedocs();
}

void MainWindow::on_lineEditPrixMedoc_cursorPositionChanged(int arg1, int arg2)// au chagement d'un champ on recharge les bouttons
{
    gererBuutonMedocs();
}

void MainWindow::on_textEditContreIndic_cursorPositionChanged()// au chagement d'un champ on recharge les bouttons
{
    gererBuutonMedocs();
}

void MainWindow::on_textEditEffets_cursorPositionChanged()// au chagement d'un champ on recharge les bouttons
{
    gererBuutonMedocs();
}

void MainWindow::on_comboBoxFamille_currentIndexChanged(int index)// au chagement d'un champ on recharge les bouttons
{
    gererBuutonMedocs();
}

void MainWindow::on_pushButtonModifier_clicked()//quand on modifie
{
    QSqlQuery req;
    req.exec("update medicament set MED_DEPOTLEGAL='"+ui->lineEditDepot->text()+"' , MED_NOMCOMMERCIAL='"+ui->lineEditNomComm->text()+"' , FAM_CODE='"+vectorFamille.value(ui->comboBoxFamille->currentIndex())+"' , MED_COMPOSITION='"+ui->textEditCompo->toPlainText().replace("'","\'") +"' , MED_EFFETS='"+ui->textEditEffets->toPlainText().replace("'","\'") +"' , MED_CONTREINDIC='"+ui->textEditContreIndic->toPlainText().replace("'","\\'") +"' , MED_PRIXECHANTILLON="+ui->lineEditPrixMedoc->text()+" where MED_DEPOTLEGAL='"+vectorMedoc.value(ui->listWidgetMedocs->currentRow())+"'");
    chargerMedocs();
}

void MainWindow::on_pushButtonAJouterMedoc_clicked()//quand on ajoute
{
   QSqlQuery req;
    req.exec("insert into medicament values('"+ui->lineEditDepot->text()+"' ,'"+ui->lineEditNomComm->text()+"' , '"+vectorFamille.value(ui->comboBoxFamille->currentIndex())+"' , '"+ui->textEditCompo->toPlainText().replace("'","\\'") +"' , '"+ui->textEditEffets->toPlainText().replace("'","\\'") +"' , '"+ui->textEditContreIndic->toPlainText().replace("'","\\'") +"' , "+ui->lineEditPrixMedoc->text()+")");
     chargerMedocs();
}

void MainWindow::on_pushButtonSupprimer_clicked()//quand on supprimme
{
    QSqlQuery req;
    req.exec("delete from medicament where MED_DEPOTLEGAL='"+vectorMedoc.value(ui->listWidgetMedocs->currentRow())+"'");

    chargerMedocs();
}
// ************************************************ FIN DE L ONGLET MEDICAMENT **********************************
// ************************************************ DEBUT DE L ONGLET PRATICIEN ********************************
void MainWindow::chargerPraticiens()// chanrge l onglet praticien
{
    ui->lineEditCodeP->setEnabled(false);// on clear et réinitialise tout
    ui->lineEditAdresseP->clear();
    ui->lineEditCodeP->clear();
    ui->lineEditCoeffP->clear();
    ui->lineEditCPP->clear();
  ui->comboBoxTypePra->clear();
   ui->lineEditNomP->clear();
    ui->lineEditPrenomP->clear();
    ui->lineEditVilleP->clear();
    charcherListWidgetPra();
    ui->comboBoxREchercheTypePra->clear();
    chargerRechercheTypePra();//combo box type praticien(medecin hospitalier , de ville)
      chargerTypePra();

}
void MainWindow::charcherListWidgetPra()// charge les praticiens dans la liste widgets
{
    ui->listWidgetpraticient->clear();
    vectorPraticien.clear();
    QSqlQuery req("select PRA_NOM,PRA_PRENOM,TYP_LIBELLE,PRA_CODE  from praticien natural join type_praticien where PRA_NOM like '"+ui->lineEditRechercheNomPra->text()+"%' and PRA_PRENOM like '"+ui->lineEditRecherchePrenomPra->text()+"%' and TYP_LIBELLE like '"+ui->comboBoxREchercheTypePra->currentText()+"%' order by PRA_NOM,PRA_PRENOM");
    int i=0;
    while(req.next())
    {
        QListWidgetItem *item=new QListWidgetItem(req.value(0).toString()+" "+req.value(1).toString()+" | "+req.value(2).toString());
        QLinearGradient linGrad;
        linGrad.setStart(0,ui->listWidgetpraticient->y());
        linGrad.setFinalStop(ui->listWidgetpraticient->width(),ui->listWidgetpraticient->y());
        if(i%2==0)// defini la couleur , on change de couleur 1 item sur 2
        {
            linGrad.setColorAt( 0, QColor(191,230,244));
            linGrad.setColorAt( 1, Qt::white );


          }
        else
        {

              linGrad.setColorAt( 0, QColor(157,214,237));
               linGrad.setColorAt( 1, Qt::white );
        }
          i++;
          
            QBrush brush(linGrad);

        item->setBackground(brush);


        ui->listWidgetpraticient->addItem(item);//ajout de l item
        vectorPraticien.push_back(req.value(3).toInt());// on enregistre l id du praticien dans un vecteur
    }
    ui->pushButtonAjouterPra->setEnabled(false);// on grise tout les bouttons
    ui->pushButtonAbandonnerpra->setEnabled(false);
    ui->pushButtonSupprimerPra->setEnabled(false);
    ui->pushButtonModifierPra->setEnabled(false);
}
void MainWindow::chargerTypePra()// charge la combobox type praticien
{
  ui->comboBoxTypePra->clear();
  this->vectorTypePra.clear();

  ui->comboBoxTypePra->addItem("Choisir un praticien...");
  this->vectorTypePra.push_back("null");

  QSqlQuery res("select * from type_praticien");
 while(res.next())
      {
      ui->comboBoxTypePra->addItem(res.value(1).toString());
      this->vectorTypePra.push_back(res.value(0).toString());
       }
}
void MainWindow::chargerRechercheTypePra()// charge la combobox type praticien de recherche
{
  ui->comboBoxREchercheTypePra->clear();

  QSqlQuery res("select * from type_praticien");
 while(res.next())
      {
      ui->comboBoxREchercheTypePra->addItem(res.value(1).toString());

       }
 ui->comboBoxREchercheTypePra->setCurrentIndex(0);// on place directement la combo sur la 1ere valeur
}
void MainWindow::on_lineEditRechercheNomPra_cursorPositionChanged(int , int )//si on fait une recherche
{
    charcherListWidgetPra();
    gererBuutonPra();
}

void MainWindow::on_lineEditRecherchePrenomPra_cursorPositionChanged(int , int )
{
    charcherListWidgetPra();
    gererBuutonPra();
}

void MainWindow::on_comboBoxREchercheTypePra_currentIndexChanged(int index)
{
    charcherListWidgetPra();
    gererBuutonPra();
}

void MainWindow::on_listWidgetpraticient_clicked(QModelIndex)//si on clique sur un  praticien
{

    QSqlQuery req("select * from praticien natural join type_praticien where PRA_CODE="+QString::number(vectorPraticien.value(ui->listWidgetpraticient->currentRow())));
    if(req.first())
    {
        ui->lineEditCodeP->setText(req.value(1).toString());codePra=req.value(1).toString();// on affiche les elements et on enregistre les "parametres" de base

    ui->lineEditNomP->setText(req.value(2).toString());nomPra=req.value(2).toString();
    ui->lineEditPrenomP->setText(req.value(3).toString());prenomPra=req.value(3).toString();
    ui->lineEditAdresseP->setText(req.value(4).toString());adressePra=req.value(4).toString();
    ui->lineEditCPP->setText(req.value(5).toString());cpPra=req.value(5).toString();
    ui->lineEditVilleP->setText(req.value(6).toString());villePra=req.value(6).toString();
    ui->lineEditCoeffP->setText(req.value(7).toString());coeffPra=req.value(7).toString();

    ui->comboBoxTypePra->setCurrentIndex(this->vectorTypePra.lastIndexOf(req.value(0).toString()));typePra=req.value(8).toString();// on place la combo sur la bonen valeur



    ui->pushButtonAbandonnerpra->setEnabled(true);
    ui->pushButtonSupprimerPra->setEnabled(true);
    gererBuutonPra();

    }
}
bool MainWindow::nonVidePraAbandonner()//true si un des champs et rempli
{
    return (ui->lineEditAdresseP->text().length()+ui->lineEditCodeP->text().length()+ui->lineEditCoeffP->text().length()+ui->lineEditCPP->text().length()+ui->lineEditNomP->text().length()+ui->lineEditPrenomP->text().length()+ui->lineEditVilleP->text().length()>0 or ui->comboBoxTypePra->currentIndex()!=0);
}
bool MainWindow::nonVidePra()//true si tout les champs sont remplis
{
    return (ui->lineEditAdresseP->text().length()*ui->lineEditCodeP->text().length()*ui->lineEditCoeffP->text().length()*ui->lineEditCPP->text().length()*ui->lineEditNomP->text().length()*ui->lineEditPrenomP->text().length()*ui->lineEditVilleP->text().length()>0 and ui->comboBoxTypePra->currentIndex()!=0);
}
bool MainWindow::isDifferentPra()// true si on a modifié , false sinon
{

    return (codePra!=ui->lineEditCodeP->text() or nomPra!=ui->lineEditNomP->text() or prenomPra!=ui->lineEditPrenomP->text() or adressePra!=ui->lineEditAdresseP->text() or cpPra!=ui->lineEditCPP->text() or villePra!=ui->lineEditVilleP->text() or coeffPra!=ui->lineEditCoeffP->text() or typePra!=ui->comboBoxTypePra->currentText());
}
void MainWindow::gererBuutonPra()// gere l activation des bouttons
{
    if(nonVidePra() and isDifferentPra())// si mofdif + tou rempli
    {
        if(codePra==ui->lineEditCodeP->text())// si clé primaire pas changée
        {
         ui->pushButtonModifierPra->setEnabled(true);//on peut modifier
          ui->pushButtonAjouterPra->setEnabled(false);// on peut pas ajouter
        }
        else
        {
             ui->pushButtonAjouterPra->setEnabled(true);//on peut pas modifier
             ui->pushButtonModifierPra->setEnabled(false);// on peut ajouter
        }


    }
    else // sinon on grise tout
    {
        ui->pushButtonAjouterPra->setEnabled(false);
        ui->pushButtonModifierPra->setEnabled(false);

    }

    if(nonVidePraAbandonner())//si au moins un champ est rempli on peut abandonner
    {

        ui->pushButtonAbandonnerpra->setEnabled(true);
    }
    else
    {

        ui->pushButtonAbandonnerpra->setEnabled(false);
    }
}



void MainWindow::on_lineEditCodeP_cursorPositionChanged(int , int )// si on modifie un champs on gere les bouttons
{
    gererBuutonPra();
}

void MainWindow::on_lineEditNomP_cursorPositionChanged(int , int )// si on modifie un champs on gere les bouttons
{
    gererBuutonPra();
}

void MainWindow::on_lineEditPrenomP_cursorPositionChanged(int , int )// si on modifie un champs on gere les bouttons
{
    gererBuutonPra();
}

void MainWindow::on_lineEditAdresseP_cursorPositionChanged(int , int )// si on modifie un champs on gere les bouttons
{
    gererBuutonPra();
}

void MainWindow::on_lineEditCPP_cursorPositionChanged(int , int )// si on modifie un champs on gere les bouttons
{
    gererBuutonPra();
}

void MainWindow::on_lineEditVilleP_cursorPositionChanged(int , int )// si on modifie un champs on gere les bouttons
{
    gererBuutonPra();
}

void MainWindow::on_lineEditCoeffP_cursorPositionChanged(int , int )// si on modifie un champs on gere les bouttons
{
    gererBuutonPra();
}

void MainWindow::on_comboBoxTypePra_currentIndexChanged(int index)// si on modifie un champs on gere les bouttons
{
    gererBuutonPra();
}
void MainWindow::on_pushButtonAbandonnerpra_clicked()//quand on abandonne
{

    chargerPraticiens();
}

void MainWindow::on_pushButtonModifierPra_clicked()//quand on modifie
{
;
    QSqlQuery req("update praticien set PRA_CODE="+ui->lineEditCodeP->text()+" ,PRA_NOM='"+ui->lineEditNomP->text()+"' ,PRA_PRENOM='"+ui->lineEditPrenomP->text()+"' ,PRA_ADRESSE='"+ui->lineEditAdresseP->text()+"' ,PRA_CP='"+ui->lineEditCPP->text()+"' ,PRA_VILLE='"+ui->lineEditVilleP->text()+"' ,PRA_COEFNOTORIETE="+ui->lineEditCoeffP->text()+" ,TYP_CODE='"+vectorTypePra.value(ui->comboBoxTypePra->currentIndex())+"'  where PRA_CODE="+QString::number(vectorPraticien.value(ui->listWidgetpraticient->currentRow())));
    chargerPraticiens();
}

void MainWindow::on_pushButtonAjouterPra_clicked()//quand on ajoute
{
    QSqlQuery req2("select max(PRA_CODE) from praticien");
    req2.first();
    int pracode=req2.value(0).toInt()+1;
    QSqlQuery req("insert into praticien values("+QString::number(pracode)+" ,'"+ui->lineEditNomP->text()+"' , '"+ui->lineEditPrenomP->text()+"' , '"+ui->lineEditAdresseP->text()+"' , '"+ui->lineEditCPP->text()+"' , '"+ui->lineEditVilleP->text()+"' , "+ui->lineEditCoeffP->text()+", '"+vectorTypePra.value(ui->comboBoxTypePra->currentIndex())+"' )");
    chargerPraticiens();
}

void MainWindow::on_pushButtonSupprimerPra_clicked()// quand on supprime
{
    qDebug()<<"delete from praticien where PRA_CODE="+QString::number(vectorPraticien.value(ui->listWidgetpraticient->currentRow()));
    QSqlQuery req("delete from praticien where PRA_CODE="+QString::number(vectorPraticien.value(ui->listWidgetpraticient->currentRow())));
    chargerPraticiens();
}
// *********************************************FIN DE L ONGLET PRATICIEN **********************************************
// ********************************************* DEBUT DE L ONGLET VISITEUR ********************************************
void MainWindow::chargerVisteur()//charge l onglet visiteur
{

    ui->lineEditAdresseVisiteur->clear();// clear et initialise
    ui->lineEditCPVisiteur->clear();
    ui->lineEditMatricule->clear();
    ui->comboBoxLaboVisiteur->clear();
    ui->comboBoxSecteurVisiteur->clear();
    ui->lineEditNomVisiteur->clear();
    ui->lineEditPrenomVisiteur->clear();
    ui->lineEditVilleVisiteur->clear();
     QDate maDate(2000,01,01);// met la date au jour voulue
    ui->dateEditVisteur->setDate(maDate);
    charcherListWidgetVis();//charge la liste widget avec les visiteurs
      chargerLaboVis();// charge combo box labo
      chargerSEcteurVis();// ""       secteur
      chargerDepVis();// ""  departement
      //chargerRegionVis();
      chargerTypeVis();// '' type vis

}
void MainWindow::charcherListWidgetVis()// charge les viiteurs dans la liste widgets
{
    ui->listWidgetVisteur->clear();
    vectorVisiteur.clear();

    QSqlQuery req("select distinct VIS_NOM,VIS_PRENOM,SEC_CODE,LAB_CODE,VIS_MATRICULE  from visiteur natural join labo natural join secteur natural join travailler where VIS_NOM like '"+ui->lineEditRechercheNomVisteur->text()+"%' and VIS_PRENOM like '"+ui->lineEditRecherchePrenomVisiteur->text()+"%'  order by VIS_NOM,VIS_PRENOM");
    int i=0;
    while(req.next())
    {
        QListWidgetItem *item=new QListWidgetItem(req.value(0).toString()+" "+req.value(1).toString());
        QLinearGradient linGrad;
        linGrad.setStart(0,ui->listWidgetVisteur->y());
        linGrad.setFinalStop(ui->listWidgetVisteur->width(),ui->listWidgetVisteur->y());
        if(i%2==0)
        {
            linGrad.setColorAt( 0, QColor(191,230,244));
            linGrad.setColorAt( 1, Qt::white );


          }
        else
        {       

              linGrad.setColorAt( 0, QColor(157,214,237));
               linGrad.setColorAt( 1, Qt::white );
        }
          i++;

            QBrush brush(linGrad);

        item->setBackground(brush);


        ui->listWidgetVisteur->addItem(item);
        vectorVisiteur.push_back(req.value(4).toString());
    }
    ui->pushButtonAjouterVisteur->setEnabled(false);
    ui->pushButtonAbandonnerVisteur->setEnabled(false);
    ui->pushButtonSupprimerVisiteur->setEnabled(false);
    ui->pushButtonModifierVisiteur->setEnabled(false);
}
void MainWindow::chargerSEcteurVis()//chage les secteurs
{
  ui->comboBoxSecteurVisiteur->clear();
  this->vectorSecteurVis.clear();

  ui->comboBoxSecteurVisiteur->addItem("Choisir un secteur...");
  this->vectorSecteurVis.push_back("null");

  QSqlQuery res("select * from secteur");
 while(res.next())
      {
      ui->comboBoxSecteurVisiteur->addItem(res.value(1).toString());
      this->vectorSecteurVis.push_back(res.value(0).toString());
       }
}
void MainWindow::chargerLaboVis()// charge les labos
{
  ui->comboBoxLaboVisiteur->clear();
  this->vectorLaboVis.clear();

  ui->comboBoxLaboVisiteur->addItem("Choisir un laboratoire...");
  this->vectorLaboVis.push_back("null");

  QSqlQuery res("select * from labo");
 while(res.next())
      {
      ui->comboBoxLaboVisiteur->addItem(res.value(1).toString());
      this->vectorLaboVis.push_back(res.value(0).toString());
       }
}
void MainWindow::chargerDepVis()//charge les departement
{
  ui->comboBoxDeptVIs->clear();
  this->vectorDEpVis.clear();

  ui->comboBoxDeptVIs->addItem("Choisir un departement...");
  this->vectorDEpVis.push_back("null");

  QSqlQuery res("select * from departement order by DEP_NOM");
 while(res.next())
      {
      ui->comboBoxDeptVIs->addItem(res.value(1).toString());
      this->vectorDEpVis.push_back(res.value(0).toString());
       }
}
/*
void MainWindow::chargerRegionVis()
{
  ui->comboBoxREgionVis->clear();
  this->vectorRegVis.clear();

  ui->comboBoxREgionVis->addItem("Choisir une region...");
  this->vectorRegVis.push_back("null");

  QSqlQuery res("select * from region");
 while(res.next())
      {
      ui->comboBoxREgionVis->addItem(res.value(2).toString());
      this->vectorRegVis.push_back(res.value(0).toString());
       }
}*/
void MainWindow::chargerTypeVis()// charge les types de visiteurs
{
  ui->comboBoxTypeVisiteur->clear();
  this->vectorTypeVis.clear();

  ui->comboBoxTypeVisiteur->addItem("Choisir une type...");
  this->vectorTypeVis.push_back("null");

  QSqlQuery res("select distinct TRA_ROLE from travailler order by TRA_ROLE;");
 while(res.next())
      {
      ui->comboBoxTypeVisiteur->addItem(res.value(0).toString());
      this->vectorTypeVis.push_back(res.value(0).toString());
       }
}
void MainWindow::on_lineEditRechercheNomVisteur_cursorPositionChanged(int arg1, int arg2)//si on fait une recherche
{
    charcherListWidgetVis();
    gererBuutonVis();
}

void MainWindow::on_lineEditRecherchePrenomVisiteur_cursorPositionChanged(int arg1, int arg2)//si on fait une recherche
{
    charcherListWidgetVis();
    gererBuutonVis();
}


void MainWindow::on_listWidgetVisteur_clicked(const QModelIndex &index)// si on clique sur un visiteur
{

    qDebug()<<"select distinct * from visiteur natural join labo natural join secteur natural join travailler where VIS_MATRICULE='"+vectorVisiteur.value(ui->listWidgetVisteur->currentRow())+"'";
    QSqlQuery req("select distinct * from visiteur natural join labo natural join secteur natural join travailler where VIS_MATRICULE='"+vectorVisiteur.value(ui->listWidgetVisteur->currentRow())+"'");
    if(req.first())
    {
      ui->lineEditMatricule->setText(req.value(0).toString());matricule=req.value(0).toString();//affiche les elements du visiteur et enregistre les "parametres" pour les comperer ensuite

    ui->lineEditNomVisiteur->setText(req.value(3).toString());nomVis=req.value(3).toString();
    ui->lineEditPrenomVisiteur->setText(req.value(4).toString());prenomVis=req.value(4).toString();
    ui->lineEditAdresseVisiteur->setText(req.value(5).toString());adresseVis=req.value(5).toString();
    ui->lineEditCPVisiteur->setText(req.value(6).toString());cpVis=req.value(6).toString();
    ui->lineEditVilleVisiteur->setText(req.value(7).toString());villeVis=req.value(7).toString();
    ui->dateEditVisteur->setDate(req.value(8).toDate());dateVis=req.value(8).toDate();

    ui->comboBoxSecteurVisiteur->setCurrentIndex(this->vectorSecteurVis.lastIndexOf(req.value(1).toString()));secteurVis=req.value(1).toString();
    ui->comboBoxLaboVisiteur->setCurrentIndex(this->vectorLaboVis.lastIndexOf(req.value(2).toString()));laboVis=req.value(2).toString();

    qDebug()<<req.value(11);
    ui->comboBoxDeptVIs->setCurrentIndex(this->vectorDEpVis.lastIndexOf(req.value(9).toString()));DepVis=req.value(9).toString();
    //ui->comboBoxREgionVis->setCurrentIndex(this->vectorRegVis.lastIndexOf(req.value(1).toString()));RegVis=req.value(1).toString();
     ui->comboBoxTypeVisiteur->setCurrentIndex(this->vectorTypeVis.lastIndexOf(req.value(15).toString()));TypeVis=req.value(15).toString();

       gererBuutonVis();// lance la methode pour l initialiser(bug sinon)


    ui->pushButtonAbandonnerVisteur->setEnabled(true);//grise les bouttons car pas de modif apres clic sur un visiteur
    ui->pushButtonSupprimerVisiteur->setEnabled(true);


    }
}
bool MainWindow::nonVideVisAbandonner()//true si un champs est rempli false sinon
{
    QDate maDate(2000,01,01);
    return (ui->lineEditAdresseVisiteur->text().length()+ui->lineEditMatricule->text().length()+ui->lineEditNomVisiteur->text().length()+ui->lineEditPrenomVisiteur->text().length()+ui->lineEditVilleVisiteur->text().length()+ui->lineEditCPVisiteur->text().length()>0 or ui->comboBoxLaboVisiteur->currentIndex()!=0 or ui->comboBoxSecteurVisiteur->currentIndex()!=0 or ui->dateEditVisteur->date()!=maDate or ui->comboBoxDeptVIs->currentIndex()!=0 or ui->comboBoxTypeVisiteur->currentIndex()!=0);
}
bool MainWindow::nonVideVis()// true si tout les champs sont remplis , false sinon
{

    QDate maDate(2000,01,01);
    return (ui->lineEditAdresseVisiteur->text().length()*ui->lineEditMatricule->text().length()*ui->lineEditNomVisiteur->text().length()*ui->lineEditPrenomVisiteur->text().length()*ui->lineEditVilleVisiteur->text().length()*ui->lineEditCPVisiteur->text().length()>0 and ui->comboBoxLaboVisiteur->currentIndex()!=0 and ui->comboBoxSecteurVisiteur->currentIndex()!=0 and ui->dateEditVisteur->date()!=maDate and ui->comboBoxDeptVIs->currentIndex()!=0 or ui->comboBoxTypeVisiteur->currentIndex()!=0 );
}
bool MainWindow::isDifferentVis()// true si on a modifié qqchose , false sinon
{

    return (matricule!=ui->lineEditMatricule->text() or nomVis!=ui->lineEditNomVisiteur->text() or prenomVis!=ui->lineEditPrenomVisiteur->text() or adresseVis!=ui->lineEditAdresseVisiteur->text() or cpVis!=ui->lineEditCPVisiteur->text() or villeVis!=ui->lineEditVilleVisiteur->text() or dateVis!=ui->dateEditVisteur->date() or secteurVis!=vectorSecteurVis.value(ui->comboBoxSecteurVisiteur->currentIndex()) or laboVis!=vectorLaboVis.value(ui->comboBoxLaboVisiteur->currentIndex()) or DepVis!=vectorDEpVis.value(ui->comboBoxDeptVIs->currentIndex()) or TypeVis!=vectorTypeVis.value(ui->comboBoxTypeVisiteur->currentIndex()) );
}
void MainWindow::gererBuutonVis()//gere les bouttons ajouter , modifier et abandonner
{
    if(nonVideVis() and isDifferentVis())// si changement + tout est rempli
    {

        if(matricule==ui->lineEditMatricule->text())// se clé primaire reste la même
        {
         ui->pushButtonModifierVisiteur->setEnabled(true);// on peur modifier
          ui->pushButtonAjouterVisteur->setEnabled(false);//on peut pas ajouter
        }
        else // si clé primaire different
        {
             ui->pushButtonAjouterVisteur->setEnabled(true);// ajout ok
             ui->pushButtonModifierVisiteur->setEnabled(false);// mofdif pas ok
        }
    }
    else//sinon
    {
        ui->pushButtonAjouterVisteur->setEnabled(false);
        ui->pushButtonModifierVisiteur->setEnabled(false);

    }

    if(nonVideVisAbandonner())//si un des champs est remplis
    {

        ui->pushButtonAbandonnerVisteur->setEnabled(true);//on peut abandonner
    }
    else
    {

        ui->pushButtonAbandonnerVisteur->setEnabled(false);
    }
}

void MainWindow::on_lineEditMatricule_cursorPositionChanged(int arg1, int arg2)//un champs est modifié , on gere les bouttons
{
    gererBuutonVis();
}

void MainWindow::on_lineEditNomVisiteur_cursorPositionChanged(int arg1, int arg2)//un champs est modifié , on gere les bouttons
{
    gererBuutonVis();
}

void MainWindow::on_lineEditPrenomVisiteur_cursorPositionChanged(int arg1, int arg2)//un champs est modifié , on gere les bouttons
{
    gererBuutonVis();
}

void MainWindow::on_lineEditAdresseVisiteur_cursorPositionChanged(int arg1, int arg2)//un champs est modifié , on gere les bouttons
{
    gererBuutonVis();
}

void MainWindow::on_lineEditCPVisiteur_cursorPositionChanged(int arg1, int arg2)//un champs est modifié , on gere les bouttons
{
    gererBuutonVis();
}

void MainWindow::on_lineEditVilleVisiteur_cursorPositionChanged(int arg1, int arg2)//un champs est modifié , on gere les bouttons
{
    gererBuutonVis();
}

void MainWindow::on_dateEditVisteur_editingFinished()//un champs est modifié , on gere les bouttons
{
    gererBuutonVis();
}

void MainWindow::on_comboBoxSecteurVisiteur_currentIndexChanged(int index)//un champs est modifié , on gere les bouttons
{
    gererBuutonVis();
}

void MainWindow::on_comboBoxLaboVisiteur_currentIndexChanged(int index)//un champs est modifié , on gere les bouttons
{
    gererBuutonVis();
}
void MainWindow::on_comboBoxDeptVIs_currentIndexChanged(int index)//un champs est modifié , on gere les bouttons
{
     gererBuutonVis();
}


void MainWindow::on_comboBoxTypeVisiteur_currentIndexChanged(int index)//un champs est modifié , on gere les bouttons
{
     gererBuutonVis();
}
void MainWindow::on_pushButtonModifierVisiteur_clicked()//quand on modifie
{
    QVariant maDate=ui->dateEditVisteur->date();// pour palier au pb de covertion de date
    //modif dans la table travailler
    QSqlQuery req2("update travailler set VIS_MATRICULE='"+ui->lineEditMatricule->text()+"' ,JJMMAA='"+maDate.toString()+"' , TRA_ROLE='"+ui->comboBoxTypeVisiteur->currentText()+"' where VIS_MATRICULE='"+vectorVisiteur.value(ui->listWidgetVisteur->currentRow())+"'");

    //modif dans la table visiteur
    QSqlQuery req("update visiteur set  VIS_MATRICULE='"+ui->lineEditMatricule->text()+"' ,  VIS_NOM='"+ui->lineEditNomVisiteur->text()+"' ,VIS_PRENOM='"+ui->lineEditPrenomVisiteur->text()+"' ,VIS_ADRESSE='"+ui->lineEditAdresseVisiteur->text()+"' , VIS_CP='"+ui->lineEditCPVisiteur->text()+"' ,VIS_VILLE='"+ui->lineEditVilleVisiteur->text()+"' , VIS_DATEEMBAUCHE='"+maDate.toString()+"' ,SEC_CODE='"+vectorSecteurVis.value(ui->comboBoxSecteurVisiteur->currentIndex())+"' ,LAB_CODE='"+vectorLaboVis.value(ui->comboBoxLaboVisiteur->currentIndex())+"', DEP_CODE='"+vectorDEpVis.value(ui->comboBoxDeptVIs->currentIndex())+"'  where VIS_MATRICULE='"+vectorVisiteur.value(ui->listWidgetVisteur->currentRow())+"'");
    chargerVisteur();

}

void MainWindow::on_pushButtonAjouterVisteur_clicked()//quand on ajoute
{
    QVariant maDate=ui->dateEditVisteur->date();
    // ajout dans la table visiteur
    QSqlQuery req("insert into visiteur values('"+ui->lineEditMatricule->text()+"' , '"+ui->lineEditNomVisiteur->text()+"' ,'"+ui->lineEditPrenomVisiteur->text()+"' ,'"+ui->lineEditAdresseVisiteur->text()+"' ,'"+ui->lineEditCPVisiteur->text()+"' ,'"+ui->lineEditVilleVisiteur->text()+"' ,'"+maDate.toString()+"' ,'"+vectorSecteurVis.value(ui->comboBoxSecteurVisiteur->currentIndex())+"' ,'"+vectorLaboVis.value(ui->comboBoxLaboVisiteur->currentIndex())+"','"+vectorDEpVis.value(ui->comboBoxDeptVIs->currentIndex())+"' )");
    // ajout dans la table travailler
    QSqlQuery req2("insert into travailler values('"+ui->lineEditMatricule->text()+"' , '"+maDate.toString()+"' , 'null' , '"+ui->comboBoxTypeVisiteur->currentText()+"')");
    chargerVisteur();
}



void MainWindow::on_pushButtonSupprimerVisiteur_clicked()//quand on supprime
{
    //supprime de la table travailler
    QSqlQuery req("delete from travailler where VIS_MATRICULE='"+ui->lineEditMatricule->text()+"'");
    //supprimer dans la table visiteur
    QSqlQuery req2("delete from visiteur where VIS_MATRICULE='"+ui->lineEditMatricule->text()+"'");
    chargerVisteur();

}

void MainWindow::on_pushButtonAbandonnerVisteur_clicked()//quand on abandonne
{
    chargerVisteur();//on recharge l onglet
}
// **************************** FIN ONGLET VISITEUR *******************************************************


