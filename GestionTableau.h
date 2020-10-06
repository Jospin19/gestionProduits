#ifndef GESTIONTABLEAU_H_INCLUDED
#define GESTIONTABLEAU_H_INCLUDED

/**
 * \struct TProduit
 * \brief Type caract�risant un produit dans la gestion par tableaux
 *
 *TProduit est un type pour la gestion des produits
 */
 struct TProduit
 {
     char Nom[50];
     char Pays_Origine[30];
     unsigned int An_Fabric;
     short int Mois_Fabric;
     short int Jour_Fabric;
     short int Heure_Fabric;
     unsigned int Poids; /*Cl� multiple :recherche index�*/
     char Code[70];
 };


 /**
 * \struct TIndex_Poids
 * \brief Type permettant de conserver le poids et les positions des �l�ments du tableau principal
 *
 *TIndex_Poids est un type pour la gestion des poids et des positions des produits
 */
 struct TIndex_Poids
 {
     int unsigned  Poids;
     int unsigned  Position;
 };


//Prototype qui va afficher une erreur lorsque la taille des noms sera sup�rieur � 50
/**
 *\fn void afficheErreurTailleNom();
 *\brief fonction qui va afficher une erreur lorsque la taille des noms entr�s seront sup�rieur a 50
 *\param Ne prend rien en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 *
 */
void afficheErreurTailleNom();


//Prototype qui va afficher une erreur lorsque la taille des codes sera sup�rieur � 70
/**
 *\fn void afficheErreurTailleCode();
 *\brief fonction qui va afficher une erreur lorsque la taille des codes entr�s seront sup�rieur a 70
 *\param Ne prend rien en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void afficheErreurTailleCode();


//Prototype qui va afficher une erreur lorsque la taille des pays sera sup�rieur � 30
/**
 *\fn void afficheErreurTaillePays();
 *\brief fonction qui va afficher une erreur lorsque la taille des pays entr�s seront sup�rieur a 30
 *\param Ne prend rien en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void afficheErreurTaillePays();


//Prototype qui va afficher une erreur lorsque les poids entr�s seront incorrects
/**
 *\fn void afficheErreurPoids();
 *\brief fonction qui va afficher une erreur lorsque les poids entr�s seront incorrects
 *\param Ne prend rien en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void afficheErreurPoids();


//D�claration de la fonction qui affichera un message d'erreur lorsque l'ann�e sera incorrecte
/**
 *\fn void afficheErreurAn();
 *\brief fonction qui va afficher une erreur lorsque les ann�es entr�s seront incorrects
 *\param Ne prend rien en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void afficheErreurAn();


//Prototype qui va afficher une erreur lorsque les Mois entr�s seront incorrects
/**
 *\fn void afficheErreurMois();
 *\brief fonction qui va afficher une erreur lorsque les Mois entr�s seront incorrects
 *\param Ne prend rien en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void afficheErreurMois();


//Prototype qui va afficher une erreur lorsque les jours entr�s seront incorrects
/**
 *\fn void afficheErreurJour();
 *\brief fonction qui va afficher une erreur lorsque les jours entr�s seront incorrects
 *\param Ne prend rien en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void afficheErreurJour();


//Prototype qui va afficher une erreur lorsque les heures entr�s seront incorrects
/**
 *\fn void afficheErreurHeure();
 *\brief fonction qui va afficher une erreur lorsque les heures entr�s seront incorrectes
 *\param Ne prend rien en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void afficheErreurHeure();



//Prototype de la fonction qui affichera un message d'erreur si le tri ne peut �te effectue
/**
 *\fn void afficheErreurTri();
 *\brief fonction qui affichera un message d'erreur si le tri ne peut �te effectue
 *
 *\param elle ne prend rien en param�tre
 *\return void il s'agit d'une proc�dure
 */
 void afficheErreurTri();


 //Prototype de la fonction qui affichera un message d'erreur si la sauvegarde des produits est impossible
/**
 *\fn void afficheErreurTri();
 *\brief fonction qui affichera un message d'erreur si la sauvegarde des produits est impossible
 *
 *\param elle ne prend rien en param�tre
 *\return void il s'agit d'une proc�dure
 */
 void afficheErreurSauvegarde();


  //Prototype de la fonction qui affichera un message d'erreur si l'affichages des produits est impossible
/**
 *\fn void afficheErreurAffichage();
 *\brief fonction qui affichera un message d'erreur si l'affichages des produits est impossible
 *
 *\param elle ne prend rien en param�tre
 *\return void il s'agit d'une proc�dure
 */
void afficheErreurAffichage();


//Prototype qui va controler le nom des produits lors de la r�cup�ration des info d'un produit
/**
 *\fn void controleNom(char chaine[50]);
 *\brief fonction qui va controler le nom des produits lors de la r�cup�ration des info d'un produit
 *\param Prend le nom en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void controleNom(char chaine[50]);


//Prototype qui va controler le code des produits lors de la r�cup�ration des info d'un produit
/**
 *\fn void controleCode(char chaine[70]);
 *\brief fonction qui va controler le code des produits lors de la r�cup�ration des info d'un produit
 *\param Prend le code en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void controleCode(char chaine[70]);


//Prototype qui va controler le pays des produits lors de la r�cup�ration des info d'un produit
/**
 *\fn void controlePays(char chaine[30]);
 *\brief fonction qui va controler le pays des produits lors de la r�cup�ration des info d'un produit
 *\param Prend le pays en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void controlePays(char chaine[30]);


//Prototype qui va controler le poids des produits lors de la r�cup�ration des info d'un produit
/**
 *\fn void controlePoids(unsigned int poids);
 *\brief fonction qui va controler le poids des produits lors de la r�cup�ration des info d'un produit
 *\param Prend le poids en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void controlePoids(unsigned int poids);


//Prototype qui va controler l'ann�e des produits lors de la r�cup�ration des info d'un produit
/**
 *\fn void controleAnne(unsigned int Annee);
 *\brief fonction qui va controler l'ann�e lors de la r�cup�ration des info d'un produit
 *\param Prend l'ann�e en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void controleAnne(unsigned int Annee);


//Prototype qui va controler le Mois lors de la r�cup�ration des info d'un produit
/**
 *\fn void controleMois(short int Mois);
 *\brief fonction qui va controler le jour lors de la r�cup�ration des info d'un produit
 *\param Prend le mois en param�tre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void controleMois(short int Mois);


//Prototype qui va controler le jour lors de la r�cup�ration des info d'un produit
/**
 *\fn void controleJour(short int Jour);
 *\brief fonction qui va controler le jour lors de la r�cup�ration des info d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void controleJour(short int Jour);


//Prototype qui va controler l'heure lors de la r�cup�ration des info d'un produit
/**
 *\fn void controleHeure(short int Heure);
 *\brief fonction qui va controler l'heure lors de la r�cup�ration des info d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void controleHeure(short int Heure);


//Prototype qui va r�cup�rer le nom d'un produit
/**
 *\fn char * recupereNomPdrt();
 *\brief fonction qui va r�cup�rer le nom d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un char * c'est � dire la premi�re adresse d'un tabelau de caracteres
 */
char * recupereNomPdrt();


//Prototype qui va r�cup�rer le Pays de fabrication d'un produit
/**
 *\fn char * recuperePaysPdrt();
 *\brief fonction qui va r�cup�rer le pays d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un char * c'est � dire la premi�re adresse d'un tabelau de caracteres
 */
char * recuperePaysPdrt();


//Prototype qui va r�cup�rer le code de fabrication d'un produit
/**
 *\fn char * recupereCodePdrt();
 *\brief fonction qui va r�cup�rer le code d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un char * c'est � dire la premi�re adresse d'un tabelau de caracteres
 */
char * recupereCodePdrt();


//Prototype qui va r�cup�rer le poids de fabrication d'un produit
/**
 *\fn unsigned int recuperePoidsPdrt();
 *\brief fonction qui va r�cup�rer le poids de fabrication d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un unsigned int
 */
unsigned int recuperePoidsPdrt();


//Prototype qui va r�cup�rer l'ann�e de fabrication d'un produit
/**
 *\fn unsigned int recupereAnPdrt();
 *\brief fonction qui va r�cup�rer l'ann�e de fabrication d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un unsigned int
 */
unsigned int recupereAnPdrt();


//Prototype qui va r�cup�rer le Mois de fabrication d'un produit
/**
 *\fn short int recupereMoisPdrt();
 *\brief fonction qui va r�cup�rer le Mois de fabrication d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un short int
 */
short int recupereMoisPdrt();


//Prototype qui va r�cup�rer le jour de fabrication d'un produit
/**
 *\fn short int recupereJourPdrt();
 *\brief fonction qui va r�cup�rer le jour de fabrication d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un short int
 */
short int recupereJourPdrt();


//Prototype qui va r�cup�rer l'heure de fabrication d'un produit
/**
 *\fn short int recupereHeurePdrt();
 *\brief fonction qui va r�cup�rer l'heure de fabrication d'un produit
 *\param Ne prend rien en parametre
 *\return Renvoie un short int
 */
short int recupereHeurePdrt();


//Prototype qui va r�cup�rer les informations d'un produit
/**
 *\fn bool gestionRecuperationPrdt(TProduit tableau[], int taille);
 *\brief fonction qui va r�cup�rer les informations d'un produit
 *\param prend en param�tre un tableau de produit et sa taille
 *\return Renvoie un booleen indiquant si le tableau est charg� ou pas
 */
void gestionRecuperationPrdt(TProduit tableau[], int taille);

//Prototype qui va affecter un produit � un autre
/**
 *\fn void affectation (TProduit &prdt2, TProduit &prdt1);
 *\brief fonction qui va affecter un produit � un autre
 *\param prend en param�tre un tableau de produit et sa taille
 *\return Ne renvoie rien
 */
void affectationProdt (TProduit &prdt2, TProduit &prdt1);


//Prototype qui va affecter un produit � un autre
/**
 *\fn void affectationIndex(TIndex_Poids &index2, TIndex_Poids index1);
 *\brief fonction qui va affecter un Index � un autre
 *\param prend en param�tre un tableau d Index et sa taille
 *\return Ne renvoie rien
 */
void affectationIndex(TIndex_Poids &index2, TIndex_Poids &index1);


//Prototype qui va permuter  deux produits
/**
 *\fn  void permutationProduit (TProduit prdt1, TProduit Prdt2);
 *\brief fonction qui va permuter  deux produits
 *\param prend en param�tre deux produits
 *\return Ne renvoie rien car il s'agit d'une proc�dure
 */
 void permutationProduit (TProduit prdt1, TProduit Prdt2);


 //Prototype de la fonction qui va trier mes produits par nom
/**
 *\fn void TriProduitNom(TProduit tab[], int taille, int pos);
 *\brief fonction qui va trier mes produits par pays
 *\param prend en param�tre un tableau de produit, sa taille et la position surlaquelle on veut commencer
 *\return Ne renvoie rien
 */
void TriProduitNom(TProduit tab[], int taille, int pos); //TriSelor(stable)


//Prototype de la fonction qui va trier mes produits par nom
/**
 *\fn void TriProduitNom(TProduit tab[], int taille, int pos);
 *\brief fonction qui va trier mes produits par nom
 *\param prend en param�tre un tableau de produit, sa taille et la position surlaquelle on veut commencer
 *\return Ne renvoie rien
 */
void TriProduitPays(TProduit tab[], int taille, int pos); //Tri bulle am�lior�(stable)


//Prototype de la fonction qui va trier mes produits par nom et par pays
/**
 *\fn void triAlphabetique (TProduit tab[], int taille, int pos, bool Lu, bool restaure);
 *\brief fonction qui va trier mes produits par nom et par pays
 *\param prend en param�tre un tableau de produit, sa taille, la position surlaquelle on veut commencer et bool Lu(Pour savoir si le tableau a ete lu) et bool restaure(Pour savoir si le tableau a ete restaure)
 *\return Renvoie un void
 */
void triAlphabetique (TProduit tab[], int taille, int pos, bool Lu, bool restaure);


//Prototype de la fonction qui charger le tableau des Index
/**
 *\fn void chargerTableauIndex(TProduit tab[], TIndex_Poids tabIndex, int taille);
 *\brief fonction qui va charger le tableau des Index
 *\param prend en param�tre un tableau de produit, sa taille et le tableau des index a charger
 *\return Ne renvoie rien
 */
void chargerTableauIndex(TProduit tab[], TIndex_Poids tabIndex, int taille);

//Prototype de la fonction qui trier mes produits par poids
/**
 *\fn void triTabIndex(TProduit tabPrdts[], TIndex_Poids tabIndex[], int taille, bool Lu, bool restaure);
 *\brief fonction qui va trier le tableau des index
 *\param prend en param�tre un tableau de produits et d'Index, sa taille et bool Lu(Pour savoir si le tableau a ete lu) et bool restaure(Pour savoir si le tableau a ete restaure)
 *\return Ne renvoie rien
 */
void triTabIndex(TProduit tabPrdts[], TIndex_Poids tabIndex[], int taille, bool Lu, bool restaure); //Tri par insertion s�quentiel(stable)


//Prototype de la fonction qui va trier mes produits par ann�e
/**
 *\fn void triProduitAnnne(TProduit tab[], int taille, int pos);
 *\brief fonction qui va trier mes produits par ann�e
 *\param prend en param�tre un tableau de produit, sa taille et la position surlaquelle on veut commencer
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void triProduitAnnne(TProduit tab[], int taille); //TriSelor Plus(stable)


//Prototype de la fonction qui va trier mes produits par mois
/**
 *\fn void triProduitMois(TProduit tab[], int taille, int pos);
 *\brief fonction qui va trier mes produits par mois
 *\param prend en param�tre un tableau de produit, sa taille et la position surlaquelle on veut commencer
 *\return Renvoie un void
 */
void triProduitMois(TProduit tab[], int taille); //tri bulle am�lior� (stable)


//Prototype de la fonction qui va trier mes produits par jour
/**
 *\fn void triProduitJour(TProduit tab[], int taille);
 *\brief fonction qui va trier mes produits par jours
 *\param prend en param�tre un tableau de produit, et sa taille
 *\return Renvoie un void car il s'agit d'une proc�dure
 */
void triProduitJour(TProduit tab[], int taille);  //Tri insertion dichotomique(stable)


//Prototype de la fonction qui va trier mes produits par jour
/**
 *\fn void triProduitDate(TProduit tab[], int taille, int pos, bool Lu, bool restaure);
 *\brief fonction qui va trier les produits par date (ann�e, mois et jours de fabrication);
 *\param prend en param�tre un tableau de produit, sa taille, la position sur laquelle il faudra commencer(pour les tri par mois et par jour) et bool Lu(Pour savoir si le tableau a ete lu) et bool restaure(Pour savoir si le tableau a ete restaure)
 *\return Renvoie un void
 */
void triProduitDate(TProduit tab[], int taille, bool Lu, bool restaure);


//Prototype de la fonction qui va r�cup�rer le nom des fichiers
/**
 *\fn char * recupereFichier();
 *\brief fonction qui va r�cup�rer le nom des fichiers
 *\param Aucun param�tre
 *\return Renvoie le nom du fichier (sous forme de pointeur sur des caract�res)
 */
char * recupereFichier();


//Prototype de la fonction qui va sauvegarder les produits dans le fichiers des fichiers
/**
 *\fn void sauvegarderPrdt(TProduit tab[], int taille, bool Lu, bool restaure);
 *\brief fonction qui va sauvergarder les produits
 *\param prend en param�tre un tableau de produits, sa tailleet bool Lu(Pour savoir si le tableau a ete lu) et bool restaure(Pour savoir si le tableau a ete restaure)
 *\return Ne renvoie rien car il s'agit d'une proc�dure
 */
void sauvegarderPrdt(TProduit tab[], int taille, bool Lu, bool restaure);


//Prototype de la fonction qui va compter les produits enregistr�s dans le fichier
/**
 *\fn int compterElemtFichier(char nomFichier[90]);
 *\brief fonction qui va compter les produits du fichier
 *\param prend en param�tre le nom du fichier fouiller
 *\return renvoie un int qui est le nombre d'�l�ments du fichier
 */
int compterElemtFichier(char nomFichier[90]);


////Prototype de la fonction qui effectue le travail dans le fichier lors de la restauration d'un tableau de produits
/**
 *\fn void operationRestauration(TProduit tab[], int taille)
 *\brief fonction qui effectue le travail dans le fichier lors de la restauration d'un tableau de produits
 *\param prend en param�tre un tableau de produit, sa taille et le nom du fichier
 *\return Ne renvoie rien
 */
void operationRestauration(TProduit tab[], int taille, char nomFichier[90]);


////Prototype de la fonction qui va afficher le message renseignant le nombre d'�l�ment restaur�
/**
 *\fn void ecrisNombreRestaure(int taille, nombreFichier)
 *\brief fonction qui va afficher le message renseignant le nombre d'�l�ment restaur�
 *\param prend en param�tre la taille du tableau et le nombre de produits pr�sent dans le fichier
 *\return Ne renvoie rien
 */
void ecrisNombreRestaure(int taille, int nombreFichier);


////Prototype de la fonction qui va afficher un message si la restauration est impossible
/**
 *\fn void afficheErreurRestauration();
 *\brief fonction qui va afficher un message si la restauration est impossible
 *\param Ne prend rien en param�tres
 *\return Ne renvoie rien
 */
void afficheErreurRestauration();


//Prototype de la fonction qui va charger les produits enregistr�s dans le fichier
/**
 *\fn void restaurerPrdt(TProduit tab[], int taille)
 *\brief fonction qui va charger les produits enregistr�s dans le fichier
 *\param prend en param�tre le tableau � utiliser(pour charger les information) et la taille du tableau
 *\return Ne renvoie rien
 */
void restaurerPrdt(TProduit tab[], int taille);


//Prototype de la fonction qui va afficher mes produits par nom et par pays
/**
 *\fn void afficheProduits(TProduit tab[], int taille)
 *\brief Directive qui affiche les produits
 *\param prend en param�tre un tableau de produit, et sa taille
 *\return Ne renvoie rien
 */
void afficheProduits(TProduit tab[], int taille);


//Prototype de la fonction qui va afficher mes produits par nom et par pays
/**
 *\fn void afficheTableauTrie (TProduit tab[], int taille);
 *\brief fonction qui va afficher les produits selon un ordre de tri (date, alphab�tique)
 *\param prend en param�tre un tableau de produit, sa taille  et bool Lu(Pour savoir si le tableau a ete lu) et bool restaure(Pour savoir si le tableau a ete restaure)
 *\return Ne renvoie rien
 */
void afficheTableauPrdtsTrie (TProduit tab[], int taille, bool Lu, bool restaure);


//Prototype de la fonction qui afficher les produits par index
/**
 *\fn void affichageIndex (TProduit tabPrdt[], TIndex_Poids tabIndex[], int taille);
 *\brief fonction qui va afficher les produits par index
 *\param prend en param�tre un tableau de produit, et sa taille
 *\return Ne renvoie rien car il s'agit d'une proc�dure
 */
void affichageIndex (TProduit tabPrdt[], TIndex_Poids tabIndex[], int taille);


//Prototype de la fonction qui va afficher mes produits par nom et par pays
/**
 *\fn void affichageTableauIndex (TProduit tabPrdt[], TIndex_Poids tabIndex[], int taille, bool Lu, bool restaure);
 *\brief fonction qui va afficher les produits par index(poids)
 *\param prend en param�tre un tableau de produit, sa taille  et bool indexTrie(Pour savoir si les produits ont ete trie par index)
 *\return Ne renvoie rien
 */
void affichageTableauIndexTrie (TProduit tabPrdt[], TIndex_Poids tabIndex[], int taille, bool indexTrie);



#endif // GESTIONTABLEAU_H_INCLUDED
