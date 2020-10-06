#ifndef GESTIONLISTESIMPLE_H_INCLUDED
#define GESTIONLISTESIMPLE_H_INCLUDED

#include "GestionTableau.h"

/**
 * \struct TLS_Produit
 * \brief Type caract�risant un produit dans la gestion par liste simplement chain�
 *
 *TLS_Produit est un type pour la gestion des produits
 */
 struct TLS_Produit
 {
     char Nom[50];
     char Pays_Origine[30];
     unsigned int An_Fabric;
     short int Mois_Fabric;
     short int Jour_Fabric;
     short int Heure_Fabric;
     unsigned int Poids; /*Cl� multiple :recherche index�*/
     char Code[70];
     TLS_Produit * suivant; /*Pointeur sur l'�l�ment suivant*/
 };



 //Prototype de la fonction qui va permettre d afficher un message d'erreur lorsque la cr�ation d'un TLS_Produit n'aura pas reussi
/**
 *\fn void afficheErreurAllocationPile();
 *\brief fonction qui va permettre dafficher un message d'erreur lorsque la cr�ation d'un TLS_Produit n'aura pas reussi
 *\param Ne prend rien en param�tre
 *\return Ne renvoie rien puisqu'il s'agit d'une proc�dure
 */
void afficheErreurAllocationMemoire();


 //Prototype de la fonction qui va permettre d afficher un message d'erreur lorsque la pile sera vide
/**
 *\fn void afficheErreurPileVide();
 *\brief fonction qui de la fonction qui va permettre d afficher un message d'erreur lorsque la pile sera vide
 *\param Ne prend rien en param�tre
 *\return Ne renvoie rien puisqu'il s'agit d'une proc�dure
 */
void afficheErreurPileVide();


 //Prototype de la fonction qui va permettre d afficher un message d'erreur lorsque la pile sera vide
/**
 *\fn void afficheErreurSauvegardeTLS();
 *\brief fonction qui de la fonction qui va permettre d afficher un message d'erreur lorsque la pile sera vide lors d'une sauvegarde
 *\param Ne prend rien en param�tre
 *\return Ne renvoie rien puisqu'il s'agit d'une proc�dure
 */
void afficheErreurSauvegardeTLS();


 //Prototype de la fonction qui va afficher une erreur si le tri n'est pas possible dans la gestion par liste simplement chain�
/**
 *\fn void afficheErreurTriTLS();
 *\brief fonction qui de la fonction qui va afficher une erreur si le tri n'est pas possible dans la gestion par liste simplement chain�
 *\param Ne prend rien en param�tre
 *\return Ne renvoie rien puisqu'il s'agit d'une proc�dure
 */
void afficheErreurTriTLS();


 //Prototype de la fonction qui va permettre d afficher un message d'erreur lorsqu'il y aune erreur lors de la restauration
/**
 *\fn void afficheErreurRestaurationTLS();
 *\brief fonction qui de la fonction qui va permettre d afficher un message d'erreur lorsqu'il ya une erreur lors de la restauration
 *\param Ne prend rien en param�tre
 *\return Ne renvoie rien puisqu'il s'agit d'une proc�dure
 */
void afficheErreurRestaurationTLS();


 //Prototype de la fonction qui va d'affecter les valeur d'un produit � un TLS_Produit
/**
 *\fn void affectationPrdtTLS_Prdt(TProduit prdt, TLS_Produit ** elmtListe);
 *\brief fonction qui va permettre d'affecter les valeur d'un produit � un TLS_Produit
 *\param Prend en param�tre un produit et, la reference sur un element de la liste(l'�l�ment danslequel on veut affecter la valeur du produits)
 *\return Ne renvoie rien puisqu'il s'agit d'une proc�dure
 */
void affectationPrdtTLS_Prdt(TProduit prdt, TLS_Produit  *&elmtListe);


 //Prototype de la fonction qui va d'affecter les valeur d'un type TLS_Produits � un type TProduit
/**
 *\fn void affectationTLSPrdt(TLS_Produit *&elmtListe,  TProduit &prdt);
 *\brief fonction qui va permettre d'affecter les valeur d'un type TLS_Produits � un type TProduit
 *\param Prend en param�tre un produit et, la reference sur un element de la liste(l'�l�ment danslequel on veut affecter la valeur du produits)
 *\return Ne renvoie rien puisqu'il s'agit d'une proc�dure
 */
void affectationTLSPrdt(TLS_Produit elmtListe,  TProduit &prdt);


 //Prototype de la fonction qui va d'affecter les valeur d'un type TLS_Produits � un type TProduit
/**
 *\fn void affectatioPteurTLS(TLS_Produit * elementPile,  TLS_Produit &prdt);
 *\brief fonction qui va permettre d'affecter les valeur d'un pointeur sur un type TLS_Produit � un type TLS_Produits
 *\param Prend en param�tre un produit (le produit � modifier) et un pointeur sur un type TLS_Produit(l'�l�ment contenant la valeur � affecter)
 *\return Ne renvoie rien puisqu'il s'agit d'une proc�dure
 */
void affectationPteurTLS(TLS_Produit* elementPile,  TLS_Produit &prdt);


 //Prototype de la fonction qui va permettre de cr�er une pile vide
/**
 *\fn TLS_Produit* creerPileVide();
 *\brief fonction qui va permettre de creer une pile ne contenant aucun �l�ment
 *\param Ne prend rien en param�tre
 *\return Renvoie un pointeur sur un TLS_Produit(Pile)
 */
TLS_Produit* creerPileVide();


 //Prototype de la fonction qui va permettre de tester si une pile existante est vide
/**
 *\fn bool testPileVide(TLS_Produit* Pile);
 *\brief fonction qui va permettre de testet si une pile est vide
 *\param Prend en param�tre un pointeur sur TLS_Produit (Pile)
 *\return Renvoie un bool�en indiquant si la pile est vide ou non
 */
bool testPileVide(TLS_Produit* Pile);


//Prototype de la fonction qui va permettre d'ajouter un nouvel �l�ment dans la pile
/**
 *\fn TLS_Produit* AjouterElmtPile(TLS_Produit* Pile, TProduit elmtAAjouter);
 *\brief fonction qui va permettre d'ajouter un nouvel �l�ment dans la pile
 *\param Prend en param�tre un pointeur sur TLS_Produit (Pile) et un TProduit(un �l�ment)
 *\return Renvoie un pointeur sur un TLS_Produit (Pile non vide)
 */
TLS_Produit* ajouterElmtPile(TLS_Produit* Pile, TProduit elmtAAjouter);


//Prototype de la fonction qui contiend l'op�ration de suppression d'un �l�ment � la pile(D�piler)
/**
 *\fn TLS_Produit* OperationSuppressionTLS(TLS_Produit* Pile);
 *\brief fonction qui g�re l'op�ration de suppression d'un �l�ment � la pile(D�piler)
 *\param Prend en param�tre un pointeur sur TLS_Produit (Pile)
 *\return Renvoie un pointeur sur un TLS_Produit (Pile avec un �l�ment )
 */
TLS_Produit* OperationSuppressionTLS(TLS_Produit* Pile);


//Prototype de la fonction qui g�re l'op�ration de suppression d'un �l�ment � la pile(D�piler)
/**
 *\fn void gestionSuppressionTLS(TLS_Produit* &Pile);
 *\brief fonction qui g�re l'op�ration de suppression d'un �l�ment � la pile(D�piler)
 *\param Prend en param�tre la r�f�rence sur un pointeur de TLS_Produit (Pile)
 *\return Ne renvoie rein puisqu'il s'agit d'une proc�dure
 */
void gestionSuppressionTLS(TLS_Produit* &Pile);


//Prototype de la fonction qui va permettre de demander � l'utilisateur si il veut continuer
/**
 *\fn  bool vouloirContinuer();
 *\brief fonction qui va permettre de demander � l'utilisateur si il veut continuer
 *\param Ne prend rien en param�tres
 *\return Renvoie un bool
 */
 bool vouloirContinuer();


//Prototype de la fonction qui va g�rer la r�cup�ration des informations d'une liste de produits
/**
 *\fn void gestionRecuperationTLS_prdt(TLS_Produit* &Pile);
 *\brief fonction qui va g�rer la r�cup�ration des informations d'une liste de produits
 *\param Prend en param�tre la r�f�rence sur un pointeur de type TLS_Produit (Pile)
 *\return Renvoie un void
 */
void gestionRecuperationTLS_prdt(TLS_Produit* &Pile);


//Prototype de la fonction qui va permettre d'afficher une pile
/**
 *\fn void afficherTLS_Produit(TLS_Produit* Pile);
 *\brief fonction qui va permettre d'afficher la liste des produits
 *\param Prend en param�tre un pointeur sur TLS_Produit (Pile)
 *\return Renvoie un pointeur sur un TLS_Produit (Pile non vide)
 */
void afficherTLS_Produit(TLS_Produit* Pile);


//Prototype de la fonction qui va g�rer l'affichage des TLS_Produits
/**
 *\fn void afficheListeTLS_Prdt(TLS_Produit* Pile, bool Lu, bool restaure);
 *\brief fonction qui va g�rer l'affichage des TLS_Produits
 *\param Prend en param�tre un pointeur sur TLS_Produit (Pile), bool Lu(Pour savoir si les ont �t� lue) et bool restaure(Pour savoir si les ont �t� restaure)
 *\return Ne renvoie rien puisqu'il s'agit d'une proc�dure
 */
void afficheListeTLS_Prdt(TLS_Produit* Pile, bool Lu, bool restaure);


//Prototype de la fonction qui va permettre de supprimer un �l�ment de la pile(en en�te)
/**
 *\fn TLS_Produit* supprimerElmtPile(TLS_Produit* Pile);
 *\brief fonction qui va permettre de supprimer un �l�ment de la pile
 *\param Prend en param�tre un pointeur sur TLS_Produit (Pile)
 *\return Renvoie un pointeur sur un TLS_Produit (Pile)
 */
TLS_Produit* supprimerElmtPile(TLS_Produit* Pile);


//Prototype de la fonction qui va permettre de supprimer un �l�ment de la pile(en en�te)
/**
 *\fn TLS_Produit renvoieTetePile(TLS_Produit* Pile);
 *\brief fonction qui va permettre de renvoyer l'�l�ment en t�te de pile
 *\param Prend en param�tre un pointeur sur TLS_Produit (Pile)
 *\return Renvoie un TLS_Produit (�l�ment en t�te de pile)
 */
TLS_Produit renvoieTetePile(TLS_Produit* Pile);



//Prototype de la fonction qui va permettre de calculer la taille de la pile
/**
 *\fn int taillePile(TLS_Produit* Pile);
 *\brief fonction qui va permettre de calculer la taille d'une pile
 *\param Prend en param�tre un pointeur sur TLS_Produit (Pile)
 *\return Renvoie un int (la taille de la pile)
 */
int taillePile(TLS_Produit* Pile);


//Prototype de la fonction qui va r�cup�rer le nom des fichiers dans la gestion par liste simplement chain�
/**
 *\fn char * recupereFichierTLS();
 *\brief fonction qui va r�cup�rer le nom des fichiers
 *\param Aucun param�tre
 *\return Renvoie le nom du fichier (sous forme de pointeur sur des caract�res)
 */
char * recupereFichierTLS();

//Prototype de la fonction qui va sauvegarder les produits dans le fichier
/**
 *\fn void sauvegarderPrdtTLS(TLS_Produit * Pile, bool Lu, bool restaure));
 *\brief fonction qui va sauvergarder les produits dans la gestion par liste simplement chain�
 *\param prend en param�tre une Pile de produits, bool Lu(Pour savoir si la Pile a ete lu) et bool restaure(Pour savoir si la Pile a ete restaure)
 *\return Ne renvoie rien car il s'agit d'une proc�dure
 */
void sauvegarderPrdtTLS(TLS_Produit * Pile, bool Lu, bool restaure);


////Prototype de la fonction qui effectue le travail dans le fichier lors de la restauration d'une liste de produit
/**
 *\fn void operationRestaurationTLS(TLS_Produit* &Pile, char nomFichier[90]);
 *\brief fonction qui effectue le travail dans le fichier lors de la restauration d'une liste de prosuits
 *\param prend en param�tre une pile de produits et le nom du fichier
 *\return Ne renvoie rien
 */
void operationRestaurationTLS(TLS_Produit* &Pile, char nomFichier[90]);


//Prototype de la fonction qui va charger les produits enregistr�s dans le fichier
/**
 *\fn void restaurerPrdtTLS(TLS_Produit* &Pile);
 *\brief fonction qui va charger les produits enregistr�s dans le fichier
 *\param prend en param�tre la Pile
 *\return Ne renvoie rien
 */
void restaurerPrdtTLS(TLS_Produit* &Pile);



//Prototype de la fonction qui va permttre de charger les �l�ments d'une Pile dans un tableau
/**
 *\fn void chargerPileTableau(TLS_Produit * Pile, TProduit tab[]);
 *\brief fonction qui va permttre de charger les �l�ments d'une Pile dans un tableau
 *\param prend en param�tre la Pile, et le tableau de produit � charger
 *\return Ne renvoie rien
 */
void chargerPileTableau(TLS_Produit * Pile, TProduit tab[]);


//Prototype de la fonction qui va permttre de trier les TLS_Prodiuts par ordree alphab�tique(pays et noms)
/**
 *\fn void triAlphabetiqueTLS(TLS_Produit * &Pile, bool Lu, bool restaure);
 *\brief fonction qui va permettre de trier les TLS_Prodiuts par ordre alphab�tique (pay, nom)
 *\param prend en param�tre la Pile, bool Lu (pour savoir si la liste a �t� lu) et bool restaure(si elle provient d'un fichier)
 *\return Ne renvoie rien
 */
void TriAlphabetiqueTLS(TLS_Produit * &Pile, bool Lu, bool restaure);


//Prototype de la fonction qui va permttre de trier les TLS_Prodiuts par ordree alphab�tique(pays et noms)
/**
 *\fn void triProduitDateTLS(TLS_Produit * &Pile, bool Lu, bool restaure);
 *\brief fonction qui va permettre de trier les TLS_Prodiuts par date de fabrication (ann�e, mois, jours)
 *\param prend en param�tre la Pile, bool Lu (pour savoir si la liste a �t� lu) et bool restaure(si elle provient d'un fichier)
 *\return Ne renvoie rien
 */
void TriProduitDateTLS(TLS_Produit * &Pile, bool Lu, bool restaure);


#endif // GESTIONLISTESIMPLE_H_INCLUDED
