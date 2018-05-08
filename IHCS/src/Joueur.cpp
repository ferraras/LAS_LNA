#include "Joueur.h"
#include <iostream>
#include <string>
using namespace std;


Joueur::Joueur()
{
    this->nom = "no name";
    this->nbButs = 0;
    this->level = 0;
}

Joueur::Joueur(string nom,int nbButs,int level)
{
    this->nom = nom;
    this->nbButs = nbButs;
    this->level = level;
}

Joueur::Joueur(const Joueur &source)
{
    this->nom = source.nom;
    this->nbButs = source.nbButs;
    this->level = source.level;
}

void Joueur::afficher()
{
    cout << "nom : " << nom << endl;
    cout << "nombre de buts : " << nbButs << endl;
    cout << "niveau : " << level << endl;
}

int Joueur::getLevel()
{
    return level;
}
string Joueur::getNom()
{
    return nom;
}
Joueur::~Joueur()
{
    //dtor
}
