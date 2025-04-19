#include "Plant.hpp"

Plant::Plant() {
	name_ = "Default fetus plant";
	height_ = 15.0;
}
Plant::Plant(std::string name, float height, Fetus typeOfFetus) {
	name_ = name;
	height_ = height;
	typeOfFetus_ = typeOfFetus;
}
Plant::Plant(std::string name, float height, std::vector<Fetus> fetusesList, Fetus typeOfFetus) {
	name_ = name;
	height_ = height;
	fetusesList_ = fetusesList;
	typeOfFetus_ = typeOfFetus;
}



void Plant::AddFetus() {
	fetusesList_.push_back(Fetus());
}
void Plant::AddFetus(std::string name, float weight, float calories) {
	fetusesList_.push_back(Fetus(name, weight, calories));
}
void Plant::AddFetus(std::string name, float weight, float calories, float rot) {
	fetusesList_.push_back(Fetus(name, weight, calories, rot));
}


Fetus Plant::GiveFetus() {
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
		fetusesList_.swap(fetusesRemade);
		return fetusToOut;
	}
}

int Plant::AmountOfFetusesLeft() {
	return fetusesList_.size();
}