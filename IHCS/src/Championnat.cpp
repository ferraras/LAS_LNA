#include "Championnat.h"
#include "Match.h"

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
void Championnat::jouerMatch(short,short)
{
 // parcourir liste equipe comparer id
 // faire match avec les 2 equipes
}
void Championnat::reinitialiser()
{
    //mettre a 0 les scores de chaque equipe
     for (list<Match>::iterator it=matches.begin(); it != matches.end(); ++it)
    {
        it->setScore(0,0);
    }
    //vider liste equipe
    for (list<Equipe>::iterator it=equipes.end(); it != equipes.begin(); --it)
    {
       this->equipes.erase(it);
    }

    //vider liste match
    for (list<Match>::iterator it=matches.end(); it != matches.begin(); --it)
    {
       this->matches.erase(it);
    }
}
void Championnat::afficherEquipes()
{

}
void Championnat::afficherMatchesJoues()
{

}


Championnat::~Championnat()
{
    //dtor
}
