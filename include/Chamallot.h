#ifndef CHAMALLOT_H
#define CHAMALLOT_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Chamallot : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Chamallot() : Pokemon("Chamallot", FEU){
            Pokemon::addAttack(new AttackPokemon("Roussir", FEU, 30));
            Pokemon::addAttack(new AttackPokemon("Fournaise", FEU, 40));
        };
        ~Chamallot();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif