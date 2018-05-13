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

void Equipe::engager(Joueur joueur)
{
    this->listJoueur.push_back(joueur);
    this->niveauEquipe+=joueur.getLevel();
}
void Equipe::afficher()
{
    cout << "nom : " << nom << endl;
    cout << "ID : " << ID << endl;
    cout << "niveau de l'equipe : " << this->niveauEquipe << endl;

    for (list<Joueur>::iterator it=listJoueur.begin(); it != listJoueur.end(); ++it)
    {
        cout << it->getNom() << "  ";
    }
    cout << endl << "Palmares : ";
    for (list<string>::iterator it=palmares.begin(); it != palmares.end(); ++it)
    cout << ' ' << *it;
    cout << endl << endl;
}

 void Equipe::addPalmares(string nomChampionnat)
 {
    this->palmares.push_front(nomChampionnat);
 }

 int Equipe::getNiveauEquipe()
 {
     return niveauEquipe;
 }

Equipe::~Equipe()
{
    //dtor
}


