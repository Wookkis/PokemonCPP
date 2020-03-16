#ifndef TRAINER_INCLUDED_H
#define TRAINER_INCLUDED_H

#include <vector>
#include "Pokemon.h"

using namespace std;

class Trainer {
    private:
        vector<Pokemon*> list;

    public:
        Trainer();
        ~Trainer();

        int32_t addPokemon(Pokemon* pokemon);

        void printList();
        Pokemon* getPokemon(int pos);
        int32_t getSizeList();

        int16_t setPokemon(Pokemon* pokemon, int pos);
        Pokemon* first_Pokemon();
};

#endif