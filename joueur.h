
#ifndef JOUEUR_H
#define JOUEUR_H



#include <string>

#include "grille.h"
#include "window.h"

class Joueur{
private:
    std::string nom;//
    size_t score, identifiant; //nbr de bateau perdus, et score = nombre de parties gagnées par le joueur
	bool ia;//pour savoir si le joueur est une IA ou pas
	Grille grille;
	Window fenetre;

public:
    //constructeurs / destructeurs
 
    Joueur(std::string nom, size_t identifiant,bool ia, Regles reg);// on met batcoul et score a 0
    Joueur(Regles reg);
    Joueur();
    ~Joueur();
    //accesseurs en lecture
    std::string getNom()const;
    size_t getScore ()const;
    size_t getId()const;
    bool getIA()const;
    Grille getGrille();
    
    //accesseur en écriture
    
    void setNom(std::string nouvNom);
    void addScore();
    void setScore0();
    void setIA();
    void setId(size_t id);
    void setGrille();
    void setWindow(Regles regle);
  
    
    
};








#endif
