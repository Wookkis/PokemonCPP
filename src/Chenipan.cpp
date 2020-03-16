#include "Chenipan.h"
#include "AttackDamage.h"

#include <iostream>
#include <string>
#include <Type.h>

using namespace std;

//Chenipan

string Chenipan::toString() const{
    return this->name + " de type Insecte à " + to_string(this->attacks.size()) + " attaques";
}
