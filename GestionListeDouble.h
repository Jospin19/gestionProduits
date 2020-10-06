#ifndef GESTIONLISTEDOUBLE_H_INCLUDED
#define GESTIONLISTEDOUBLE_H_INCLUDED

/**
 * \struct TLD_Produit
 * \brief Type caract�risant un produit dans la gestion par liste doublement chain�
 *
 *TLD_Produit est un type pour la gestion des produits
 */
 struct TLD_Produit
 {
     std::string Nom;
     std::string Pays_Origine;
     unsigned int An_Fabric;
     short int Mois_Fabric;
     short int Jour_Fabric;
     short int Heure_Fabric;
     unsigned int Poids; /*Cl� multiple :recherche index�*/
     std::string Code;
     TLD_Produit * next; /*Pointeur sur l'�l�ment suivant*/
     TLD_Produit * previous; /*Pointeur sur l'�l�ment pr�c�dent*/

};

#endif // GESTIONLISTEDOUBLE_H_INCLUDED
