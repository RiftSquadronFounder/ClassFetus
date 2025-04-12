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

	Plant() {
		name_ = "Default fetus plant";
		height_ = 15.0;
	}
	Plant(std::string name, float height, Fetus typeOfFetus) {
		name_ = name;
		height_ = height;
		typeOfFetus_ = typeOfFetus;
	}
	Plant(std::string name, float height, std::vector<Fetus> fetusesList, Fetus typeOfFetus) {
		name_ = name;
		height_ = height;
		fetusesList_ = fetusesList;
		typeOfFetus_ = typeOfFetus;
	}



	void AddFetus() {
		fetusesList_.push_back(Fetus());
	}
	void AddFetus(std::string name, float weight, float calories) {
		fetusesList_.push_back(Fetus(name, weight, calories));
	}
	void AddFetus(std::string name, float weight, float calories, float rot) {
		fetusesList_.push_back(Fetus(name, weight, calories, rot));
	}


	Fetus GiveFetus() {
		if (fetusesList_.size() > 0) {
			Fetus fetusToOut = fetusesList_[0];
			std::vector<Fetus> fetusesRemade = std::vector<Fetus>();
			bool isThere;
			for (int i = 0; i < fetusesList_.size(); i++) {
				isThere = false;
				for (int k = 0; k < fetusesRemade.size(); k++) {
					if (fetusesList_[i] == fetusesRemade[k]) {
						isThere = true;
					}
				}
				if (isThere == false) {
					fetusesRemade.push_back(fetusesList_[i]);
				}
				
			}
		}
	}

	int AmountOfFetusesLeft() {
		return fetusesList_.size();
	}
};


#endif // !PLANT_HPP
