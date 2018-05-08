#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
using namespace std;

class Joueur
{
    public:
        Joueur();
        Joueur(string nom,int nbButs,int level);
        Joueur(const Joueur &source);
        void afficher();
        int getLevel();
        string getNom();
        virtual ~Joueur();

    protected:

    private:
        std::string nom;
        int nbButs;
        int level;
};

#endif // JOUEUR_H
