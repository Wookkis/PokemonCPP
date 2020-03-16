#ifndef POSIPI_H
#define POSIPI_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Posipi : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Posipi() : Pokemon("Posipi", ELECTRIK){
            Pokemon::addAttack(new AttackPokemon("Electro-Queue", ELECTRIK, 30));
            Pokemon::addAttack(new AttackPokemon("Boule Elek", ELECTRIK, 30));
        };
        ~Posipi();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif