#ifndef CERIBOU_H
#define CERIBOU_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Ceribou : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Ceribou() : Pokemon("Ceribou", PLANTE){
            Pokemon::addAttack(new AttackPokemon("Tranch'herbe ", PLANTE, 10));
            Pokemon::addAttack(new AttackPokemon("Attaque suprise", PLANTE, 30));
        };
        ~Ceribou();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif