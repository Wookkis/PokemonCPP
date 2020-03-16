#ifndef ROUSSIL_H
#define ROUSSIL_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Roussil : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Roussil() : Pokemon("Roussil", FEU){
            Pokemon::addAttack(new AttackPokemon("Souffle-Feu", FEU, 30));
            Pokemon::addAttack(new AttackPokemon("Queue de Flammes", FEU, 60));
        };
        ~Roussil();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif