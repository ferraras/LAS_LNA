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
        Equipe(string,short);
        virtual ~Equipe();

        //Méthodes
        void engager(Joueur);
        void addPalmares(string);
        void afficher();
        int getNiveauEquipe();

        //Attributs
        string nom;
        list<string> palmares;
        short ID;


    protected:

    private:
        //Attributs
        int niveauEquipe=0;
        list<Joueur> listJoueur;

};

#endif // EQUIPE_H
