#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
#include <vector>

#include "Type.h"
#include "AttackDamage.h"

using namespace std;

class Pokemon {
    protected:
        //Variables
        int type;
        string gender;
        string name;
        vector<AttackDamage*>array_attack;
        int16_t HP;
        int16_t maxHP;
        bool isKO = false;

    public:
        Pokemon();
        Pokemon(string name, int16_t type);
        Pokemon(string name, int16_t type, int maxHP);
        Pokemon(Pokemon const& pokemon);
        ~Pokemon();

        string toString() const;

        //Lorsqu'un Pokemon subis des domages
        void takeDamage(int amount);

        //Permet obtenir le name, genre et type d'un Pokemon
        string getName();
        string getGender();
        int16_t getType();

        //Obtenir les HP, HPmax d'un Pokemon
        int getHp();
        int getMaxHp();
        bool getKo();

        //Définie le nom, le genre et le type d'un Pokemon
        void setName(string newName);
        void setGender(string newGender);
        void setType(int16_t newtype);

        //Ajout d'une attaque a un Pokemon
        void addAttack(AttackDamage* newAttack);
        //Définie les HP d'un Pokemon
        void setHp(int newHP);
        //Définie les HP MAX d'un Pokemon
        void setMaxHp(int newHPMax);
        //Voir les attaques d'un Pokemon
        void viewAttack();
        void setKo(bool newKO);

        int16_t AttackPokemon(Pokemon* pokemon, AttackDamage* attack);
        void heal(int amount);
};


#endif