#pragma once
#ifndef BACKPACK_HPP

#include "Fetus.hpp"
#include <vector>

class Backpack {
private:
	std::vector<Fetus> Fetuses_;
public:
	Backpack(int amountOfFetus); 
};



#endif // !BACKPACK_HPP
