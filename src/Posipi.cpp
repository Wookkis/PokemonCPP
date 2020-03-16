#include "Posipi.h"
#include "AttackDamage.h"

#include <iostream>
#include <string>
#include <Type.h>

using namespace std;

//Posipi

string Posipi::toString() const{
    return this->name + " de type Electrik à " + to_string(this->attacks.size()) + " attaques";
}
