#include "Match.h"

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
