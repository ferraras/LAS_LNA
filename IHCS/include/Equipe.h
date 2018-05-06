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
        Equipe(string,list<int>,short,int);
        virtual ~Equipe();

        //Méthodes
        void engager(Joueur);
        void afficher();

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
