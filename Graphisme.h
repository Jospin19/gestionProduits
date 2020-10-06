#ifndef GRAPHISME_H_INCLUDED
#define GRAPHISME_H_INCLUDED


//Prototype de la fonction qui permettra de se positionner sur la fen�tre Windows
/**
 *\fn void gotoxy(int, int)
 *\brief fonction qui permet de se positionner sur la fen�tre
 *
 *\param elle prend en param�tres 2 entiers
 *\return void il s'agit d'une proc�dure
 */
void gotoxy(int, int);


//Prototype de la fonction qui manipulera la couleur dans les fen�tres
/**
 *\fn void coloration(int)
 *\brief fonction qui manipulera la couleur des textes sur la fen�tre
 *
 *\param elle prend en param�tre 1 entier
 *\return void il s'agit d'une proc�dure
 */
void coloration(int = 7);


//Prototype de la fonction qui permettra de se positionner, fde saisir un texte et de le colorer d'une certaine couleur
/**
 *\fn void saisieXY(std::string saisie, int x, int y, int color = 7);
 *\brief fonction qui permettra de se positionner, de saisir un texte et de le colorer d'une certaine couleur
 *
 *\param elle prend en param�tres une chaine de caract�re, et 3 entiers
 *\return void il s'agit d'une proc�dure
 */
void saisieXY(std::string saisie, int x, int y, int color = 7);
//Surcharge de la fonction saisieXY
void saisieXY(char caractere, int x, int y, int color = 7);
//Surcharge de la fonction saisieXY
void saisieXY(int nombre, int x, int y, int color = 7);
//Surcharge de la fonction saisieXY
void saisieXY(unsigned int nombre, int x, int y, int color = 7);



//Prototype de la fonction qui va permettre de se positionner � un endroit pr�cis du document (Pour le cas des r�cup�ration au clavier)
/**
 *\fn void positionneCurseur(int x, int y, int color = 7);
 *\brief fonction qui va permettre de se positionner � un endroit pr�cis du document (Pour le cas des r�cup�ration au clavier)
 *
 *\param elle prend en param�tres x, y et la couleur(par d�faut grise)
 *\return void il s'agit d'une proc�dure
 */
 void positionneCurseur(int x, int y, int color = 7);



//Prototype de la fonction qui affichera un message d'erreur dans le choix d'un menu Principal
/**
 *\fn void afficheErreurMenuPrincipal()
 *\brief fonction qui affichera un message d'erreur dans le choix d'un menu Principal
 *
 *\param elle ne prend rien en param�tre
 *\return void il s'agit d'une proc�dure
 */
 void afficheErreurMenuPrincipal();


 //Prototype de la fonction qui affichera un message d'erreur dans le choix d'un menu Tableau
/**
 *\fn void afficheErreurMenuPrincipal()
 *\brief fonction qui affichera un message d'erreur dans le choix d'un menu Tableau
 *
 *\param elle ne prend rien en param�tre
 *\return void il s'agit d'une proc�dure
 */
 void afficheErreurMenuTableau();

 //Prototype de la fonction qui affichera un message d'erreur dans le choix d'un menu Simple
/**
 *\fn void afficheErreurMenuSimple()
 *\brief fonction qui affichera un message d'erreur dans le choix d'un menu Simple
 *
 *\param elle ne prend rien en param�tre
 *\return void il s'agit d'une proc�dure
 */
 void afficheErreurMenuSimple();


  //Prototype de la fonction qui affichera un message d'erreur dans le choix d'un menu Double
/**
 *\fn void afficheErreurMenuDouble()
 *\brief fonction qui affichera un message d'erreur dans le choix d'un menu Double
 *
 *\param elle ne prend rien en param�tre
 *\return void il s'agit d'une proc�dure
 */
 void afficheErreurMenuDouble();


//Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn void tracerCadre()
 *\brief fonction qui trace tous les cadres de l'application
 *
 *\param Ne prend  rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
 void tracerCadre();


 //Prototype qui va afficher un message pendant la progression d'une op�ration
/**
 *\fn void messageProgression(char message[100]);
 *\brief fonction qui va afficher un message pendant la progression d'une op�ration
 *
 *\param Ne prend  char message[100] qui est le message � afficher
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void messageProgression(char message[100]);


 //Prototype qui va afficher un message � la fin d'une op�ration
/**
 *\fn void messageFini(char message[100]);
 *\brief fonction qui va afficher un message � la fin d'une op�rationn
 *
 *\param Ne prend  char message[100] qui est le message � afficher
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void messageFini(char message[100]);

 //Prototype qui va afficher un message � la fin d'une op�ration dans la gestion par listes simplement chain�
/**
 *\fn void messageFiniTLS(char message[100]);
 *\brief fonction qui va afficher un message � la fin d'une op�rationn dans la gestion par liste simplement chain�
 *
 *\param Ne prend  char message[100] qui est le message � afficher
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void messageFiniTLS(char message[100]);



 //Prototype qui va afficher un message � la fin de la restauration
/**
 *\fn void messageFiniRestauration(int taille, int nombreFichier);
 *\brief fonction qui va afficher un message � la fin de la restauration
 *
 *\param Prend en param�tre la taille du tableau a charger et le nombre de produits dans le fichier
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void messageFiniRestauration(int taille, int nombreFichier);


//Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn void tracerCadreBarreChargement()
 *\brief fonction qui trace le cadre de la barre de chargement
 *
 *\param Ne prend  rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void tracerCadreBarreChargement();


//Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn void progressionChargement();
 *\brief fonction qui affiche la progression d'un chargement
 *
 *\param Prend en param�tre char messageEnCour[100] qui sera affich� pendant l'op�ration
 *\param Prend en param�tre char messageEnCour[100] qui sera affich� pendant l'op�ration
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
 void progressionChargement(char messageEnCour[100]);


 //Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn void tracerCadreDynamique();
 *\brief fonction qui trace le cadre d'affichage des produits
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
 void tracerCadreDynamique(int nbreProdts = 0);


 //Prototype qui va tracer le cadre dans toutes les pages de l'application
/**
 *\fn transitionMenus()
 *\brief fonction qui effectuera la transition entre les diff�rents menus de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
 void transitionMenus();


 //Prototype qui va afficher le menu principal de l'application
/**
 *\fn void afficheMenuPrincipal()
 *\brief fonction qui affiche le meenu principal de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
 void afficheMenuPrincipal();


 //Prototype qui va afficher le menu du sous menu gestion par tableau de l'application
/**
 *\fn void afficheMenuTableau()
 *\brief fonction qui affiche le menu du sous menu gestion par tableau de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void afficheMenuTableau();


//Prototype qui va afficher le menu du sous menu gestion par liste simplement chain�
/**
 *\fn void afficheMenuSimple()
 *\brief fonction qui affiche le menu du sous menu gestion par liste simplement chain� de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void afficheMenuSimple();


//Prototype qui va afficher le menu du sous menu gestion par liste doublement chain�
/**
 *\fn void afficheMenuDouble()
 *\brief fonction qui affiche le menu du sous menu gestion par liste doubelement chain� de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void afficheMenuDouble();


//Prototype qui va afficher le menu du sous menu A propos
/**
 *\fn void afficheMenuAPropos()
 *\brief fonction qui affiche le menu du sous menu A propos
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void afficheMenuAPropos();


//Prototype qui va recuperer le choix des menus
/**
 *\fn int recupereChoixMenus(int tailleMenu, int x, int y, int color = 10)
 *\brief qui va recuperer le choix des menus
 *
 *\param prend en param�tre int tailleMenu la taille max du menu, int x et int y pour le positionnement avec gotoxy et la couleur
 *\return Renvoie un int correspondant au choix recup�r�
 */
int recupereChoixMenus(int tailleMenu, int x, int y, int color = 10);


//Prototype qui va recuperer n importe quelle entree au clavier
/**
 *\fn void appuyerTouche(int tailleMenu, int x, int y, int color = 10)
 *\brief qui va recuperer le choix des menus
 *
 *\param Ne prend rien en param�tre
 *\return Renvoie void puisqu il s'agit d'une proc�dure
 */
void appuyerTouche();

//Prototype qui va diriger le menu de Gestion par tableaux
/**
 *\fn void dirigeMenuTableau()
 *\brief fonction qui gere le menu de Gestion par tableaux de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void dirigeMenuTableau();



//Prototype de la fonction qui permetra de rester sur le menu tableau apres une recharge
/**
 *\fn void resteMenuTableau()
 *\brief fonction qui permetra de rester sur le menu tableau apres une recharge
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void resteMenuTableau();

//Prototype qui va diriger le menu de Gestion par liste simplement chain�
/**
 *\fn void dirigeMenuSimple();
 *\brief fonction qui gere le menu de Gestion par liste simplement chain� de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void dirigeMenuSimple();

//Prototype de la fonction qui permetra de rester sur le menu tableau apres une recharge
/**
 *\fn void resteMenuTableau()
 *\brief fonction qui permetra de rester sur le Liste simplement chain� apres une recharge
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void resteMenuSimple();

//Prototype qui va diriger le menu de Gestion par liste doublement chain�
/**
 *\fn void dirigeMenuDouble();
 *\brief fonction qui gere le menu de Gestion par liste doublement chain� de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void dirigeMenuDouble();

//Prototype qui va diriger le menu A Propos
/**
 *\fn void dirigeMenuAPropos()
 *\brief fonction qui gere le menu A propos de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void dirigeMenuAPropos();

//Prototype qui va diriger vers les sous menus
/**
 *\fn void dirigeSousMenu()
 *\brief fonction qui dirige vers les sous menu principaux de l'application
 *
 *\param Ne prend  rie en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
 void dirigeSousMenuPrincipal();



//Prototype de l'utilitaire qui va diriger � l'int�rieur du menu principal
/**
 *\fn void utilitairePrincipal(int choice);
 *\brief fonction qui contient les liens vers tous les sous menus principaux de l'application
 *
 *\param prend en param�tre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void utilitairePrincipal(int choice);

//Prototype de l'utilitaire qui va diriger � l'int�rieur du menu tableau
/**
 *\fn void utilitaireTableau(int choice);
 *\brief fonction qui contient les liens vers tous les sous menus tableaux de l'application
 *
 *\param prend en param�tre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void utilitaireTableau(int choice);

//Prototype de l'utilitaire qui va diriger � l'int�rieur du menu de gestion par liste simplement chain�
/**
 *\fn void utilitaireSimple(int choice);
 *\brief fonction qui contient les liens vers tous les sous menus Simple de l'application
 *
 *\param prend en param�tre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void utilitaireSimple(int choice);


//Prototype de l'utilitaire qui va diriger � l'int�rieur du menu de gestion par liste doublement chain�
/**
 *\fn void utilitaireDouble(int choice);
 *\brief fonction qui contient les liens vers tous les sous menus Double de l'application
 *
 *\param prend en param�tre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void utilitaireDouble(int choice);

//Prototype de l'utilitaire qui va diriger � l'int�rieur du menu A propos
/**
 *\fn void utilitaireAPropos(int choice);
 *\brief fonction qui contient le lien qui redirigera vers le menu principal quelque soit la touche appuyee
 *
 *\param prend en param�tre le choix de l'utilisateur afin de le diriger
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void utilitaireApropos(int choice);


//Prototype de la fonction de gestion global du menu principal
/**
 *\fn void gestionMenuPrincipal();
 *\brief fonction qui contient toutes les fonctions concernant le menu principal
 *
 *\param ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void gestionMenuPrincipal();
//Prototype de la fonction de retour vers la gestion global du menu principal
/**
 *\fn void retourGestionMenuPrincipal();
 *\brief fonction qui contient toutes les fonctions concernant le menu principal
 *
 *\param ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void retourGestionMenuPrincipal();


//Prototype de la fonction de gestion global du menu Tableau
/**
 *\fn void gestionMenuTableau();
 *\brief fonction qui contient toutes les fonctions concernant le menu Tableau
 *
 *\param ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void gestionMenuTableau();
//Prototype de la fonction de retour vers la gestion global du menu Tableau
/**
 *\fn void retourGestionMenuTableau();
 *\brief fonction qui contient toutes les fonctions concernant le menu Tableau
 *
 *\param ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void retourGestionMenuTableau();


//Prototype de la fonction de gestion global du menu Simple
/**
 *\fn void gestionMenuSimple();
 *\brief fonction qui contient toutes les fonctions concernant le menu Simple
 *
 *\param ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void gestionMenuSimple();
//Prototype de la fonction de retour vers la gestion global du menu Simple
/**
 *\fn void retourGestionMenuTableau();
 *\brief fonction qui contient toutes les fonctions concernant le menu Simple
 *
 *\param ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void retourGestionMenuSimple();


//Prototype de la fonction de gestion global du menu Double
/**
 *\fn void gestionMenuDouble();
 *\brief fonction qui contient toutes les fonctions concernant le menu Double
 *
 *\param ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void gestionMenuDouble();


//Prototype de la fonction de retour vers la gestion global du menu Double
/**
 *\fn void retourGestionMenuDouble();
 *\brief fonction qui contient toutes les fonctions concernant le menu Double
 *
 *\param ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void retourGestionMenuDouble();



//Prototype de la fonction qui va afficher un  message pour retourner au menu tableau apres l'affichage des produits
/**
 *\fn void apresAffichageRetourTableau(char phrase[100]);
 *\brief fonction qui va afficher un  message pour retourner au menu tableau apres l'affichage des produits
 *
 *\param Ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void apresAffichageRetourTableau();



//Prototype de la fonction qui va afficher un  message pour retourner au menu tableau apres l'affichage des produits
/**
 *\fn void apresAffichageRetourSimple()();
 *\brief fonction qui va afficher un  message pour retourner au menu simple apres l'affichage des produits
 *
 *\param Ne prend rien en param�tre
 *\return Renvoie void puisqu'il s'agit d'une proc�dure
 */
void apresAffichageRetourSimple();

#endif // GRAPHISME_H_INCLUDED
