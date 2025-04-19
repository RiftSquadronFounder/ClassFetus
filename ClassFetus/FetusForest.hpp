#pragma once
#ifndef FETUS_FOREST_HPP


#include "Fetus.hpp"
#include "Tree.hpp"
#include <vector>
#include <random>


class FetusForest {
private:
	std::vector<Tree> Trees_;

public:
	FetusForest(int amountOfTrees);
	FetusForest();
};



#endif // !FETUS_FOREST_HPP
