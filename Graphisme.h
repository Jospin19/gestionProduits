#ifndef GRAPHISME_H_INCLUDED
#define GRAPHISME_H_INCLUDED


//Prototype de la fonction qui permettra de se positionner sur la fenêtre Windows
/**
 *\fn void gotoxy(int, int)
 *\brief fonction qui permet de se positionner sur la fenêtre
 *
 *\param elle prend en paramètres 2 entiers
 *\return void il s'agit d'une procédure
 */
void gotoxy(int, int);


//Prototype de la fonction qui manipulera la couleur dans les fenêtres
/**
 *\fn void coloration(int)
 *\brief fonction qui manipulera la couleur des textes sur la fenêtre
 *
 *\param elle prend en paramètre 1 entier
 *\return void il s'agit d'une procédure
 */
void coloration(int = 7);


//Prototype de la fonction qui permettra de se positionner, fde saisir un texte et de le colorer d'une certaine couleur
/**
 *\fn void saisieXY(std::string saisie, int x, int y, int color = 7);
 *\brief fonction qui permettra de se positionner, de saisir un texte et de le colorer d'une certaine couleur
 *
 *\param elle prend en paramètres une chaine de caractère, et 3 entiers
 *\return void il s'agit d'une procédure
 */
void saisieXY(std::string saisie, int x, int y, int color = 7);
//Surcharge de la fonction saisieXY
void saisieXY(char caractere, int x, int y, int color = 7);
//Surcharge de la fonction saisieXY
void saisieXY(int nombre, int x, int y, int color = 7);
//Surcharge de la fonction saisieXY
void saisieXY(unsigned int nombre, int x, int y, int color = 7);



//Prototype de la fonction qui va permettre de se positionner à un endroit précis du document (Pour le cas des récupération au clavier)
/**
 *\fn void positionneCurseur(int x, int y, int color = 7);
 *\brief fonction qui va permettre de se positionner à un endroit précis du document (Pour le cas des récupération au clavier)
 *
 *\param elle prend en paramètres x, y et la couleur(par défaut grise)
 *\return void il s'agit d'une procédure
 */
 void positionneCurseur(int x, int y, int color = 7);



//Prototype de la fonction qui affichera un message d'erreur dans le choix d'un menu Principal
/**
 *\fn void afficheErreurMenuPrincipal()
 *\brief fonction qui affichera un message d'erreur dans le choix d'un menu Principal
 *
 *\param elle ne prend rien en paramètre
 *\return void il s'agit d'une procédure
 */
 void afficheErreurMenuPrincipal();


 //Prototype de la fonction qui affichera un message d'erreur dans le choix d'un menu Tableau
/**
 *\fn void afficheErreurMenuPrincipal()
 *\brief fonction qui affichera un message d'erreur dans le choix d'un menu Tableau
 *
 *\param elle ne prend rien en paramètre
 *\return void il s'agit d'une procédure
 */
 void afficheErreurMenuTableau();

 //Prototype de la fonction qui affichera un message d'erreur dans le choix d'un menu Simple
/**
 *\fn void afficheErreurMenuSimple()
 *\brief fonction qui affichera un message d'erreur dans le choix d'un menu Simple
 *
 *\param elle ne prend rien en paramètre
 *\return void il s'agit d'une procédure
 */
 void afficheErreurMenuSimple();


  //Prototype de la fonction qui affichera un message d'erreur dans le choix d'un menu Double
/**
 *\fn void afficheErreurMenuDouble()
 *\brief fonction qui affichera un message d'erreur dans le choix d'un menu Double
 *
 *\param elle ne prend rien en paramètre
 *\return void il s'agit d'une procédure
 */
 void afficheErreurMenuDouble();


//Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn void tracerCadre()
 *\brief fonction qui trace tous les cadres de l'application
 *
 *\param Ne prend  rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
 void tracerCadre();


 //Prototype qui va afficher un message pendant la progression d'une opération
/**
 *\fn void messageProgression(char message[100]);
 *\brief fonction qui va afficher un message pendant la progression d'une opération
 *
 *\param Ne prend  char message[100] qui est le message à afficher
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void messageProgression(char message[100]);


 //Prototype qui va afficher un message à la fin d'une opération
/**
 *\fn void messageFini(char message[100]);
 *\brief fonction qui va afficher un message à la fin d'une opérationn
 *
 *\param Ne prend  char message[100] qui est le message à afficher
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void messageFini(char message[100]);

 //Prototype qui va afficher un message à la fin d'une opération dans la gestion par listes simplement chainé
/**
 *\fn void messageFiniTLS(char message[100]);
 *\brief fonction qui va afficher un message à la fin d'une opérationn dans la gestion par liste simplement chainé
 *
 *\param Ne prend  char message[100] qui est le message à afficher
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void messageFiniTLS(char message[100]);



 //Prototype qui va afficher un message à la fin de la restauration
/**
 *\fn void messageFiniRestauration(int taille, int nombreFichier);
 *\brief fonction qui va afficher un message à la fin de la restauration
 *
 *\param Prend en paramètre la taille du tableau a charger et le nombre de produits dans le fichier
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void messageFiniRestauration(int taille, int nombreFichier);


//Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn void tracerCadreBarreChargement()
 *\brief fonction qui trace le cadre de la barre de chargement
 *
 *\param Ne prend  rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void tracerCadreBarreChargement();


//Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn void progressionChargement();
 *\brief fonction qui affiche la progression d'un chargement
 *
 *\param Prend en paramètre char messageEnCour[100] qui sera affiché pendant l'opération
 *\param Prend en paramètre char messageEnCour[100] qui sera affiché pendant l'opération
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
 void progressionChargement(char messageEnCour[100]);


 //Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn void tracerCadreDynamique();
 *\brief fonction qui trace le cadre d'affichage des produits
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
 void tracerCadreDynamique(int nbreProdts = 0);


 //Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn transitionMenus()
 *\brief fonction qui effectuera la transition entre les différents menus de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
 void transitionMenus();


 //Prototype qui va afficher le menu principal de l'application
/**
 *\fn void afficheMenuPrincipal()
 *\brief fonction qui affiche le meenu principal de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
 void afficheMenuPrincipal();


 //Prototype qui va afficher le menu du sous menu gestion par tableau de l'application
/**
 *\fn void afficheMenuTableau()
 *\brief fonction qui affiche le menu du sous menu gestion par tableau de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void afficheMenuTableau();


//Prototype qui va afficher le menu du sous menu gestion par liste simplement chainé
/**
 *\fn void afficheMenuSimple()
 *\brief fonction qui affiche le menu du sous menu gestion par liste simplement chainé de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void afficheMenuSimple();


//Prototype qui va afficher le menu du sous menu gestion par liste doublement chainé
/**
 *\fn void afficheMenuDouble()
 *\brief fonction qui affiche le menu du sous menu gestion par liste doubelement chainé de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void afficheMenuDouble();


//Prototype qui va afficher le menu du sous menu A propos
/**
 *\fn void afficheMenuAPropos()
 *\brief fonction qui affiche le menu du sous menu A propos
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void afficheMenuAPropos();


//Prototype qui va recuperer le choix des menus
/**
 *\fn int recupereChoixMenus(int tailleMenu, int x, int y, int color = 10)
 *\brief qui va recuperer le choix des menus
 *
 *\param prend en paramètre int tailleMenu la taille max du menu, int x et int y pour le positionnement avec gotoxy et la couleur
 *\return Renvoie un int correspondant au choix recupéré
 */
int recupereChoixMenus(int tailleMenu, int x, int y, int color = 10);


//Prototype qui va recuperer n importe quelle entree au clavier
/**
 *\fn void appuyerTouche(int tailleMenu, int x, int y, int color = 10)
 *\brief qui va recuperer le choix des menus
 *
 *\param Ne prend rien en paramètre
 *\return Renvoie void puisqu il s'agit d'une procédure
 */
void appuyerTouche();

//Prototype qui va diriger le menu de Gestion par tableaux
/**
 *\fn void dirigeMenuTableau()
 *\brief fonction qui gere le menu de Gestion par tableaux de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void dirigeMenuTableau();



//Prototype de la fonction qui permetra de rester sur le menu tableau apres une recharge
/**
 *\fn void resteMenuTableau()
 *\brief fonction qui permetra de rester sur le menu tableau apres une recharge
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void resteMenuTableau();

//Prototype qui va diriger le menu de Gestion par liste simplement chainé
/**
 *\fn void dirigeMenuSimple();
 *\brief fonction qui gere le menu de Gestion par liste simplement chainé de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void dirigeMenuSimple();

//Prototype de la fonction qui permetra de rester sur le menu tableau apres une recharge
/**
 *\fn void resteMenuTableau()
 *\brief fonction qui permetra de rester sur le Liste simplement chainé apres une recharge
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void resteMenuSimple();

//Prototype qui va diriger le menu de Gestion par liste doublement chainé
/**
 *\fn void dirigeMenuDouble();
 *\brief fonction qui gere le menu de Gestion par liste doublement chainé de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void dirigeMenuDouble();

//Prototype qui va diriger le menu A Propos
/**
 *\fn void dirigeMenuAPropos()
 *\brief fonction qui gere le menu A propos de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void dirigeMenuAPropos();

//Prototype qui va diriger vers les sous menus
/**
 *\fn void dirigeSousMenu()
 *\brief fonction qui dirige vers les sous menu principaux de l'application
 *
 *\param Ne prend  rie en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
 void dirigeSousMenuPrincipal();



//Prototype de l'utilitaire qui va diriger à l'intérieur du menu principal
/**
 *\fn void utilitairePrincipal(int choice);
 *\brief fonction qui contient les liens vers tous les sous menus principaux de l'application
 *
 *\param prend en paramètre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void utilitairePrincipal(int choice);

//Prototype de l'utilitaire qui va diriger à l'intérieur du menu tableau
/**
 *\fn void utilitaireTableau(int choice);
 *\brief fonction qui contient les liens vers tous les sous menus tableaux de l'application
 *
 *\param prend en paramètre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void utilitaireTableau(int choice);

//Prototype de l'utilitaire qui va diriger à l'intérieur du menu de gestion par liste simplement chainé
/**
 *\fn void utilitaireSimple(int choice);
 *\brief fonction qui contient les liens vers tous les sous menus Simple de l'application
 *
 *\param prend en paramètre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void utilitaireSimple(int choice);


//Prototype de l'utilitaire qui va diriger à l'intérieur du menu de gestion par liste doublement chainé
/**
 *\fn void utilitaireDouble(int choice);
 *\brief fonction qui contient les liens vers tous les sous menus Double de l'application
 *
 *\param prend en paramètre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void utilitaireDouble(int choice);

//Prototype de l'utilitaire qui va diriger à l'intérieur du menu A propos
/**
 *\fn void utilitaireAPropos(int choice);
 *\brief fonction qui contient le lien qui redirigera vers le menu principal quelque soit la touche appuyee
 *
 *\param prend en paramètre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void utilitaireApropos(int choice);


//Prototype de la fonction de gestion global du menu principal
/**
 *\fn void gestionMenuPrincipal();
 *\brief fonction qui contient toutes les fonctions concernant le menu principal
 *
 *\param ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void gestionMenuPrincipal();
//Prototype de la fonction de retour vers la gestion global du menu principal
/**
 *\fn void retourGestionMenuPrincipal();
 *\brief fonction qui contient toutes les fonctions concernant le menu principal
 *
 *\param ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void retourGestionMenuPrincipal();


//Prototype de la fonction de gestion global du menu Tableau
/**
 *\fn void gestionMenuTableau();
 *\brief fonction qui contient toutes les fonctions concernant le menu Tableau
 *
 *\param ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void gestionMenuTableau();
//Prototype de la fonction de retour vers la gestion global du menu Tableau
/**
 *\fn void retourGestionMenuTableau();
 *\brief fonction qui contient toutes les fonctions concernant le menu Tableau
 *
 *\param ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void retourGestionMenuTableau();


//Prototype de la fonction de gestion global du menu Simple
/**
 *\fn void gestionMenuSimple();
 *\brief fonction qui contient toutes les fonctions concernant le menu Simple
 *
 *\param ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void gestionMenuSimple();
//Prototype de la fonction de retour vers la gestion global du menu Simple
/**
 *\fn void retourGestionMenuTableau();
 *\brief fonction qui contient toutes les fonctions concernant le menu Simple
 *
 *\param ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void retourGestionMenuSimple();


//Prototype de la fonction de gestion global du menu Double
/**
 *\fn void gestionMenuDouble();
 *\brief fonction qui contient toutes les fonctions concernant le menu Double
 *
 *\param ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void gestionMenuDouble();


//Prototype de la fonction de retour vers la gestion global du menu Double
/**
 *\fn void retourGestionMenuDouble();
 *\brief fonction qui contient toutes les fonctions concernant le menu Double
 *
 *\param ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void retourGestionMenuDouble();



//Prototype de la fonction qui va afficher un  message pour retourner au menu tableau apres l'affichage des produits
/**
 *\fn void apresAffichageRetourTableau(char phrase[100]);
 *\brief fonction qui va afficher un  message pour retourner au menu tableau apres l'affichage des produits
 *
 *\param Ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void apresAffichageRetourTableau();



//Prototype de la fonction qui va afficher un  message pour retourner au menu tableau apres l'affichage des produits
/**
 *\fn void apresAffichageRetourSimple()();
 *\brief fonction qui va afficher un  message pour retourner au menu simple apres l'affichage des produits
 *
 *\param Ne prend rien en paramètre
 *\return Renvoie void puisqu'il s'agit d'une procédure
 */
void apresAffichageRetourSimple();

#endif // GRAPHISME_H_INCLUDED
