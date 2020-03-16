#include "AttackDamage.h"
#include <iostream>

using namespace std;

AttackDamage::AttackDamage(string name, string type, int attackDamage_value) {
    this->name = name;
    this->type = type;
    this->attackDamage_value = attackDamage_value;
}

AttackDamage::AttackDamage() {}
AttackDamage::AttackDamage(AttackDamage const& attackDamage) {}

string AttackDamage::toString() const {
    return "Attaque: \n Name : " + this->name + " \n Type: " + this->type + " \n Valeur: " +  to_string(this->attackDamage_value) + "";
}

string AttackDamage::getName() { 
    return name; 
}

string AttackDamage::getType() { 
    return type; 
}

int AttackDamage::getAttackDamage_value() {
    return attackDamage_value; 
}

void AttackDamage::setName(string newName) { 
    name = newName;
}

void AttackDamage::setType(string newType) { 
    type = newType;
}

void AttackDamage::setAttackDamage_value(int newAttackDamage_value) { 
    attackDamage_value = newAttackDamage_value; 
}