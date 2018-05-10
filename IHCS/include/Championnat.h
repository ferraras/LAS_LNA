#ifndef CHAMPIONNAT_H
#define CHAMPIONNAT_H

#include <list>
#include <string>
#include "Match.h"
#include "Equipe.h"
using namespace std;

class Championnat
{
    public:
        //Constructeurs
        Championnat();
        Championnat(string);
        virtual ~Championnat();

        //Méthodes
        void ajouterEquipe(Equipe);
        void agenderMatch(Match);
        void jouerMatch(short,short);
        void reinitialiser();
        void afficherEquipes();
        void afficherMatchesJoues();

    protected:

    private:
        //Attributs
        list<Match> matches;
        list<Equipe> equipes;
        string nom;
};

#endif // CHAMPIONNAT_H
