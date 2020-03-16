#include "Ceribou.h"
#include "AttackDamage.h"

#include <iostream>
#include <string>

using namespace std;

Type::Type() {}

Type::Type(Type* weekness, Type* resistance) {
    this->weekness = weekness;
    this->resistance = resistance;
}

Type::~Type() {}

string Type::toString() const {
    return name;
}

string Type::getName() {
    return name;
}

Type* Type::getWeekness() {
    return weekness;
}
Type* Type::getResistance() {
    return resistance;
}

void Type::setName(string newName) {
    name = newName;
}

void Type::setWeekness(Type* newType) {
    weekness = newType;
}

void Type::setResistance(Type* newType) {
    resistance = newType;
}