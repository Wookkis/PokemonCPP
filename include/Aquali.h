#ifndef AQUALI_H
#define AQUALI_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Aquali : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Aquali() : Pokemon("Aquali", EAU){
            Pokemon::addAttack(new AttackPokemon("Grand Nettoyage", EAU, 30));
            Pokemon::addAttack(new AttackPokemon("Hyper Tourbillon", EAU, 60));
        };
        ~Aquali();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif