#ifndef ATTACKDAMAGE_H
#define ATTACKDAMAGE_H

#include <iostream>
#include <string>
#include <vector>
#include "Type.h"

using namespace std;

class AttackDamage {
    protected:
        //Variables
        string name;
        string type;
        int attackDamage_value;

    public:
        //Constucteurs
        AttackDamage();
        AttackDamage(string name, string type, int attackDamage_value);
        AttackDamage(AttackDamage const& attackDamage);
        ~AttackDamage();

        string toString() const;

        //Récupérer le nom, le type et la valeur d'une attaque
        string getName();
        string getType();
        int getAttackDamage_value();

        //Définie le nom, le type et la valeur d'une attaque
        void setName(string newName);
        void setType(string newType);
        void setAttackDamage_value(int newAttackDamage_value);
};

#endif