#include "FetusForest.hpp"

FetusForest::FetusForest(int amountOfTrees) {
	for (int i = 0; i < amountOfTrees + 1; i++) {
		int randTree = 0;
		do {
			randTree = rand() % 10;
		} while (randTree < 0 || randTree > 5);

		Trees_.push_back(Tree("Tree", (rand() % 50) + 1, Fetus("Fetus", (rand() % 10) + 1, (rand() % 180) + 20), Tree::TreeType::DEFAULT));
	}
}
FetusForest::FetusForest() {
	for (int i = 0; i < 100 + 1; i++) {
		int randTree = 0;
		do {
			randTree = rand() % 10;
		} while (randTree < 0 || randTree > 5);

		Trees_.push_back(Tree("Tree", (rand() % 50) + 1, Fetus("Fetus", (rand() % 10) + 1, (rand() % 180) + 20), Tree::TreeType::DEFAULT));
	}
}