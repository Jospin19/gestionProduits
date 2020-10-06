#include <iostream>
#include "Graphisme.h"

using namespace std;

//Déclaration qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn void tracerCadre()
 *\brief fonction qui trace tous les cadres de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
 void tracerCadre()
 {
    int i = 0, j = 0; //Variable qui sera incrémenter pour tracer le cadre de l'écran
    char caract1 = 201, caract2 = 205, caract3 = 187, caract4 = 186, caract5 = 200, caract6 = 188 ;
    gotoxy(22,2);
    cout << caract1; //Caractere du coin supérier gauche
    for (i = 0; i <= 120; i ++)
        cout << caract2; //Ligne horizontale
    cout << caract3; //Coin supérieur droit
    for (i = 0; i <= 36; i ++)
    {
        gotoxy(22, 3 + i);
        cout << caract4; //Ligne verticale gauche
    }
    gotoxy(22, 40);
    cout << caract5; //Coin inférieur gauche
    for (i = 0; i <= 120; i ++)
        cout << caract2; //Ligne horizontale inférieure
    cout << caract6; //Coin inférieur droit
    for (i = 36; i >= 0; i --)
    {
        gotoxy(144, 39 - i);
        cout << caract4;
    }
 }
