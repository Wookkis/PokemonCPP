#include "Trainer.h"
    
using namespace std;

Trainer::Trainer() {}

int32_t Trainer::addPokemon(Pokemon* pokemon) {
    if (!pokemon) return EXIT_FAILURE;
    
    this->list.push_back(pokemon);
    return EXIT_SUCCESS;
}

void Trainer::printList() {
    int32_t size = this->list.size();
    
    for (int i = 0; i < size; i++){
        cout << this->list[i]->toString();
    }
}

Trainer::~Trainer() {
    int32_t size = this->list.size();

    for (int i = 0; i < size; i++) {
        delete this->list[i];
    }
}

int32_t Trainer::getSizeList() {
    return this->list.size();
}

Pokemon* Trainer::getPokemon(int pos) {
    return this->list[pos];
}

int16_t Trainer::setPokemon(Pokemon* pokemon, int pos) {
    if(!pokemon) return EXIT_FAILURE;
        
    this->list[pos] = pokemon;
    return EXIT_SUCCESS;
}

Pokemon* Trainer::first_Pokemon() {
    int16_t size = this->list.size();

    if (size > 0) return this->list[0];
    else return NULL;
}