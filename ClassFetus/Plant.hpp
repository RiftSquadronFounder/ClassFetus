#ifndef PLANT_HPP
#define PLANT_HPP

#include "Fetus.hpp"
#include <string>
#include <vector>
class Plant {
private:
	std::string name_;
	float height_;
	std::vector<Fetus> fetusesList_ = std::vector<Fetus>();
	Fetus typeOfFetus_ = Fetus();

public:

	Plant();
	Plant(std::string name, float height, Fetus typeOfFetus);
	Plant(std::string name, float height, std::vector<Fetus> fetusesList, Fetus typeOfFetus);



	void AddFetus();
	void AddFetus(std::string name, float weight, float calories);
	void AddFetus(std::string name, float weight, float calories, float rot);


	Fetus GiveFetus();

	int AmountOfFetusesLeft();
};


#endif // !PLANT_HPP
