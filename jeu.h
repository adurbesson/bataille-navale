#ifndef JEU_H
#define JEU_H
#include <iostream>
#include <fstream>
#include "regles.h"
#include "joueur.h"
#include "window.h"
#include "navire.h"
#include "case.h"
#include "grille.h"

class Jeu{
    
private:
	int nombreJoueurs,nombreJoueursHumains;
    Joueur *listeJoueurs;//nom,identifiant,ia,score,nombre bateaux coulés
    Regles Reg;//taille grille (on peut ajouter des trucs)
    //Grille *listeGrille;  // liste des grilles de chaque joueurs
    
    
    
    
public:
    Jeu();
    Jeu(size_t nombreJoueurs,size_t nombreJoueursHumains);
    ~Jeu();
    
    
  
    void creerRegles();//creation de regles avec  une boucle
    //void demarrer();//initialise la partie
    //void arreter();//libère la mémoire
   
   Regles getRegles();
   Joueur getJoueur(int idJoueur);
   int getJoueurs();
   int getJoueursHumains();
    void Enregistrer (std::string) const;
    void Lire (std::string);
    friend std::ostream& operator<< (std::ostream&, Jeu&);
    
    
    
    //bn-main
    
    void tirer(Window& fenetreDeTir, Grille grilleDeTir);
    void lancerPartie(Window& joueur, Grille& Joueur, Window& ia, Grille& IA);
   void placerNavire(Window& joueur, Grille& Joueur, Navire* aDeplacer);
   void selectionnerNavire(Window& flotte, Window& joueur, Grille& Flotte, Grille& Joueur);
   void init();
    
    
    
};


#endif
