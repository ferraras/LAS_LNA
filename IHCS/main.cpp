#include <iostream>
#include "Joueur.h"
#include "Equipe.h"
#include "Match.h"
#include "Championnat.h"

using namespace std;

int main()
{
     //CREATION DE L'EQUIPE A
    Joueur joueurA1("joueurA1",7,8);
    Joueur joueurA2("joueurA2",7,10);
    Joueur joueurA3("joueurA3",7,8);
    Joueur joueurA4("joueurA4",7,10);
    Joueur joueurA5("joueurA5",7,9);

    Equipe equipeA("equipeA",0);
    equipeA.engager(joueurA1);
    equipeA.engager(joueurA2);
    equipeA.engager(joueurA3);
    equipeA.engager(joueurA4);
    equipeA.engager(joueurA5);
    equipeA.addPalmares("championnat bravoA");

    //CREATION DE L'EQUIPE B
    Joueur joueurB1("joueurB1",7,6);
    Joueur joueurB2("joueurB2",7,8);
    Joueur joueurB3("joueurB3",7,6);
    Joueur joueurB4("joueurB4",7,8);
    Joueur joueurB5("joueurB5",7,7);

    Equipe equipeB("equipeB",1);
    equipeB.engager(joueurB1);
    equipeB.engager(joueurB2);
    equipeB.engager(joueurB3);
    equipeB.engager(joueurB4);
    equipeB.engager(joueurB5);
    equipeB.addPalmares("championnat bravoB");


    //CREATION DE L'EQUIPE C
    Joueur joueurC1("joueurC1",7,4);
    Joueur joueurC2("joueurC2",7,6);
    Joueur joueurC3("joueurC3",7,4);
    Joueur joueurC4("joueurC4",7,6);
    Joueur joueurC5("joueurC5",7,5);

    Equipe equipeC("equipeC",2);
    equipeC.engager(joueurC1);
    equipeC.engager(joueurC2);
    equipeC.engager(joueurC3);
    equipeC.engager(joueurC4);
    equipeC.engager(joueurC5);
    equipeC.addPalmares("championnat bravoC");


    //CREATION DE L'EQUIPE D
    Joueur joueurD1("joueurD1",7,2);
    Joueur joueurD2("joueurD2",7,4);
    Joueur joueurD3("joueurD3",7,2);
    Joueur joueurD4("joueurD4",7,4);
    Joueur joueurD5("joueurD5",7,3);

    Equipe equipeD("equipeD",3);
    equipeD.engager(joueurD1);
    equipeD.engager(joueurD2);
    equipeD.engager(joueurD3);
    equipeD.engager(joueurD4);
    equipeD.engager(joueurD5);
    equipeD.addPalmares("championnat bravoD");

    //CREATION DES MATCHES
    Match match1("A vs B",equipeA,equipeB);
    Match match2("A vs C",equipeA,equipeC);
    Match match3("A vs D",equipeA,equipeD);
    Match match4("B vs C",equipeB,equipeC);
    Match match5("B vs D",equipeB,equipeD);
    Match match6("C vs D",equipeC,equipeD);


    //CREATION DU CHAMPIONNAT
    Championnat championnat("champ");

    championnat.ajouterEquipe(equipeA);
    championnat.ajouterEquipe(equipeB);
    championnat.ajouterEquipe(equipeC);
    championnat.ajouterEquipe(equipeD);

    championnat.agenderMatch(match1);
    championnat.agenderMatch(match2);
    championnat.agenderMatch(match3);
    championnat.agenderMatch(match4);
    championnat.agenderMatch(match5);
    championnat.agenderMatch(match6);

    championnat.afficherEquipes();
    championnat.jouerMatch(0,1);
    championnat.jouerMatch(0,2);
    championnat.jouerMatch(0,3);
    championnat.jouerMatch(1,2);
    championnat.jouerMatch(1,3);
    championnat.jouerMatch(2,3);
    championnat.afficherMatchesJoues();

    championnat.reinitialiser();
    championnat.afficherMatchesJoues();


    return 0;
}
