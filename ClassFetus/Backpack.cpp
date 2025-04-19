#include "Backpack.hpp"


Backpack::Backpack(int amountOfFetus) {
		for (int i = 0; i < amountOfFetus + 1; i++) {
			int randTree = 0;
			do {
				randTree = rand() % 10;
			} while (randTree < 0 || randTree > 5);

			Fetuses_.push_back(Fetus("Fetus", (rand() % 10) + 1, (rand() % 180) + 20));
		}
	}

