#include <iostream>
#include <time.h>

#include "Trainer.h"
#include "Pokemon.h"
#include "AttackDamage.h"

//Pokemons
#include "Aquali.h"
#include "Azumarill.h"
#include "Ceribou.h"
#include "Chamallot.h"
#include "Chenipan.h"
#include "Magneti.h"
#include "Phyllali.h"
#include "Posipi.h"
#include "Roussil.h"
#include "Zebibron.h"

using namespace std;

int choiceInput = 0;
Pokemon *firstPokemon, *secondPokemon, *thirdPokemon;

int choice() {
    int choiceInput = 0;
	cout << "0. Non " << endl;
    cout << "1. Oui ", cin >> choiceInput;

	cin.get();
	return choiceInput;
}

int playGame() {
	cout << "Voulez-vous jouer une partie? \n";
	choiceInput = choice();

	if (choiceInput == 1) cout << "La partie va commencer";
	else return EXIT_FAILURE;

	cin.get();
	return EXIT_SUCCESS;
}

int pokeChoice(Pokemon *firstPokemon, Pokemon *secondPokemon, Pokemon *thirdPokemon) {
	int pokeNumber;

	cout << "Quel Pokemon voulez-vous envoyer? \n";
	cout << "1. " + firstPokemon->getName() + "\n2. " + secondPokemon->getName() + "\n3. " + thirdPokemon->getName() + "\n", cin >> pokeNumber;

	switch(pokeNumber) {
		case 1:
			cout << "Vous avez choisis " + firstPokemon->getName();
		break;

		case 2:
			cout << "Vous avez choisis " + secondPokemon->getName();
		break;

		case 3:
			cout << "Vous avez choisis " + thirdPokemon->getName();
		break;
	}
	return EXIT_SUCCESS;
}

int16_t mainLoop(Trainer* trainer);

int main() {
	int16_t intMenu = 0;

	Trainer* trainer = new Trainer();

	Ceribou* ceribou = nullptr;
    ceribou = new Ceribou();
    
	trainer->addPokemon(ceribou);

	intMenu = mainLoop(trainer);
	delete trainer;

	if (intMenu != EXIT_SUCCESS) return intMenu;
	return EXIT_SUCCESS;
}

int pokeFight(Trainer* trainer, Pokemon* pokemon) {
	Pokemon* first_Pokemon = trainer->first_Pokemon();
	Pokemon* replacement = nullptr;
	Pokemon tmp;
	int16_t intMenu = 0, choice = 0;
	int32_t size = 0;
	

	cout << "Un " << pokemon->getName() << " sauvage apparait!\n";

	while (true)
	{
		cout << "---------- MENU DE COMBAT ----------";
		cout << "1. Afficher attaques\n2. Changer de pokemon\n3. Attraper pokemon\n";
		cout << "------------------------------------", cin >> intMenu;
		switch (intMenu) {
			case 1:
				first_Pokemon->viewAttack();
			break;

			case 2:
				size = trainer->getSizeList();
				for (int i = 0; i < size; i++) {
					cout << i+1 << ") " << trainer->getPokemon(i)->getName() << "\n";
				}
				cin >> choice;

				replacement = trainer->getPokemon(choice - 1);

				tmp = *first_Pokemon;
				*first_Pokemon = *replacement;
				*replacement = tmp;
			break;

			case 3:
				cout << "Attrapé!\n";
				trainer->addPokemon(pokemon);
				return EXIT_SUCCESS;
			break;
			
			default:
				break;
		}
	}
	return EXIT_SUCCESS;
}

int16_t mainLoop(Trainer* trainer) {
	int16_t intMenu = 0, result = 0, pokemonMet = 0;
	
	/* Liste des pokemons */
	Ceribou* ceribou = new Ceribou();
	Azumarill* azumarill = new Azumarill();
	Chenipan* chenipan = new Chenipan();
	Aquali* aquali = new Aquali();
	Chamallot* chamallot = new Chamallot();
	Zebibron* zebibron = new Zebibron();
	Magneti* magneti = new Magneti();
	Roussil* roussil = new Roussil();
	Phyllali* phyllali = new Phyllali();
	Posipi* posipi = new Posipi();

	srand(time(NULL));
	intMenu = playGame();

	if (!trainer) return EXIT_FAILURE;
	if (intMenu != EXIT_SUCCESS) return intMenu;

	while (true) {
		cout << "---------- MENU ----------";
		cout << "1. Afficher liste de pokemon\n2. Chercher un combat\n3. Arreter la partie\n";
		cout << "--------------------------\n", cin >> result;

		switch (result) {
			case 1:
				trainer->printList();
			break;

			case 2:
				pokemonMet = rand() % 11 + 1;
				pokemonMet += 100;
				switch (pokemonMet) {
					case AQUALI:
						pokeFight(trainer, aquali);
					break;
					
					case AZUMARILL:
						pokeFight(trainer, azumarill);
					break;

					case CERIBOU:
						pokeFight(trainer, ceribou);
					break;

					case CHAMALLOT:
						pokeFight(trainer, chamallot);
					break;

					case CHENIPAN:
						pokeFight(trainer, chenipan);
					break;

					case MAGNETI:
						pokeFight(trainer, magneti);
					break;

					case PHYLLALI:
						pokeFight(trainer, phyllali);
					break;

					case POSIPI:
						pokeFight(trainer, posipi);
					break;

					case ROUSSIL:
						pokeFight(trainer, roussil);
					break;

					case ZEBIBRON:
						pokeFight(trainer, zebibron);
					break;

					default:
						break;
				}
			break;
			
			case 3:
				return EXIT_SUCCESS;
			break;

			default:
				break;
		}
	}
}