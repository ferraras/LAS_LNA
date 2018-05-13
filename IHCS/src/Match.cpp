#include "Match.h"
#include "Equipe.h"
#include <iostream>
#include <time.h>
#include <random>
using namespace std;

Match::Match()
{
    this->lieu = nullptr;
    this->hote;
    this->invite;
}

Match::Match(string lieu,Equipe hote,Equipe invite)
{
   this->lieu = lieu;
   this->hote = hote;
   this->invite = invite;
}

Match::~Match()
{
    //dtor
}

void Match::generateurScore()
{
    if (termine == 0)
    {
        srand (time(NULL));
        scoreHote = (hote.getNiveauEquipe()*(rand()% 100)/1000);
        scoreInvite = (invite.getNiveauEquipe()*(rand()% 100)/1000);
        if(scoreHote > scoreInvite)
        {
            equipeGagnante = hote.nom;
        }
        else if (scoreHote < scoreInvite)
        {
            equipeGagnante = invite.nom;
        }
        else
        {
            equipeGagnante = "egualite";
        }
        termine=true;
    }
}

void Match::afficherScore()
{
    cout << "Lieu du match : " << lieu << endl;
    cout << "Equipe hote : " << hote.nom << endl;
    cout << "Equipe invitee : " << invite.nom << endl;
    cout << "match " << this->lieu << " equipe gagnante : " << this->equipeGagnante << " : " << this->scoreHote << " a " << this->scoreInvite  << endl;
}

void Match::reset()
{
    this->scoreHote=0;
    this->scoreInvite=0;
    this->termine=false;
    this->equipeGagnante="";
}
