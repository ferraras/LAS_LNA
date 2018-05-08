#include <iostream>
#include "Joueur.h"
#include "Equipe.h"

using namespace std;

int main()
{
    Joueur joueur1("joueur1",7,4);
    Joueur joueur2("joueur2",7,6);
    Joueur joueur3("joueur3",7,4);
    Joueur joueur4("joueur4",7,6);
    Joueur joueur5("joueur5",7,5);

    Equipe equipe1("equipe1",0);
    equipe1.engager(joueur1,joueur2,joueur3,joueur4,joueur5);
    equipe1.addPalmares("tournoisbrav");
    equipe1.addPalmares("tournouaaaaaa");
    equipe1.addPalmares("blabla");

    equipe1.afficher();
    return 0;
}
