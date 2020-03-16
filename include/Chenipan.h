#ifndef CHENIPAN_H
#define CHENIPAN_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Chenipan : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Chenipan() : Pokemon("Chenipan", INSECTE){
            Pokemon::addAttack(new AttackPokemon("Charge", INSECTE, 10));
            Pokemon::addAttack(new AttackPokemon("Attaque Surprise", INSECTE, 30));
        };
        ~Chenipan();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif