#include <iostream>
#include "Joueur.h"
#include "Equipe.h"
#include "Match.h"

using namespace std;

int main()
{
    Joueur joueur1("joueur1",7,4);
    Joueur joueur2("joueur2",7,6);
    Joueur joueur3("joueur3",7,4);
    Joueur joueur4("joueur4",7,6);
    Joueur joueur5("joueur5",7,5);

    Joueur joueur6("jj1",1,1);
    Joueur joueur7("jj2",2,3);
    Joueur joueur8("jj3",3,5);
    Joueur joueur9("jj4",4,7);
    Joueur joueur10("jj5",5,9);

    Equipe equipe1("equipe1",0);
    equipe1.engager(joueur1);
    equipe1.engager(joueur2);
    equipe1.engager(joueur3);
    equipe1.engager(joueur4);
    equipe1.engager(joueur5);
    equipe1.addPalmares("tournoisbrav");
    equipe1.addPalmares("tournouaaaaaa");
    equipe1.addPalmares("blabla");
    equipe1.afficher();

    cout<<endl;

    Equipe equipe2("equipe2",1);
    equipe2.engager(joueur6);
    equipe2.engager(joueur7);
    equipe2.engager(joueur8);
    equipe2.engager(joueur9);
    equipe2.engager(joueur10);
    equipe2.addPalmares("ligue des champions");
    equipe2.afficher();

    cout<<endl;


    Match match1("a vs b",equipe1,equipe1);
    match1.generateurScore();
    match1.afficherScore();


    return 0;
}
