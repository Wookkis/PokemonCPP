#include <iostream>

#include "Pokemon.h"
#include "enum.h"

using namespace std;

Pokemon::Pokemon() {}

Pokemon::Pokemon(string name, int16_t type) {
    this->name = name;
    this->type = type;
    this->maxHP = 20;
    this->HP = 20;
    this->isKO = false;
}

Pokemon::Pokemon(string name, int16_t type, int maxHp){
    this->name = name;
    this->type = type;
    this->maxHP = maxHP;
    this->HP = maxHP;
    this->isKO = false;
}

Pokemon::Pokemon(Pokemon const& pokemon){
    this->gender = pokemon.gender;
    this->name = pokemon.name;
    this->type = pokemon.type;
    this->array_attack = pokemon.array_attack;
    this->maxHP = pokemon.maxHP;
    this->HP = pokemon.HP;
    this->isKO = pokemon.isKO;
}

Pokemon::~Pokemon() {}

string Pokemon::toString() const {
    return "Pokemon: \n " + this->name + "\n";
}

string Pokemon::getName(){ 
    return name; 
}

string Pokemon::getGender() { 
    return gender;
}
int16_t Pokemon::getType() { 
    return type;
}

int Pokemon::getHp() {
    return HP;
}

int Pokemon::getMaxHp() {
    return maxHP;
}
bool Pokemon::getKo() {
    return isKO;
}

void Pokemon::setName(string newName) {
    name = newName;
}

void Pokemon::setGender(string newGender) {
    gender = newGender;
}

void Pokemon::setType(int16_t newType) {
    type = newType;
}

void Pokemon::addAttack(AttackDamage* attack) { 
    this->array_attack.push_back(attack); 
}

void Pokemon::viewAttack() {
	std::cout << "La liste des attaques de " + name + ": " << endl;
    int32_t size = this->array_attack.size();

    for (int i = 0; i < size; i++) {
        cout << array_attack[i]->toString() << "\n";
    }
}

void Pokemon::setHp(int newHP) { 
    HP = newHP;
}

void Pokemon::setMaxHp(int newHP) {
    HP = newHP;
}

void Pokemon::takeDamage(int amount) {
    HP -= amount;

    if(HP <= 0) {
        HP = 0;
        isKO = true;
    }
}

void Pokemon::heal(int amount) {
    HP += amount;
    isKO = false;
    if(HP > maxHP)
        HP = maxHP;
}

int16_t Pokemon::AttackPokemon(Pokemon* pokemon, AttackDamage* attack){
    if (!pokemon || !attack) return EXIT_FAILURE;

    int damageTaken = attack->getAttackDamage_value();

    switch (attack->getType()) {
        case FEU:
            if (pokemon->getType() == PLANTE)
                damageTaken *= 2;
            if (pokemon->getType() == EAU)
                damageTaken /= 2;
        break;

        case EAU:
            if (pokemon->getType() == FEU)
                damageTaken *= 2;
            if (pokemon->getType() == ELECTRIK)
                damageTaken /= 2;
        break;

        case PLANTE:
            if (pokemon->getType() == EAU)
                damageTaken *= 2;
            if (pokemon->getType() == FEU)
                damageTaken /= 2;
        break;

        case ELECTRIK:
            if (pokemon->getType() == EAU)
                damageTaken *= 2;
            if (pokemon->getType() == SOL)
                damageTaken /= 2;
        break;

        default:
            break;
    }
    
    pokemon->takeDamage(damageTaken);
    return pokemon->getHp();
}

void Pokemon::setKo(bool newKo){isKO = newKo;}