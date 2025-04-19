#pragma once
#ifndef BUSH_HPP

#include "HangedFetus.hpp"
#include "Plant.hpp"

class Bush : Plant
{
private:
	enum BushType {
		DEFAULT,
		CRAWLING

	};
	BushType bushType_;
public:
	Bush();
	Bush(std::string name, float height, Fetus typeOfFetus, BushType bushType);
	Bush(std::string name, float height, std::vector<Fetus> fetusesList, Fetus typeOfFetus, BushType bushType) ;



};



#endif // !BUSH_HPP
