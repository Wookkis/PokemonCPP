#ifndef AZUMARILL_H
#define AZUMARILL_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Azumarill : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Azumarill() : Pokemon("Azumarill", EAU){
            Pokemon::addAttack(new AttackPokemon("Cascade", EAU, 40));
            Pokemon::addAttack(new AttackPokemon("Bulles d'O", EAU, 60));
        };
        ~Azumarill();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif