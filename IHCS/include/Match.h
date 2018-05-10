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
        Match(string,Equipe,Equipe);
        virtual ~Match();

        //Attributs
        string lieu;
        Equipe hote;
        Equipe invite;

        //methodes
        void generateurScore();
        void afficherScore();
        void setScore(int,int);

    protected:

    private:
        //Attributs
        int scoreHote;
        int scoreInvite;
        bool termine= false;
};

#endif // MATCH_H
