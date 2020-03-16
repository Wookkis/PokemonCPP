#ifndef PHYLLALI_H
#define PHYLLALI_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Phyllali : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Phyllali() : Pokemon("Phyllali", PLANTE){
            Pokemon::addAttack(new AttackPokemon("Assistance Energetique", PLANTE, 40));
            Pokemon::addAttack(new AttackPokemon("Lame-Feuille", PLANTE, 70));
        };
        ~Phyllali();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif