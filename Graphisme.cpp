//Inclusion de la bibliothèque C, <windows.h> pour la gestion de la fenêtre
#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <limits>
#include "GestionTableau.h"
#include "GestionListeSimple.h"
#include "Graphisme.h"

using namespace std;

const int TMAX = 3; //Taille du tableau des produits

//Déclaration de la fonction qui permettra de se positionner sur la fenêtre Windows
void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    //cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

//Déclaration de la fonction qui manipulera la couleur dans les fenêtres
void coloration(int k)
{
    /*Appel du type HANDLE:
        C'est un pointeur (void *) opaque géré par Windows.
        Opaque car l'user ne sait pas sur quoi il pointe(seul Windows le sait car il le manipule
    **/
    HANDLE couleur;

    couleur=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(couleur,k);
}

//Déclaration de la donction qui permettra de se positionner sur un endroit precis du document de saisir un texte et de le colorer d'une certaine couleur
void saisieXY(std::string saisie, int x, int y, int color)
{
    coloration(color);
    gotoxy(x,y);
    cout << saisie;
}
//Surcharge de la fonction saisieXY
void saisieXY(char caractere, int x, int y, int color)
{
    coloration(color);
    gotoxy(x, y);
    cout << caractere;
}
//Surcharge de la fonction saisieXY
void saisieXY(int nombre, int x, int y, int color)
{
    coloration(color);
    gotoxy(x, y);
    cout << nombre;
}
//Surcharge de la fonction saisieXY
void saisieXY(unsigned int nombre, int x, int y, int color)
{
    coloration(color);
    gotoxy(x, y);
    cout << nombre;
}


//Déclaration de la fonction qui va permettre de se positionner sur l'écran pour les récupérations au clavier
void positionneCurseur(int x, int y, int color)
{
    coloration(color);
    gotoxy(x, y);
}


//Déclaration de la fonction qui affichera un message d'erreur pour les mauvais choix du menu Principal
void afficheErreurMenuPrincipal()
{
    saisieXY("[ERREUR : CE MENU N'EST PAS DISPONIBLE. VEUILEZ REESSAYER!]", 63, 39, 4);
    gestionMenuPrincipal();
}

//Déclaration de la fonction qui affichera un message d'erreur pour les mauvais choix du menu Tableau
void afficheErreurMenuTableau()
{
    saisieXY("[ERREUR : CE MENU N'EST PAS DISPONIBLE. VEUILEZ REESSAYER!]", 63, 39, 4);
    gestionMenuTableau();
}

//Déclaration de la fonction qui affichera un message d'erreur pour les mauvais choix du menu Simple
void afficheErreurMenuSimple()
{
    saisieXY("[ERREUR : CE MENU N'EST PAS DISPONIBLE. VEUILEZ REESSAYER!]", 63, 39, 4);
    gestionMenuSimple();
}

//Déclaration de la fonction qui affichera un message d'erreur pour les mauvais choix du menu Double
void afficheErreurMenuDouble()
{
    saisieXY("[ERREUR : CE MENU N'EST PAS DISPONIBLE. VEUILEZ REESSAYER!]", 63, 39, 4);
    gestionMenuDouble();
}


//Déclaration de la fonction qui va tracer le cadre dans toutes les pages de l'application
 void tracerCadre()
 {
    int i = 0; //Variable qui sera incrémenter pour tracer le cadre de l'écran
    char caract1 = 201, caract2 = 205, caract3 = 187, caract4 = 186, caract5 = 200, caract6 = 188 ;
    saisieXY(caract1, 22, 2); //Caractere du coin supérier gauche
    for (i = 0; i <= 120; i ++)
        cout << caract2; //Ligne horizontale
    cout << caract3; //Coin supérieur droit
    for (i = 0; i <= 36; i ++)
        saisieXY(caract4, 22, 3 + i); //Ligne verticale gauche
    saisieXY(caract5, 22, 40); //Coin inférieur gauche
    for (i = 0; i <= 120; i ++)
        cout << caract2; //Ligne horizontale inférieure
    cout << caract6; //Coin inférieur droit
    for (i = 36; i >= 0; i --)
        saisieXY(caract4, 144, 39 - i);
 }


 //Déclaration de la fonction qui trace le cadre de la barre de chargement
 void tracerCadreBarreChargement()
 {
    int i = 0; //Variable qui sera incrémenter pour tracer le cadre de l'écran
    char caract1 = 201, caract2 = 205, caract3 = 187, caract4 = 186, caract5 = 200, caract6 = 188 ;
    saisieXY(caract1, 32, 20, 7); //Caractere du coin supérier gauche
    for (i = 0; i <= 100; i ++)
        cout << caract2; //Ligne horizontale
    cout << caract3; //Coin supérieur droit
    for (i = 0; i <= 0; i ++)
        saisieXY(caract4, 32, 21 + i, 7); //Ligne verticale gauche
    saisieXY(caract5, 32, 22, 7); //Coin inférieur gauche
    for (i = 0; i <= 100; i ++, 7)
        cout << caract2; //Ligne horizontale inférieure
    cout << caract6; //Coin inférieur droit
    for (i = 0; i >= 0; i --)
        saisieXY(caract4, 134, 21 - i, 7);
 }


 //Déclaration de la fonction qui va afficher un message lors de la progression
 void messageProgression(char message[100])
 {
     saisieXY(message, 75, 23, 4);
 }



//Déclaration de la fonction qui va afficher un message lors de la progression
 void messageFini(char message[100])
 {
     transitionMenus();
     saisieXY(message, 77, 39, 10);
     resteMenuTableau();
 }

 //Déclaration de la fonction qui va afficher un message lors de la progression
 void messageFiniTLS(char message[100])
 {
     transitionMenus();
     saisieXY(message, 77, 39, 10);
     resteMenuSimple();
 }



//Déclaration de la fonction qui va afficher un message lors de la progression
 void messageFiniRestauration(int taille, int nombreFichier)
 {
     transitionMenus();
     positionneCurseur(77, 39, 10);
     cout << "[Nous avons restaure " << taille << "/" << nombreFichier << " Produits]";
     resteMenuTableau();
 }


 //Déclaration de la fonction qui affiche la progression d'un chargement
 void progressionChargement(char messageEnCour[100])
 {
     char car = 219;
     saisieXY("1. GESTION DES PRODUITS PAR TABLEAU",70, 6,  9);
     tracerCadreBarreChargement();
     for (int i = 0; i <= 100; i ++)
     {
        saisieXY(car, 33 + i, 21, 10);
        saisieXY('%', 138, 21, 10);
        saisieXY(i, 136, 21, 10);
        messageProgression(messageEnCour);
        Sleep(50);
     }
 }


//Déclaration de la fonction qui va tracer un cadre dynamique pour l'affichage des produits
 void tracerCadreDynamique(int nbreProdts)
 {
    system("cls");
    int i = 0; //Variable qui sera incrémenter pour tracer le cadre de l'écran
    char caract1 = 201, caract2 = 205, caract3 = 187, caract4 = 186, caract5 = 200, caract6 = 188 ;
    saisieXY(caract1, 22, 2); //Caractere du coin supérier gauche
    for (i = 0; i <= 120; i ++)
        cout << caract2; //Ligne horizontale
    cout << caract3; //Coin supérieur droit
    for (i = 0; i <= (30 + (2 * nbreProdts)); i ++)
        saisieXY(caract4, 22, 3 + i); //Ligne verticale gauche
    saisieXY(caract5, 22, (34 + (2 * nbreProdts))); //Coin inférieur gauche
    for (i = 0; i <= 120; i ++)
        cout << caract2; //Ligne horizontale inférieure
    cout << caract6; //Coin inférieur droit
    for (i = (30 + (2 * nbreProdts)); i >= 0; i --)
        saisieXY(caract4, 144, (33 + (2 * nbreProdts)) - i);
 }


//Déclaration de la fonction qui effectuera les transitions entre les sous menus
void transitionMenus()
{
    system("cls");
    coloration(7);
    tracerCadre(); //Traçage du cadre de l'application
}


//Déclaration de la fonction qui va afficher le menu principal de l'application
 void afficheMenuPrincipal()
 {
     tracerCadre(); //Traçage du cadre de l'application
     saisieXY("ANNEE SCOLAIRE 2016 - 2017", 70, 6, 9);
     saisieXY("PROGRAMME DE GESTION DES PRODUITS", 66, 9, 9);
     saisieXY("  - - - - MENU PRINCIPAL - - - -  ", 65, 12, 9);
     saisieXY("1-  Gestion par tableau", 30, 18);
     saisieXY("2-  Gestion par liste simplement chainee", 30, 21);
     saisieXY("3-  Gestion par liste doublement chainee", 30, 24);
     saisieXY("4-  A propos...", 30, 27);
     saisieXY("5-  Sortir du programme", 30, 30);
     saisieXY("Votre Choix: __", 85, 36);
 }


//Déclaration de la fonction qui affiche juste le menu du sous menu gestion par tableau
void afficheMenuTableau()
{
    saisieXY("1. GESTION DES PRODUITS PAR TABLEAU",70, 6,  9);
    saisieXY("1-  Affichage des produits", 30, 10);
    saisieXY("2-  Affichage des produits par l’index (Poids)", 30, 13);
    saisieXY("3-  Saisie des produits", 30, 16);
    saisieXY("4-  Tri des produits par ordre alphabétique (pays, nom)", 30, 19);
    saisieXY("5-  Tri des produits par date de fabrication", 30, 22);
    saisieXY("6-  Tri des produits par index (Poids)", 30, 25);
    saisieXY("7-  Sauvegarder le tableau des produits", 30, 28);
    saisieXY("8-  Restaurer un tableau de produits", 30, 31);
    saisieXY("9-  Retour au menu principal", 30, 34);
    saisieXY("Votre Choix: __", 85, 37);
}


//Déclaration de la fonction qui affiche juste le menu du sous menu gestion par listes simplement chainé
void afficheMenuSimple()
{
    saisieXY("2. GESTION DES PRODUITS PAR LISTE SIMPLE (PILE)", 70, 6, 9);
    saisieXY("1-  Afficher la liste des produits", 30, 10);
    saisieXY("2-  Ajouter un produit", 30, 13);
    saisieXY("3-  Supprimer un produit", 30, 16);
    saisieXY("4-  Tri des produits par ordre alphabétique (pays, nom)", 30, 19);
    saisieXY("5-  Tri des produits par date de fabrication", 30, 22);
    saisieXY("6-  Sauvegarder la liste des produits", 30, 25);
    saisieXY("7-  Restaurer une liste de produits", 30, 28);
    saisieXY("8-  Retour au menu principal", 30, 31);
    saisieXY("Votre Choix: __", 85, 34);
}

//Déclaration de la fonction qui affiche juste le menu du sous menu gestion par listes simplement chainé
void afficheMenuDouble()
{
    saisieXY("3. GESTION DES PRODUITS PAR LISTE DOUBLE (FILE)", 70, 6, 9);
    saisieXY("1-  Afficher la liste des produits", 30, 10);
    saisieXY("2-  Ajouter un produit", 30, 13);
    saisieXY("3-  Supprimer un produit", 30, 16);
    saisieXY("4-  Tri des produits par ordre alphabétique (pays, nom)", 30, 19);
    saisieXY("5-  Tri des produits par date de fabrication", 30, 22);
    saisieXY("6-  Sauvegarder la liste des produits", 30, 25);
    saisieXY("7-  Restaurer une liste de produits", 30, 28);
    saisieXY("8-  Retour au menu principal", 30, 31);
    saisieXY("Votre Choix: __", 85, 34);
}


//Déclaration de la fonction qui va afficher le menu principal de l'application
 void afficheMenuAPropos()
 {
     tracerCadre(); //Traçage du cadre de l'application
     saisieXY("4. A PROPOS", 75, 6, 9);
     saisieXY("ANNEE SCOLAIRE 2016/2017  -  TP POO", 66, 9, 9);
     saisieXY("Dirige par: Mr OMGBA Celestin Alexis", 65, 12, 9);
     saisieXY("Realise par :", 25, 18);
     saisieXY("1-  NSSO EKEME Hugues Jospin (Responsable)", 30, 21);
     saisieXY("2-  NJOUTARANE MBOMBO Zouber", 30, 24);
     saisieXY("3-  NOUMBISSI FOGAING Mickael", 30, 27);
     saisieXY("4-  NOUAYOUO Maverick", 30, 30);
     saisieXY("5-  NGOUTANE Colette Reine (Vice presentateur)", 30, 33);
     saisieXY("6-  NGA-ELLA Micheline Claude Felicite (Presentateur)", 30, 36);
     saisieXY("Appuyez sur une touche...", 85, 38);
 }

//Déclaration de la fonction qui recupere le choix
int recupereChoixMenus(int tailleMenu, int x, int y, int color)
{
    int chx;
    do
    {
        gotoxy(x, y);
        coloration(color);
        cin >> chx;
    }while( (chx < 1) && (chx > tailleMenu) );
    return chx;
}

//Déclaration de la fonction qui recupere n importe quelle entree au clavier
void appuyerTouche()
{
    do
    {
        coloration(0);
    }while( getchar() == '\n');
    fflush(stdin);
}

//Déclaration de l'utilitaire pour diriger les menus principaux
void utilitairePrincipal(int choice)
{
    switch(choice)
    {
    case 1 :
        dirigeMenuTableau();
        break;
    case 2 :
        dirigeMenuSimple();
        break;
    case 3 :
        dirigeMenuDouble();
        break;
    case 4 :
        dirigeMenuAPropos();
        break;
    case 5 :
        exit(-1);
        break;
    default :
        afficheErreurMenuPrincipal();
        break;
    }
}

//Déclaration de la fonction qui va diriger vers les sous menus
void dirigeSousMenuPrincipal()
{
    int choixSousMenu;
    do
    {
        choixSousMenu = recupereChoixMenus(5, 98, 36);
        utilitairePrincipal(choixSousMenu);
    }while( (choixSousMenu < 1) && (choixSousMenu > 5) );
}

//Déclaration de la fonction de gestion du menu principal
void gestionMenuPrincipal()
{
    afficheMenuPrincipal();
    dirigeSousMenuPrincipal();
}

//Déclaration de la fonction de retour vers le menu principal
void retourGestionMenuPrincipal()
{
    transitionMenus();
    afficheMenuPrincipal();
    dirigeSousMenuPrincipal();
}


//Déclaration de l'utilitaire pour diriger les menus tableaux
void utilitaireTableau(int choice)
{
    static TProduit tab[TMAX];  //static permet d'allouer une partie de la mémoire globale à une variable globale
    static TIndex_Poids tab1[TMAX];
    static bool prdtsLues , prdtsRestaure , trieIndex ;
    switch(choice)
    {
     case 1 :
         afficheTableauPrdtsTrie(tab, TMAX, prdtsLues, prdtsRestaure);
         break;
     case 2 :
         affichageTableauIndexTrie(tab, tab1, TMAX, trieIndex);
         break;
     case 3 :
         prdtsLues = true;
         gestionRecuperationPrdt(tab, TMAX);
         break;
     case 4 :
         triAlphabetique(tab, TMAX, 0, prdtsLues, prdtsRestaure);
         break;
     case 5 :
         triProduitDate(tab, TMAX, prdtsLues, prdtsRestaure);
         break;
     case 6 :
         trieIndex = true;
         triTabIndex(tab, tab1, TMAX, prdtsLues, prdtsRestaure);
         break;
     case 7 :
         sauvegarderPrdt(tab, TMAX, prdtsLues, prdtsRestaure);
         break;
     case 8 :
         prdtsRestaure = true;
         restaurerPrdt(tab, TMAX);
         break;
     case 9 :
         retourGestionMenuPrincipal();
         break;
     default :
         afficheErreurMenuTableau();
         break;
    }
}

//Déclaration de la fonction qui va afficher le menu Gestion par tableaux
 void dirigeMenuTableau()
 {
     transitionMenus();
     afficheMenuTableau();
     int choixSousMenu;
     do
     {
         choixSousMenu = recupereChoixMenus(9, 98, 37);
         utilitaireTableau(choixSousMenu);
     }while( (choixSousMenu < 1) && (choixSousMenu > 9) );
}


//Déclaration de la fonction qui permetra de rester sur le menu tableau apres une recharge
void resteMenuTableau()
{
    afficheMenuTableau();
    int choixSousMenu;
    do
    {
        choixSousMenu = recupereChoixMenus(9, 98, 37);
        utilitaireTableau(choixSousMenu);
    }while( (choixSousMenu < 1) && (choixSousMenu > 9) );
}


//Déclaration de la fonction qui permetra de rester sur le menu Liste simple apres une recharge
void resteMenuSimple()
{
    afficheMenuSimple();
    int choixSousMenu;
    do
    {
        choixSousMenu = recupereChoixMenus(8, 98, 34);
        utilitaireSimple(choixSousMenu);
    }while( (choixSousMenu < 1) && (choixSousMenu > 8) );
}

//Déclaration de la fonction de gestion du menu Tableau
void gestionMenuTableau()
{
    dirigeMenuTableau();
}


 //Déclaration de l'utilitaire pour diriger les menus Simple
void utilitaireSimple(int choice)
{
    static TLS_Produit *Pile;
    static bool TLSPrdtsLues , TLSPrdtsRestaure;
    switch(choice)
    {
     case 1 :
         afficheListeTLS_Prdt(Pile, TLSPrdtsLues , TLSPrdtsRestaure);
         break;
     case 2 :
         TLSPrdtsLues = true;
         gestionRecuperationTLS_prdt(Pile);
         break;
     case 3 :
         gestionSuppressionTLS(Pile);
         break;
     case 4 :
         TriAlphabetiqueTLS(Pile, TLSPrdtsLues, TLSPrdtsRestaure);
         break;
     case 5 :
         TriProduitDateTLS(Pile, TLSPrdtsLues, TLSPrdtsRestaure);
         break;
     case 6 :
         sauvegarderPrdtTLS(Pile, TLSPrdtsLues, TLSPrdtsRestaure);
         break;
     case 7 :
         TLSPrdtsRestaure = true;
         restaurerPrdtTLS(Pile);
         break;
     case 8 :
         retourGestionMenuPrincipal();
         break;
     default :
         afficheErreurMenuSimple();
         break;
    }
}

//Déclaration de la fonction qui va afficher le menu Gestion par liste simplement chainé
 void dirigeMenuSimple()
 {
     transitionMenus();
     afficheMenuSimple();
     int choixSousMenu;
     do
     {
         choixSousMenu = recupereChoixMenus(8, 98, 34);
         utilitaireSimple(choixSousMenu);
     }while( (choixSousMenu < 1) && (choixSousMenu > 8) );
 }

//Déclaration de la fonction de gestion du menu Simple
void gestionMenuSimple()
{
    dirigeMenuSimple();
}

//Déclaration de l'utilitaire pour diriger les menus Double
void utilitaireDouble(int choice)
{
    switch(choice)
    {
     case 1 :

         break;
     case 2 :

         break;
     case 3 :

         break;
     case 4 :

         break;
     case 5 :

         break;
     case 6 :

         break;
     case 7 :

         break;
     case 8 :
         retourGestionMenuPrincipal();
         break;
     default :
         afficheErreurMenuDouble();
         break;
    }
}

//Déclaration de la fonction qui va afficher le menu Gestion liste doublement chainé
 void dirigeMenuDouble()
 {
     transitionMenus();
     afficheMenuDouble();
     int choixSousMenu;
     do
     {
         choixSousMenu = recupereChoixMenus(8, 98, 34);
         utilitaireDouble(choixSousMenu);
     }while( (choixSousMenu < 1) && (choixSousMenu > 8) );
 }

//Déclaration de la fonction de gestion du menu Double
void gestionMenuDouble()
{
    afficheMenuDouble();
    dirigeMenuDouble();
}

//Déclaration de la fonction de retour vers le menu Double
void retourGestionMenuDouble()
{
    transitionMenus();
    afficheMenuDouble();
    dirigeMenuDouble();
}

//Déclaration de la fonction de retour vers le menu tableau
void retourGestionMenuTableau()
{
    transitionMenus();
    afficheMenuTableau();
    dirigeMenuTableau();
}


//Déclaration de la fonction de retour vers le menu Liste Simple
void retourGestionMenuSimple()
{
    transitionMenus();
    afficheMenuSimple();
    dirigeMenuSimple();
}


//Déclaration de l'utilitaire pour diriger les menus A propos
void utilitaireApropos(int choice)
{
    switch(choice)
    {
    default :
        retourGestionMenuPrincipal();
        break;
    }
}

//Déclaration de la fonction qui va afficher le menu A propos
 void dirigeMenuAPropos()
 {
     transitionMenus();
     afficheMenuAPropos();
     appuyerTouche();
     retourGestionMenuPrincipal();
 }


//Déclaration de la fonction qui va afficher un  message pour retourner au menu tableau apres l'affichage des produits
void apresAffichageRetourTableau()
{
    saisieXY("Veuillez appuyer une touche pour retourner au menu tableau__", 60, 30);
    positionneCurseur(120, 30, 10);
    appuyerTouche();
    retourGestionMenuTableau();
}

//Déclaration de la fonction qui va afficher un  message pour retourner au menu tableau apres l'affichage des produits
void apresAffichageRetourSimple()
{
    saisieXY("Veuillez appuyer une touche pour retourner au menu gestion par liste simple__", 48, 30);
    positionneCurseur(124, 30, 10);
    appuyerTouche();
    retourGestionMenuSimple();
}


