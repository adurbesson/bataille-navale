#include "regles.h"
#include <iostream>
#define HAUT_LARG_GRILLE_MIN 10


Regles::Regles(int largGrille, int hautGrille,bool navirePerso){
    this->largGrille=largGrille;
    this->hautGrille=hautGrille;
    this->navirePerso=navirePerso;
    
}
Regles::Regles(){
    this->largGrille=0;
    this->hautGrille=0;
    this->navirePerso=false;

}//initialise à 0



int Regles::getLarg(){return largGrille;}
int Regles::getHaut(){return hautGrille;}

    
void Regles::setRegles(int largGrille, int hautGrille,bool navirePerso){
    this->largGrille=largGrille;
    this->hautGrille=hautGrille;
    this->navirePerso=navirePerso;
}

bool Regles::testerRegles(){
    if(largGrille>HAUT_LARG_GRILLE_MIN &&
    hautGrille>HAUT_LARG_GRILLE_MIN)
    return true;
    return false;
}