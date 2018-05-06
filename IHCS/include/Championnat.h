#ifndef CHAMPIONNAT_H
#define CHAMPIONNAT_H

#include <list>
#include <string>
#include "Match.h"
using namespace std;

class Championnat
{
    public:
        //Constructeurs
        Championnat();
        virtual ~Championnat();

        //Méthodes
        void ajouterEquipe();
        void agenderMatch();
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
