#include "joueur.h"
#include <iostream>
Joueur::Joueur(std::string nom, size_t identifiant,bool ia, Regles reg): fenetre(reg){
    this->score=0;
    this->identifiant=identifiant;
    this->nom=nom;
    this->ia=ia;
}

Joueur::Joueur(Regles reg) : fenetre(reg){

    this->score=0;
    this->identifiant=-1;
    this->nom="";
    this->ia=false;
}
Joueur::Joueur(){

    this->score=0;
    this->identifiant=-1;
    this->nom="";
    this->ia=false;
}



Joueur::~Joueur(){

}

std::string Joueur::getNom()const{
    return nom;
}

size_t Joueur::getScore()const{
    return this->score;
}

size_t Joueur::getId()const{
    return this->identifiant;
}

bool Joueur::getIA()const{return this->ia;}

void Joueur::setNom(std::string nouvNom){
   this->nom=nouvNom;
}

void Joueur::addScore(){
    this->score++;
}

void Joueur::setScore0(){
    this->score=0;
}

void Joueur::setIA(){
ia=true;}

void Joueur::setId(size_t id){
this->identifiant=id;
}

void Joueur::setGrille(){
Grille nouvgrille;
this->grille=nouvgrille;
}

void Joueur::setWindow(Regles regle){
Window nouvfenetre;
this->fenetre=nouvfenetre;
}

Grille Joueur::getGrille(){
return grille;}




