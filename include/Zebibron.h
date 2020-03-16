#ifndef ZEBIBRON_H
#define ZEBIBRON_H

#include <iostream>
#include <vector>
#include "AttackDamage.h"
#include "Type.h"
#include "enum.h"
#include "Pokemon.h"

using namespace std;

class Zebibron : public Pokemon {
    protected:
        string name;
        int type;
        vector<AttackDamage*> attacks;

    public:
        Zebibron() : Pokemon("Zebibron", ELECTRIK){
            Pokemon::addAttack(new AttackPokemon("Attaque Imprudente", ELECTRIK, 20));
            Pokemon::addAttack(new AttackPokemon("Coup de Pied Ravageur", ELECTRIK, 30));
        };
        ~Zebibron();

        string toString() const;

        string getName();
        Type getType();

        void setName(string newName);
        void setType(int newType);
};

#endif