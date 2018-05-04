#ifndef MATCH_H
#define MATCH_H

#include <Equipe.h>
#include <string>
using namespace std;


class Match
{
    public:
        //Constructeurs
        Match();
        virtual ~Match();

        //Attributs
        string lieu;
        Equipe hote;
        Equipe invite;


    protected:

    private:
        //Attributs
        int scoreHote;
        int scoreInvite;
        bool termine;
};

#endif // MATCH_H
