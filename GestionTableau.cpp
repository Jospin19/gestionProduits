#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <fstream>
#include "GestionTableau.h"
#include "Graphisme.h"

using namespace std;

//Déclaration de la fonction qui affichera un message d'erreur lorsque le nom dépasse 50 caractères
void afficheErreurTailleNom()
{
    saisieXY("[ERREUR : LE CHAMP NOM NE PEUT DEPASSER    CARACTERES. VEUILEZ REESSAYER!]", 54, 39, 4);
    saisieXY("                                                                                  ",61, 20, 0);
    coloration(4);
    gotoxy(96, 39);
    cout << 50;
}

//Déclaration de la fonction qui affichera un message d'erreur lorsque le code dépasse 70 caractères
void afficheErreurTailleCode()
{
    saisieXY("[ERREUR : LE CHAMP CODE NE PEUT DEPASSER    CARACTERES. VEUILEZ REESSAYER!]", 54, 39, 4);
    saisieXY("                                                                                  ", 62, 22, 0);
    coloration(4);
    gotoxy(97, 39);
    cout << 70;
}

//Déclaration de la fonction qui affichera un message d'erreur lorsque le PAYS dépasse 30 caractères
void afficheErreurTaillePays()
{
    saisieXY("[ERREUR : LE CHAMP PAYS NE PEUT DEPASSER    CARACTERES. VEUILEZ REESSAYER!]", 55, 39, 4);
    saisieXY("                                    ", 59, 24, 0);
    coloration(4);
    gotoxy(97, 39);
    cout << 30;
}

//Déclaration de la fonction qui affichera un message d'erreur lorsque le poids est négatif
void afficheErreurPoids()
{
    saisieXY("[ERREUR : CE POIDS N EST PAS VALIDE. VEUILEZ REESSAYER!]", 55, 39, 4);
    saisieXY("                      ", 129, 24, 0);
}

//Déclaration de la fonction qui affichera un message d'erreur lorsque l'année est inférieure ou égal à 0
void afficheErreurAn()
{
    saisieXY("[ERREUR : CETTE ANNEE N EST PAS VALIDE. VEUILEZ REESSAYER!]", 55, 39, 4);
    saisieXY("                                    ", 67, 28, 0);
}


//Déclaration de la fonction qui affichera un message d'erreur lorsque le mois est inférieur à 0 ou supérieur à 12
void afficheErreurMois()
{
    saisieXY("[ERREUR : CE MOIS N EST PAS VALIDE. VEUILEZ REESSAYER!]", 55, 39, 4);
    saisieXY("                      ",138 , 28, 0);
}

//Déclaration de la fonction qui affichera un message d'erreur lorsque le jour est inférieur à 0 ou supérieur à 31
void afficheErreurJour()
{
    saisieXY("[ERREUR : CE JOUR N EST PAS VALIDE. VEUILEZ REESSAYER!]", 55, 39, 4);
    saisieXY("                                    ", 66, 30, 0);
}

//Déclaration de la fonction qui affichera un message d'erreur lorsque l'heure est inférieur à 24
void afficheErreurHeure()
{
    saisieXY("[ERREUR : CETTE HEURE N EST PAS VALIDE. VEUILEZ REESSAYER!]", 55, 39, 4);
    saisieXY("                      ", 139, 30, 0);
}

//Déclaration de la fonction qui va afficher une erreur si le tri index ne peut ête effectue
void afficheErreurTri()
{
    saisieXY("[ERREUR DE TRI: Le tableau des produits ne contient aucun element. veuillez le charger!]", 40, 39, 4);
    resteMenuTableau();
}


//Déclaration de la fonction qui va afficher une erreur si la sauvegarde des produits ne peut être effectue
void afficheErreurSauvegarde()
{
    saisieXY("[ERREUR DE SAUVEGARDE: Le tableau des produits ne contient aucun element. veuillez le charger!]", 40, 39, 4);
    resteMenuTableau();
}

//Déclaration de la fonction qui va afficher une erreur si l'affichage est impossible
void afficheErreurAffichage()
{
    saisieXY("[ERREUR D AFFICHAGES DES PRODUITS: Le tableau peut etre vide ou non trie!]", 40, 39, 4);
    resteMenuTableau();
}

//Déclaration de la fonction qui va controller la taille d'un tableau de caractere
void controleNom(char chaine[50])
{
    if(strlen(chaine) > 50)
    {
        afficheErreurTailleNom();
        fflush(stdin);
        recupereNomPdrt();
    }
}

//Déclaration de la fonction qui va controller la taille d'un tableau de caractere
void controleCode(char chaine[70])
{
    if(strlen(chaine) > 70)
    {
        afficheErreurTailleNom();
        fflush(stdin);
        recupereCodePdrt();
    }
}

//Déclaration de la fonction qui va controller la taille d'un tableau de caractere
void controlePays(char chaine[30])
{
    if(strlen(chaine) > 30)
    {
        afficheErreurTailleNom();
        fflush(stdin);
        recuperePaysPdrt();
    }
}


//Déclaration de la fonction qui va  controller le poids des produits
void controlePoids(unsigned int poids)
{
    if(poids < 0)
    {
        afficheErreurPoids();
        fflush(stdin);
        recuperePoidsPdrt();
    }
}

//Déclaration de la fonction qui va  controller le poids des produits
void controleAnne(unsigned int Annee)
{
    if(Annee < 0)
    {
        afficheErreurAn();
        fflush(stdin);
        recupereAnPdrt();
    }
}

//Déclaration de la fonction qui va  controller le mois des produits
void controleMois(short int Mois)
{
    if(Mois > 12)
    {
        afficheErreurMois();
        fflush(stdin);
        recupereMoisPdrt();
    }
}

//Déclaration de la fonction qui va  controller le jour des produits
void controleJour(short int Jour)
{
    if(Jour > 32)
    {
        afficheErreurJour();
        fflush(stdin);
        recupereJourPdrt();
    }
}

//Déclaration de la fonction qui va  controller l'heure des produits
void controleHeure(short int Heure)
{
    if(Heure > 31)
    {
        afficheErreurHeure();
        fflush(stdin);
        recupereHeurePdrt();
    }

}


//Déclaration de la fonction qui recupera le nom des produits
char * recupereNomPdrt()
{
    char chaineCaractere[50];
    saisieXY("[IDENTIFICATION] ",30, 18, 8);
    saisieXY("Nom du produit : ",43, 20);
    coloration(10);
    fflush(stdin);
    do
    {
        gotoxy(61, 20);
        cin.getline (chaineCaractere, 49);
        controleNom(chaineCaractere);
    }while(strlen(chaineCaractere) > 50);
    return chaineCaractere;
}


//Déclaration de la fonction qui recupera le pays d'origine des produits
char * recuperePaysPdrt()
{
    char chaineCaractere[30];
    saisieXY("Pays d origine : ",43, 24);
    do
    {
        coloration(10);
        gotoxy(61, 24);
        cin.getline (chaineCaractere, 29);
        controlePays(chaineCaractere);
    }while(strlen(chaineCaractere) > 30);
    return chaineCaractere;
}


//Déclaration de la fonction qui recupera le pays d'origine des produits
char * recupereCodePdrt()
{
    char chaineCaractere[70];
    saisieXY("Code du produit : ",43, 22);
    do
    {
        coloration(10);
        gotoxy(62, 22);
        cin.getline (chaineCaractere, 69);
        controleCode(chaineCaractere);
    }while(strlen(chaineCaractere) > 70);
    return chaineCaractere;
}

//Déclaration de la fonction qui recupera le poids du produit
unsigned int recuperePoidsPdrt()
{
    unsigned int poids;
    saisieXY("Poids du produit : ",110, 24);
    do
    {
        coloration(10);
        gotoxy(129, 24);
        cin >> poids;
        controlePoids(poids);
    }while(poids < 0);
    return poids;
}

//Déclaration de la fonction qui recupera l'année du produit
unsigned int recupereAnPdrt()
{
    unsigned int An;
    saisieXY("[DATE]",35, 27, 8);
    saisieXY("Annee de fabrication : ",43, 28);
    do
    {
        coloration(10);
        gotoxy(67, 28);
        cin >> An;
        controleAnne(An);
    }while(An < 0);
    return An;
}


//Déclaration de la fonction qui recupera le mois du produit
short int recupereMoisPdrt()
{
    short int Mois;
    saisieXY("Moi de fabrication : ", 110, 28);
    do
    {
        coloration(10);
        gotoxy(131 , 28);
        cin >> Mois;
        controleMois(Mois);
    }while((Mois > 13));
    return Mois;
}


//Déclaration de la fonction qui recupera l'année du produit
short int recupereJourPdrt()
{
    short int jour;
    saisieXY("Jour de fabrication : ",43, 30);
    do
    {
        coloration(10);
        gotoxy(66, 30);
        cin >> jour;
        controleJour(jour);
    }while(jour > 32) ;
    return jour;
}


//Déclaration de la fonction qui recupera l'heure de creation du produit
short int recupereHeurePdrt()
{
    short int Heure;
    saisieXY("Heure de fabrication : ",110, 30);
    do
    {
        coloration(10);
        gotoxy(133, 30);
        cin >> Heure;
        controleHeure(Heure);
    }while(Heure > 25);
    return Heure;
}


//Déclaration de la fonction qui va affecter un produit a un autre
void affectationProdt(TProduit &prdt2, TProduit &prdt1)
{
    strcpy( prdt2.Nom, prdt1.Nom );
    strcpy( prdt2.Code, prdt1.Code);
    strcpy(prdt2.Pays_Origine, prdt1.Pays_Origine);
    prdt2.Poids = prdt1.Poids;
    prdt2.An_Fabric = prdt1.An_Fabric;
    prdt2.Mois_Fabric = prdt1.Mois_Fabric;
    prdt2.Jour_Fabric = prdt1.Jour_Fabric;
    prdt2.Heure_Fabric = prdt1.Heure_Fabric;
}


//Déclaration de la fonction qui va affecter un Index à un autre
void affectationIndex(TIndex_Poids &index2, TIndex_Poids &index1)
{
    index2.Poids = index1.Poids;
    index2.Position = index1.Position;
}


//Déclaratio de la fonction qui va effectuer une permutation de produit
void permutationPrdt(TProduit &prdt1, TProduit &prdt2)
{
    TProduit intermediaire;
    affectationProdt(intermediaire, prdt1);
    affectationProdt(prdt1, prdt2);
    affectationProdt(prdt2, intermediaire);
}


//Déclaration de la fonction qui va gérer la récupération des informations d'un tableau de produits
void gestionRecuperationPrdt(TProduit tableau[], int taille)
{
    transitionMenus();
    for (int i = 0; i < taille; i++)
    {
        saisieXY("3-  Saisie des produits", 70, 6, 9);
        saisieXY("PRODUIT    :", 33, 15, 13);
        gotoxy(41, 15);
        cout << i + 1;
        strcpy( tableau[i].Nom, recupereNomPdrt() );
        strcpy( tableau[i].Code, recupereCodePdrt() );
        strcpy(tableau[i].Pays_Origine, recuperePaysPdrt());
        tableau[i].Poids = recuperePoidsPdrt();
        tableau[i].An_Fabric = recupereAnPdrt();
        tableau[i].Mois_Fabric = recupereMoisPdrt();
        tableau[i].Jour_Fabric = recupereJourPdrt();
        tableau[i].Heure_Fabric = recupereHeurePdrt();
        transitionMenus();
    }
    gestionMenuTableau();
}


//Déclaration de la fonction qui va classer les produits par nom
void TriProduitNom(TProduit tab[], int taille, int pos)  //Tri bulle amélioré(stable)
{
    TProduit inter;
    int h;
    if (pos < taille - 1)
    {
        h = taille - 1;
        for (int a = taille - 1; a > pos; a--)
        {
            if (strcmp(tab[a - 1].Nom, tab[a].Nom) > 0)
            {
                affectationProdt(inter, tab[a]);
                affectationProdt(tab[a], tab[a - 1]);
                affectationProdt(tab[a - 1], inter);
                h = a; //Position de la dernière modification
            }
        }
        TriProduitPays(tab, taille, h);
    }
}



//Déclaration de la fonction qui va trier les produits par pays
void TriProduitPays(TProduit tab[], int taille, int pos) //Tri bulle amélioré(stable)
{
    TProduit inter;
    int h;
    if (pos < taille - 1)
    {
        h = taille - 1;
        for (int a = taille - 1; a > pos; a--)
        {
            if (strcmp(tab[a - 1].Pays_Origine, tab[a].Pays_Origine) > 0)
            {
                affectationProdt(inter, tab[a]);
                affectationProdt(tab[a], tab[a - 1]);
                affectationProdt(tab[a - 1], inter);
                h = a; //Position de la dernière modification
            }
        }
        TriProduitPays(tab, taille, h);
    }
}


//Déclaration de la fonction qui va trier par ordre alphabétique
void triAlphabetique(TProduit tab[], int taille, int pos, bool Lu, bool restaure)
{
    if ( ( Lu == true) || (restaure == true) )
    {
        transitionMenus();
        TriProduitPays(tab, taille, pos);
        TriProduitNom(tab, taille, pos);
        progressionChargement("Tri des produits en cour...");
        messageFini("Tri effectue avec succes!!!");
    }
    else
        afficheErreurTri();
}


//Déclaration de la fonction qui va recupérer le tableau des Idex
void chargerTableauIndex(TProduit tab[], TIndex_Poids tabIndex[], int taille)
{
    for (int i = 0; i < taille; i++)
    {
        tabIndex[i].Poids = tab[i].Poids;
        tabIndex[i].Position = i;
    }
}


//Déclaration de la fonction qui va trier le tableau des Index par poids
void triTabIndex(TProduit tabPrdts[], TIndex_Poids tabIndex[], int taille, bool Lu, bool restaure) //Tri par insertion séquentiel(stable)
{
    if ( ( Lu == true) || (restaure == true) )
    {
        TIndex_Poids temp;
        transitionMenus();
        chargerTableauIndex(tabPrdts, tabIndex, taille);
        int k;
        for (int i = 1; i < taille; i++)
        {
            affectationIndex(temp, tabIndex[i]);
            k = i - 1;
            while ( (k >= 0) && (tabIndex[k].Poids > temp.Poids) )
            {
                tabIndex[k + 1] = tabIndex[k];
                k--;
            }
            affectationIndex(tabIndex[k + 1], temp);
        }
        progressionChargement("Tri des produits en cour...");
        messageFini("[Tri effectue avec succes!!!]");
    }
    else
        afficheErreurTri();
}


//Déclaration de la fonction qui ca classer les produits par mois
void triProduitAnnne(TProduit tab[], int taille) //Tri insertion dichotomique(stable)
{
    TProduit inter;
    int pos, k, milieu, borneInf, borneSup;
    for (pos = 1; pos < taille; pos++)
    {
        if(tab[pos].An_Fabric < tab[pos - 1].An_Fabric)
        {
            borneInf = 0;
            borneSup = pos - 1;
            while (borneInf != borneSup)
            {
                milieu = (borneInf + borneSup) / 2;
                if (tab[pos].An_Fabric >= tab[milieu].An_Fabric)
                    borneInf = milieu + 1;
                else
                    borneSup = milieu;
            }
            affectationProdt(inter, tab[pos]);
            for (k = pos; k > borneInf; k--)
                affectationProdt(tab[k], tab[k - 1]);
            affectationProdt(tab[borneInf], inter);
        }
    }
}


//Déclaration de la fonction qui ca classer les produits par mois
void triProduitMois(TProduit tab[], int taille) //Tri insertion dichotomique(stable)
{
    TProduit inter;
    int pos, k, milieu, borneInf, borneSup;
    for (pos = 1; pos < taille; pos++)
    {
        if(tab[pos].Mois_Fabric < tab[pos - 1].Mois_Fabric)
        {
            borneInf = 0;
            borneSup = pos - 1;
            while (borneInf != borneSup)
            {
                milieu = (borneInf + borneSup) / 2;
                if (tab[pos].Mois_Fabric >= tab[milieu].Mois_Fabric)
                    borneInf = milieu + 1;
                else
                    borneSup = milieu;
            }
            affectationProdt(inter, tab[pos]);
            for (k = pos; k > borneInf; k--)
                affectationProdt(tab[k], tab[k - 1]);
            affectationProdt(tab[borneInf], inter);
        }
    }
}


//Déclaration de la fonction qui vatrier les produits par jours
void triProduitJour(TProduit tab[], int taille) //Tri insertion dichotomique(stable)
{
    TProduit inter;
    int pos, k, milieu, borneInf, borneSup;
    for (pos = 1; pos < taille; pos++)
    {
        if(tab[pos].Jour_Fabric < tab[pos - 1].Jour_Fabric)
        {
            borneInf = 0;
            borneSup = pos - 1;
            while (borneInf != borneSup)
            {
                milieu = (borneInf + borneSup) / 2;
                if (tab[pos].Jour_Fabric >= tab[milieu].Jour_Fabric)
                    borneInf = milieu + 1;
                else
                    borneSup = milieu;
            }
            affectationProdt(inter, tab[pos]);
            for (k = pos; k > borneInf; k--)
                affectationProdt(tab[k], tab[k - 1]);
            affectationProdt(tab[borneInf], inter);
        }
    }
}


//Déclaration de ma fonction qui vatrier les produits par date de fabrication (année, mois et jour de fabrication)
void triProduitDate(TProduit tab[], int taille, bool Lu, bool restaure)
{
    if ( ( Lu == true) || (restaure == true) )
    {
        transitionMenus();
        triProduitJour(tab, taille);
        triProduitMois(tab, taille);
        triProduitAnnne(tab, taille);
        progressionChargement("Tri des produits en cour...");
        messageFini("[Tri effectue avec succes!!!]");

    }
    else
        afficheErreurTri();
}


//Déclaration de la fonction qui va récupérer le nom du fichier
char * recupereFichier()
{
    transitionMenus();
    char nomFichier[90];
    saisieXY("Veuillez entrer le nom du fichier :", 30, 20);
    positionneCurseur(68, 20, 10);
    cin >> nomFichier;
    strcat(nomFichier, ".PRD");
    return nomFichier;
}


//Déclaration de la fonction qui va écrire les produits dans le fichier
void sauvegarderPrdt(TProduit tab[], int taille, bool Lu, bool restaure)
{
    if ( ( Lu == true) || (restaure == true) )
    {
        transitionMenus();
        char nomFichier[90];
        strcpy(nomFichier, recupereFichier());
        transitionMenus();
        ofstream fichier (nomFichier, ios::out|ios::binary|ios::app) ; // ouverture du fichier en en mode binaire (écriture et ajout en fin du fichier)
        if (!fichier)
        {
            saisieXY("[ERREUR : CREATION IMPOSSIBLE!]", 54, 39, 4);
        }
        else
        {
            for (int i = 0; i < taille; i++)
                fichier.write ((char *)&tab[i], sizeof(TProduit) ) ;
        }
        fichier.close ();
        progressionChargement("Sauvegarde des produits en cour...");
        messageFini("[Sauvegarde effectuee avec succes!!!]");
    }
    else
        afficheErreurSauvegarde();
}


//Déclatation de la fonction qui va calculer le nombre de produits dans le fichier des produits
int compterElemtFichier(char nomFichier[90])
{
    TProduit tab[90];
    int i = 0;
    ifstream fichier (nomFichier, ios::in|ios::binary) ; // ouverture du fichier en en mode binaire (lecture du fichier)
    while(!fichier.eof())
    {
        fichier.read((char *)&tab[i], sizeof(TProduit) );
        i++;
    }
    fichier.close();
    return i - 1;
}


//Déclaration de la fonction qui effectue le travail dans le fichier lors de la restauration d'un tableau de produits
void operationRestauration(TProduit tab[], int taille, char nomFichier[90])
{
    transitionMenus();
    ifstream fichier (nomFichier, ios::in|ios::binary) ; // ouverture du fichier en en mode binaire (lecture du fichier)
    if (!fichier)
    {
        saisieXY("[ERREUR : ERREUR LORS DE L OUVERTURE DU FCIHIER.!]", 54, 39, 4);
        resteMenuTableau();
    }
    else
    {
        for (int i = 0; i < taille; i++)
            fichier.read((char *)&tab[i], sizeof(TProduit) ) ;
            progressionChargement("Restauration des produits en cour...");
    }
    fichier.close ();
}


//Déclaration de la fonction qui va afficher un message si la restauration est impossible
void afficheErreurRestauration()
{
    transitionMenus();
    saisieXY("[ERREUR LORS DE LA RESTAURATION DU FICHIER. LE FICHIER PEUT ETRE INEXISTANT", 63, 39, 4);
    resteMenuTableau();
}


//Déclaration de la fonction qui va lire les produits dans le fichier
void restaurerPrdt(TProduit tab[], int taille)
{
    char nomFichier[90];
    strcpy(nomFichier, recupereFichier());
    int nombreDansLeFichier = compterElemtFichier(nomFichier);
    if (taille < nombreDansLeFichier)
    {
        operationRestauration(tab, taille, nomFichier);
        messageFiniRestauration(taille, nombreDansLeFichier);
    }
    else if (taille == nombreDansLeFichier)
    {
        operationRestauration(tab, taille, nomFichier);
        messageFini("[Restauration effectue avec succes!!!!!]");
    }
    else
    {
        afficheErreurRestauration();
        resteMenuTableau();
    }
}


//Déclaration de la directive qui affiche les produits
void afficheProduits(TProduit tab[], int taille)
{
    tracerCadreDynamique();
    saisieXY("*** Affichage de la liste des produits [par l’index] ***",59, 10,  9);
    saisieXY("[             NOM              ]  [    PAYS      ] -- [JJ/MM/AAAA  a HH (h)] -- [Poids(Kg)] -- [    CODE      ]", 31, 14, 10);
    for(int i = 0; i < taille; i++)
    {
        saisieXY(i + 1, 26, 16 + i, 3);
        saisieXY(". [                              ]  [              ] -- [  /  /      a    (h)] -- [     (Kg)] -- [              ]", 29, 16 + i, 3);
        saisieXY(tab[i].Nom, 42, 16 + i, 3);
        saisieXY(tab[i].Pays_Origine, 68, 16 + i, 3);
        saisieXY(tab[i].Jour_Fabric, 86, 16 + i, 3);
        saisieXY(tab[i].Mois_Fabric, 89, 16 + i, 3);
        saisieXY(tab[i].An_Fabric, 92, 16 + i, 3);
        saisieXY(tab[i].Heure_Fabric, 100, 16 + i, 3);
        saisieXY(tab[i].Poids, 114, 16 + i, 3);
        saisieXY(tab[i].Code, 131, 16 + i, 3);
        cout << endl;
    }
    apresAffichageRetourTableau();
}


//Déclaration de la fonction qui va afficher les produits selon un ordre(alaphabetique, date)
void afficheTableauPrdtsTrie(TProduit tab[], int taille, bool Lu, bool restaure)
{
    if ( ( Lu == true) || (restaure == true) )
    {
        afficheProduits(tab, taille);
    }
    else
        afficheErreurAffichage();
}

//Déclaration de la directive qui va afficher les produits par poids
void affichageIndex (TProduit tabPrdt[], TIndex_Poids tabIndex[], int taille)
{
    tracerCadreDynamique();
    saisieXY("*** Affichage de la liste des produits [par l’index] ***",59, 10,  9);
    saisieXY("[             NOM              ]  [    PAYS      ] -- [JJ/MM/AAAA  a HH (h)] -- [Poids(Kg)] -- [    CODE      ]", 31, 14, 10);
    for(int i = 0; i < taille; i++)
    {
        unsigned int ind = tabIndex[i].Position;
        saisieXY(i + 1, 26, 16 + i, 3);
        saisieXY(". [                              ]  [              ] -- [  /  /      a    (h)] -- [     (Kg)] -- [              ]", 29, 16 + i, 3);
        saisieXY(tabPrdt[ind].Nom, 42, 16 + i, 3);
        saisieXY(tabPrdt[ind].Pays_Origine, 68, 16 + i, 3);
        saisieXY(tabPrdt[ind].Jour_Fabric, 86, 16 + i, 3);
        saisieXY(tabPrdt[ind].Mois_Fabric, 89, 16 + i, 3);
        saisieXY(tabPrdt[ind].An_Fabric, 92, 16 + i, 3);
        saisieXY(tabPrdt[ind].Heure_Fabric, 100, 16 + i, 3);
        saisieXY(tabPrdt[ind].Poids, 114, 16 + i, 3);
        saisieXY(tabPrdt[ind].Code, 131, 16 + i, 3);
        cout << endl;
    }
    apresAffichageRetourTableau();
}


//Déclaration de la fonction qui va affciher les produits par index(poids)
void affichageTableauIndexTrie (TProduit tabPrdt[], TIndex_Poids tabIndex[], int taille, bool indexTrie)
{
    if ( indexTrie == true)
    {
        affichageIndex(tabPrdt, tabIndex, taille);
        apresAffichageRetourTableau();
    }
    else
        afficheErreurAffichage();
}




