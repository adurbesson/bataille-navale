#ifndef REGLES_H
#define REGLES_H

class Regles{
private:
    int largGrille,
        hautGrille;
        
    bool navirePerso;
    
    
public:
    // constructeur / destructeurs
    Regles(int largGrille, int hautGrille,bool navirePerso);
    Regles();
  
    
    int getLarg();
    int getHaut();
    
    
    void setRegles(int largGrille, int hautGrille,bool navirePerso);//changer les regles
    
	bool testerRegles();
    
};


#endif
