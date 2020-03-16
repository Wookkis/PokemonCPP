#ifndef MAGNETI_H
#define MAGNETI_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Magneti : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Magneti() : Pokemon("Magneti", ELECTRIK){
            Pokemon::addAttack(new AttackPokemon("Miroi-Tir", ELECTRIK, 10));
            Pokemon::addAttack(new AttackPokemon("Boule Eclair", ELECTRIK, 20));
        };
        ~Magneti();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif