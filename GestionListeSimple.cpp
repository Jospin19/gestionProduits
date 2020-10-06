#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>
#include "GestionListeSimple.h"
#include "GestionTableau.h"
#include "Graphisme.h"

using namespace std;

//Déclaration de la fonction qui va permettre dafficher un message d'erreur lorsque la création d'un TLS_Produit n'aura pas reussi
void afficheErreurAllocationMemoire()
{
    saisieXY("[ERREUR DE D'ALLOCATION MEMOIRE: La creation d une variable de type TLS_Produit a echoue.!]", 40, 39, 4);
    resteMenuSimple();
}


//Déclaration de la fonction qui va permettre dafficher un message d'erreur lorsque la pile sera vide
void afficheErreurPileVide()
{
    saisieXY("[ERREUR : La pile est vide.Veuillez saisir des produits ou la remplir .!]", 45, 39, 4);
    resteMenuSimple();
}

//Déclaration de la fonction qui va afficher une erreur si la sauvegarde des produits ne peut être effectue
void afficheErreurSauvegardeTLS()
{
    saisieXY("[ERREUR DE SAUVEGARDE: Le tableau des produits ne contient aucun element. veuillez le charger!]", 40, 39, 4);
    resteMenuSimple();
}


//Déclaration de la fonction qui va afficher une erreur si le tri n'est pas possible dans la gestion par liste simplement chainé
void afficheErreurTriTLS()
{
    saisieXY("[ERREUR DE TRI: La pile de produits ne contient aucun element. veuillez le charger!]", 40, 39, 4);
    resteMenuSimple();
}


//Déclaration de la fonction qui va permettre d'affecter un prduit à un TLS_Produits
void affectationPrdtTLS_Prdt(TProduit prdt, TLS_Produit *&elmtListe)
{
    elmtListe->An_Fabric = prdt.An_Fabric;
    strcpy(elmtListe->Code, prdt.Code);
    elmtListe->Heure_Fabric = prdt.Heure_Fabric;
    elmtListe->Jour_Fabric = prdt.Jour_Fabric;
    elmtListe->Mois_Fabric = prdt.Mois_Fabric;
    strcpy(elmtListe->Nom, prdt.Nom);
    strcpy(elmtListe->Pays_Origine, prdt.Pays_Origine);
    elmtListe->Poids = prdt.Poids;
}

//Déclaration de la fonction qui va permettre d'affecter un prduit à un TLS_Produits
void affectationTLSPrdt(TLS_Produit elmtListe,  TProduit &prdt)
{
     elmtListe.suivant = NULL;
     prdt.An_Fabric = elmtListe.An_Fabric;
     strcpy(prdt.Code, elmtListe.Code);
     prdt.Heure_Fabric = elmtListe.Heure_Fabric;
     prdt.Jour_Fabric = elmtListe.Jour_Fabric;
     prdt.Mois_Fabric = elmtListe.Mois_Fabric;
     strcpy(prdt.Nom, elmtListe.Nom);
     strcpy(prdt.Pays_Origine, elmtListe.Pays_Origine);
     prdt.Poids = elmtListe.Poids;
}


//Déclaration de la fonction qui va permettre d'affecter un élément de la pile à un type TLS_Produits
//Cette fonction affecte à un type TLS_Produit les éléments contenus dans une pointerur de type TLS_Produit(Pile)
void affectationPteurTLS(TLS_Produit* elementPile,  TLS_Produit &prdt)
{
     prdt.suivant = elementPile->suivant;
     prdt.An_Fabric = elementPile->An_Fabric;
     strcpy(prdt.Code, elementPile->Code);
     prdt.Heure_Fabric = elementPile->Heure_Fabric;
     prdt.Jour_Fabric = elementPile->Jour_Fabric;
     prdt.Mois_Fabric = elementPile->Mois_Fabric;
     strcpy(prdt.Nom, elementPile->Nom);
     strcpy(prdt.Pays_Origine, elementPile->Pays_Origine);
     prdt.Poids = elementPile->Poids;
}


//Déclaration de la fonction qui va creer une pile vide
TLS_Produit* creerPileVide()
{
    return NULL;
}


//Déclaration de la fonction qui va tester si une pile est vide
bool testPileVide(TLS_Produit* Pile)
{
    if(Pile == NULL)
        return true;
    else
        return false;
}



//Déclaration de la fonction qui va ajouter un élément à la pile(empiler)
TLS_Produit* ajouterElmtPile(TLS_Produit* Pile, TProduit elmtAAjouter)
{
    TLS_Produit *nouvelElmt = new TLS_Produit; //Déclaration de la variable intermédiaire de type Type TLS_Produit qui va recevoir le nouveau produit
    if (nouvelElmt == NULL) //Test si le nouveau produit contiend des informations
        afficheErreurAllocationMemoire();
    affectationPrdtTLS_Prdt(elmtAAjouter, nouvelElmt); //La variable intermédiaire(nouvelElmt) recoit le produit passé en paramètre
    nouvelElmt->suivant = Pile; //Le nouvel élément crée est placé en tête de pile(On à fait pointé touts la Pile préexistante au n ouvel élément)
    return nouvelElmt; //on retourne la nouvelle pile avec le nnouvel élément en tpete de pile
}


//Déclaration de la fonction qui contiend l'opération de suppression d'un élément à la pile(Dépiler)
TLS_Produit* OperationSuppressionTLS(TLS_Produit* Pile)
{
    TLS_Produit *nouvellePile = new TLS_Produit; //Création de la nouvelle pile
    if (nouvellePile == NULL)
        afficheErreurAllocationMemoire();
    nouvellePile = Pile->suivant; //On fait pointer la nouvelle Pile directement vers l'élément situé en 2ème position de la Pile préexistante
    free(Pile); // ON libère l'ancienne Pile
    return nouvellePile;// ON retourne la nouvelle Pile
}

//Déclaration de la fonction qui gère la suppression d'un élément de type TLS_Produit
void gestionSuppressionTLS(TLS_Produit* &Pile)
{
    bool continuer = true;
    while(continuer)
    {
        transitionMenus();
        Pile = OperationSuppressionTLS(Pile);
        progressionChargement("Suppression d'un produit en cour...");
        messageFiniTLS("[Suppression effectuee avec succes!!!]");
        continuer = vouloirContinuer();
    }
    retourGestionMenuSimple();
}


//Déclaration de la fonction qui va permettre de demander à l'utilisateur si il veut continuer
bool vouloirContinuer()
{
    bool continuer;
    char choix;
    saisieXY("VOULEZ-VOUS CONTINUER [O/N] ?", 76, 34);
    gotoxy(107, 34);
    coloration(10);
    cin >> choix;
    switch(choix)
    {
    case 'o' : case 'O':
        continuer = true;
        break;
    case 'n' : case 'N':
        continuer = false;
        break;
    default :
        vouloirContinuer();
        break;
    }
    return continuer;
}

//Déclaration de la fonction qui va gérer la récupération des informations d'une liste de produits
void gestionRecuperationTLS_prdt(TLS_Produit* &Pile)
{
    bool continuer = true;
    transitionMenus();
    TProduit prdt;
    int i = 0;
    while(continuer)
    {
        saisieXY("3-  Saisie des produits", 70, 6, 9);
        saisieXY("PRODUIT    :", 33, 15, 13);
        saisieXY(i + 1, 41, 15, 13);
        strcpy(prdt.Nom, recupereNomPdrt());
        strcpy(prdt.Code, recupereCodePdrt());
        strcpy(prdt.Pays_Origine, recuperePaysPdrt());
        prdt.Poids = recuperePoidsPdrt();
        prdt.An_Fabric = recupereAnPdrt();
        prdt.Mois_Fabric = recupereMoisPdrt();
        prdt.Jour_Fabric = recupereJourPdrt();
        prdt.Heure_Fabric = recupereHeurePdrt();
        Pile = ajouterElmtPile(Pile, prdt);
        i++;
        continuer = vouloirContinuer();
        transitionMenus();
    }
    retourGestionMenuSimple();
}


//Déclaration de la fonction qui va permettre d'afficher une pile
void afficherTLS_Produit(TLS_Produit* Pile)
{
    int i = 0;
    if(testPileVide(Pile))
        afficheErreurPileVide();
    tracerCadreDynamique();
    saisieXY("*** Affichage de la liste des produits [par l’index] ***",59, 10,  9);
    saisieXY("[             NOM              ]  [    PAYS      ] -- [JJ/MM/AAAA  a HH (h)] -- [Poids(Kg)] -- [    CODE      ]", 31, 14, 10);
    while(!testPileVide(Pile))
    {
        saisieXY(i + 1, 26, 16 + i, 3);
        saisieXY(". [                              ]  [              ] -- [  /  /      a    (h)] -- [     (Kg)] -- [              ]", 29, 16 + i, 3);
        saisieXY(Pile->Nom, 42, 16 + i, 3);
        saisieXY(Pile->Pays_Origine, 68, 16 + i, 3);
        saisieXY(Pile->Jour_Fabric, 86, 16 + i, 3);
        saisieXY(Pile->Mois_Fabric, 89, 16 + i, 3);
        saisieXY(Pile->An_Fabric, 92, 16 + i, 3);
        saisieXY(Pile->Heure_Fabric, 100, 16 + i, 3);
        saisieXY(Pile->Poids, 114, 16 + i, 3);
        saisieXY(Pile->Code, 131, 16 + i, 3);
        cout << endl;
        Pile = Pile->suivant;
        i++;
    }
    apresAffichageRetourSimple();
}

//Déclaration de la fonction qui va gérer l'affichage des TLS_Produits
void afficheListeTLS_Prdt(TLS_Produit* Pile, bool Lu, bool restaure)
{
    if ( ( Lu == true) || (restaure == true) )
    {
        afficherTLS_Produit(Pile);
    }
    else
        afficheErreurPileVide();
}


//Déclaration de la fonction qui va récupérer le nom du fichier dans la gestion par liste simplement chainé
char * recupereFichierTLS()
{
    transitionMenus();
    char nomFichier[90];
    saisieXY("Veuillez entrer le nom du fichier :", 30, 20);
    positionneCurseur(68, 20, 10);
    cin >> nomFichier;
    strcat(nomFichier, ".TLS");
    return nomFichier;
}


//Déclaration de la fonction qui va écrire les produits dans le fichier dans la gestion par liste simplement chainé
void sauvegarderPrdtTLS(TLS_Produit * Pile, bool Lu, bool restaure)
{
    if ( ( Lu == true) || (restaure == true) )
    {
        transitionMenus();
        char nomFichier[90];
        strcpy(nomFichier, recupereFichierTLS());
        transitionMenus();
        ofstream fichier (nomFichier, ios::out|ios::binary|ios::app) ; // ouverture du fichier en en mode binaire (écriture et ajout en fin du fichier)
        if (!fichier)
        {
            saisieXY("[ERREUR : CREATION IMPOSSIBLE!]", 54, 39, 4);
        }
        else
        {
            while(!testPileVide(Pile))
            {
                char *pteur = reinterpret_cast <char *> (Pile);
                fichier.write(pteur, sizeof(TLS_Produit));
                Pile = Pile->suivant;
            }
        }
        fichier.close ();
        progressionChargement("Sauvegarde des produits en cour...");
        messageFiniTLS("[Sauvegarde effectuee avec succes!!!]");
    }
    else
        afficheErreurSauvegardeTLS();
}



//Déclaration de la fonction qui effectue le travail dans le fichier lors de la restauration d'un tableau de produits
void operationRestaurationTLS(TLS_Produit* &Pile, char nomFichier[90])
{
    int taille;
    transitionMenus();
    TLS_Produit elemtPile;
    TProduit intermediare;
    ifstream fichier (nomFichier, ios::in|ios::binary) ; // ouverture du fichier en en mode binaire (lecture du fichier)
    if (!fichier)
    {
        saisieXY("[ERREUR : ERREUR LORS DE L OUVERTURE DU FCIHIER.!]", 54, 39, 4);
        resteMenuSimple();
    }
    else
    {
        while(!fichier.eof())
        {
            fichier.read((char *)&elemtPile, sizeof(TLS_Produit));
            affectationTLSPrdt(elemtPile, intermediare);
            Pile = ajouterElmtPile(Pile, intermediare);
        }
        switch(taille = taillePile(Pile))
        {
        case 1: case 2:
            Pile->suivant = NULL;
            break;
        default:
            Pile->suivant = Pile->suivant->suivant;
            break;
        }
        progressionChargement("Restauration des produits en cour...");
    }
    fichier.close ();
}


//Déclaration de la fonction qui va afficher un message si la restauration est impossible
void afficheErreurRestaurationTLS()
{
    transitionMenus();
    saisieXY("[ERREUR LORS DE LA RESTAURATION DU FICHIER. LE FICHIER PEUT ETRE INEXISTANT", 63, 39, 4);
    resteMenuSimple();
}


//Déclaration de la fonction qui va lire les produits dans le fichier
void restaurerPrdtTLS(TLS_Produit* &Pile)
{
    char nomFichier[90];
    strcpy(nomFichier, recupereFichierTLS());
    operationRestaurationTLS(Pile, nomFichier);
    messageFiniTLS("[Restauration effectue avec succes!!!!!]");
}


//Déclaration de la fonction qui va revoyer le nombre d'élément de la pile(taille)
int taillePile(TLS_Produit* Pile)
{
    int i = 0;
    while(!testPileVide(Pile))
    {
        i++;
        Pile = Pile->suivant;
    }
    return i;
}


//Déclaration de la fonction qui va charger les éléments de la Pile dans un tableau
void chargerPileTableau(TLS_Produit * Pile, TProduit tab[])
{
    TLS_Produit intermediaire;
    int taille = taillePile(Pile);
    for (int i = 0; i < taille; i++)
    {
            affectationPteurTLS(Pile, intermediaire);
            affectationTLSPrdt(intermediaire, tab[i]);
            Pile = Pile->suivant;
    }
}

void TriProduitDateTLS(TLS_Produit * &Pile, bool Lu, bool restaure)
{
    if ( ( Lu == true) || (restaure == true) )
    {
        transitionMenus();
        int taille = taillePile(Pile);
        TProduit tab[taille];
        chargerPileTableau(Pile, tab);
        Pile = creerPileVide();
        triProduitJour(tab, taille);
        triProduitMois(tab, taille);
        triProduitAnnne(tab, taille);
        for (int i = taille - 1; i >= 0; i--)
            Pile = ajouterElmtPile(Pile, tab[i]);
        progressionChargement("Tri des produits en cour...");
        messageFiniTLS("Tri effectue avec succes!!!");
    }
    else
        afficheErreurTriTLS();
}

void TriAlphabetiqueTLS(TLS_Produit * &Pile, bool Lu, bool restaure)
{
    if ( ( Lu == true) || (restaure == true) )
    {
        transitionMenus();
        int taille = taillePile(Pile);
        TProduit tab[taille];
        chargerPileTableau(Pile, tab);
        Pile = creerPileVide();
        TriProduitPays(tab, taille, 0);
        TriProduitNom(tab, taille, 0);
        for (int i = taille - 1; i >= 0; i--)
            Pile = ajouterElmtPile(Pile, tab[i]);
        progressionChargement("Tri des produits en cour...");
        messageFiniTLS("Tri effectue avec succes!!!");
    }
    else
        afficheErreurTriTLS();
}
