#include "Equipe.h"
#include <string>
#include <list>
#include <iostream>
using namespace std;

Equipe::Equipe()
{
    this->nom = "no name";
    this->ID = 0;
    this->niveauEquipe = 0;
}
Equipe::Equipe(string nom,short ID)
{
    this->nom = nom;
    this->palmares = palmares;
    this->ID = ID;
    this->niveauEquipe = niveauEquipe;
}

void Equipe::engager(Joueur joueur1, Joueur joueur2, Joueur joueur3, Joueur joueur4, Joueur joueur5)
{
    tabJoueur[0] = joueur1;
    tabJoueur[1] = joueur2;
    tabJoueur[2] = joueur3;
    tabJoueur[3] = joueur4;
    tabJoueur[4] = joueur5;
    niveauEquipe = (joueur1.getLevel()+joueur2.getLevel()+joueur3.getLevel()+joueur4.getLevel()+joueur5.getLevel())/5;
}
void Equipe::afficher()
{
    cout << "nom : " << nom << endl;
    cout << "ID : " << ID << endl;
    cout << "niveau de l'equipe : " << niveauEquipe << endl;

    for (int i=0; i<5; i++)
    {
        cout << tabJoueur[i].getNom() << "  ";
    }
    cout << endl;

    for (std::list<string>::iterator it=palmares.begin(); it != palmares.end(); ++it)
    std::cout << ' ' << *it;
}

 void Equipe::addPalmares(string nomChampionnat)
 {
    palmares.push_front(nomChampionnat);
 }
Equipe::~Equipe()
{
    //dtor
}


