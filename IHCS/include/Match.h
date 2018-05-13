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
        bool termine= false;
        string lieu;
        Equipe hote;
        Equipe invite;

        //methodes
        void generateurScore();
        void afficherScore();
        void reset();

    protected:

    private:
        //Attributs
        int scoreHote;
        int scoreInvite;
        string equipeGagnante;
};

#endif // MATCH_H
