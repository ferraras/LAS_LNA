#include "Championnat.h"
#include "Match.h"
#include <iostream>

using namespace std;

Championnat::Championnat()
{
    this->nom = "a l'amiable";
}

Championnat::Championnat(string nom)
{
    this->nom = nom;
}

void Championnat::ajouterEquipe(Equipe equipe)
{
    this->equipes.push_back(equipe);
}

void Championnat::agenderMatch(Match match)
{
    this->matches.push_back(match);
}
void Championnat::jouerMatch(short ID1,short ID2)
{
     for (list<Match>::iterator it=matches.begin(); it != matches.end(); ++it)
    {
        if((it->hote.ID == ID1 && it->invite.ID == ID2)||(it->hote.ID == ID2 && it->invite.ID == ID1))
        {
            it->generateurScore();
        }
    }

}
void Championnat::reinitialiser()
{
    //reinitialiser les match
    for (list<Match>::iterator it=matches.begin(); it != matches.end(); ++it)
    {
       it->reset();
    }
    //vider liste equipe
    equipes.clear();

    //vider les equipes
    matches.clear();

}
void Championnat::afficherEquipes()
{
    for (list<Equipe>::iterator it=equipes.begin(); it != equipes.end(); ++it)
    {
        it->afficher();
    }

}
void Championnat::afficherMatchesJoues()
{
    for (list<Match>::iterator it=matches.begin(); it != matches.end(); ++it)
    {
        if(it->termine==true)
       {
            it->afficherScore();
       }
    }
}


Championnat::~Championnat()
{
    //dtor
}
