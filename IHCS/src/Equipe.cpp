#include "Equipe.h"
#include <string>
#include <list>
#include <iostream>
using namespace std;

Equipe::Equipe()
{
    this->nom = "no name";
    this->palmares;
    this->ID = 0;
    this->niveauEquipe = 0;
}
Equipe::Equipe(string nom,list<int> palmares,short ID,int niveauEquipe)
{
    this->nom = nom;
    this->palmares = palmares;
    this->ID = ID;
    this->niveauEquipe = niveauEquipe;
}

void Equipe::engager(Joueur)
{

}
void Equipe::afficher()
{
    cout << "nom : " << nom << endl;
    // je ne sais plus comment afficher une liste en c++
    //cout << "palmares : " << palmares. << endl;
    cout << "ID : " << ID << endl;
    cout << "niveau de l'equipe : " << niveauEquipe << endl;
}

Equipe::~Equipe()
{
    //dtor
}
