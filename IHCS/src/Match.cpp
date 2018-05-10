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
    srand (time(NULL));
    scoreHote = hote.getNiveauEquipe()*(rand()%3);
    scoreInvite = invite.getNiveauEquipe()*(rand()%3);
    termine=true;
}

void Match::afficherScore()
{
    cout << "score " << this->hote.nom << " : " << this->scoreHote << endl;
    cout << "score " << this->invite.nom << " : " << this->scoreInvite << endl;
}

void Match::setScore(int score1, int score2)
{
    this->scoreHote = score1;
    this->scoreInvite = score2;
}
