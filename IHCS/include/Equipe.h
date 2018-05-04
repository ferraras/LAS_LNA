#ifndef EQUIPE_H
#define EQUIPE_H

#include <Joueur.h>
#include <string>
#include <list>
using namespace std;

class Equipe
{
    public:
        //Constructeurs
        Equipe();
        virtual ~Equipe();

        //Méthodes
        void Engager(Joueur joueur);
        void Afficher();

        //Attributs
        std::string nom;
        std::list<int> palmares;
        short ID;

    protected:

    private:
        //Attributs
        int niveauEquipe;
};

#endif // EQUIPE_H
