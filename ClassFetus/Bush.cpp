#include"Bush.hpp"
	Bush::Bush() : Plant() {
		bushType_ = DEFAULT;
	}
	Bush::Bush(std::string name, float height, Fetus typeOfFetus, BushType bushType) : Plant(name, height, typeOfFetus) {
		bushType_ = bushType;
	}
	Bush::Bush(std::string name, float height, std::vector<Fetus> fetusesList, Fetus typeOfFetus, BushType bushType) : Plant(name, height, fetusesList, typeOfFetus) {
		bushType_ = bushType;
	}


