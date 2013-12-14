#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>
#include <QVector>
#include <QModelIndex>
#include <QDate>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT
public:
    MainWindow(QWidget *parent,QString);
    ~MainWindow();
    // les vecteurs pour enregistrer les "id"
    QVector <QString> vectorMedoc;
    QVector <QString> vectorFamille;
    QVector <int> vectorPraticien;
    QVector <QString> vectorTypePra;
    QVector <QString> vectorVisiteur;
    QVector <QString> vectorSecteurVis;
    QVector <QString> vectorLaboVis;
    QVector <QString> vectorDEpVis;
    //QVector <QString> vectorRegVis;
    QVector <QString> vectorTypeVis;
    // methode de verifications de champs (vide et different)
    // medicament
    bool nonVideMedocs();
    bool nonVideMedocsAbandonner();
    bool isDifferentMedocs();
    void gererBuutonMedocs();
     // praticien
    bool nonVidePra();
    bool nonVidePraAbandonner();
    bool isDifferentPra();
    void gererBuutonPra();
    // visiteur

    bool nonVideVis();
    bool nonVideVisAbandonner();
    bool isDifferentVis();
    void gererBuutonVis();

    //variables servant la la comparaison (pour gerer les bouttons)
    // medicament
    QString depot;
    QString nomMedoc;
    QString compo;
    QString effets;
    QString contre;
    QString prix;
    QString famille;
    // praticien
    QString codePra;
    QString nomPra;
    QString prenomPra;
    QString adressePra;
    QString cpPra;
    QString villePra;
    QString typePra;
    QString coeffPra;
    // visiteur

    QString matricule;
    QString nomVis;
    QString prenomVis;
    QString adresseVis;
    QString cpVis;
    QString villeVis;
    QString secteurVis;
     QString laboVis;
    //QString RegVis;
    QString DepVis;
    QString TypeVis;
    QDate dateVis;


protected:
    void changeEvent(QEvent *e);

private slots: // les slots
    void on_pushButtonSupprimerPra_clicked();
    void on_pushButtonAjouterPra_clicked();
    void on_pushButtonModifierPra_clicked();
    void on_comboBoxTypePra_currentIndexChanged(int index);
    void on_lineEditCoeffP_cursorPositionChanged(int , int );
    void on_lineEditVilleP_cursorPositionChanged(int , int );
    void on_lineEditCPP_cursorPositionChanged(int , int );
    void on_lineEditAdresseP_cursorPositionChanged(int , int );
    void on_lineEditPrenomP_cursorPositionChanged(int , int );
    void on_lineEditNomP_cursorPositionChanged(int , int );
    void on_lineEditCodeP_cursorPositionChanged(int , int );
    void on_pushButtonAbandonnerpra_clicked();
    void on_listWidgetpraticient_clicked(QModelIndex index);
    void on_lineEditRecherchePrenomPra_cursorPositionChanged(int , int );
    void on_lineEditRechercheNomPra_cursorPositionChanged(int , int );
    void on_pushButtonSupprimer_clicked();
    void on_pushButtonAJouterMedoc_clicked();
    void on_pushButtonModifier_clicked();
    void on_tabWidget_currentChanged(int index);


     void on_listWidgetMedocs_clicked(const QModelIndex &index);
    void on_lineEditMedoc_cursorPositionChanged(int arg1, int arg2);




    void on_pushButtonAbbandonnerMedocs_clicked();

    void on_lineEditDepot_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditNomComm_cursorPositionChanged(int arg1, int arg2);

    void on_textEditCompo_cursorPositionChanged();

    void on_lineEditPrixMedoc_cursorPositionChanged(int arg1, int arg2);

    void on_textEditContreIndic_cursorPositionChanged();

    void on_textEditEffets_cursorPositionChanged();

    void on_comboBoxFamille_currentIndexChanged(int index);

    void on_lineEditRechercheNomVisteur_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditRecherchePrenomVisiteur_cursorPositionChanged(int arg1, int arg2);



    void on_listWidgetVisteur_clicked(const QModelIndex &index);

    void on_lineEditMatricule_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditNomVisiteur_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditPrenomVisiteur_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditAdresseVisiteur_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditCPVisiteur_cursorPositionChanged(int arg1, int arg2);

    void on_lineEditVilleVisiteur_cursorPositionChanged(int arg1, int arg2);

    void on_dateEditVisteur_editingFinished();

    void on_comboBoxSecteurVisiteur_currentIndexChanged(int index);

    void on_comboBoxLaboVisiteur_currentIndexChanged(int index);

    void on_pushButtonModifierVisiteur_clicked();

    void on_pushButtonAjouterVisteur_clicked();

    void on_comboBoxDeptVIs_currentIndexChanged(int index);

    void on_comboBoxTypeVisiteur_currentIndexChanged(int index);

    void on_pushButtonSupprimerVisiteur_clicked();

    void on_pushButtonAbandonnerVisteur_clicked();

    void on_comboBoxREchercheTypePra_currentIndexChanged(int index);

    void on_comboBoxRechercheFamille_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
    // methodes de chargement des onglets , list widgets et combo box
    //medicament
    void chargerMedocs();
    void chargerListWidgetMedoc();
    void getInfoUser(QString);
    void chargerListeFamille();
    void chargerRechercheListeFamille();
    // praticien
    void chargerPraticiens();
    void charcherListWidgetPra();
    void chargerTypePra();
    void chargerRechercheTypePra();
    // visiteur
      void chargerVisteur();
    void charcherListWidgetVis();
    void chargerSEcteurVis();
    void chargerLaboVis();
    void chargerDepVis();
    //void chargerRegionVis();
    void chargerTypeVis();

};

#endif // MAINWINDOW_H
