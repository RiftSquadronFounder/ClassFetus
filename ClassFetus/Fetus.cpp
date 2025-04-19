#include "Fetus.hpp"

Fetus::Fetus() {

	Id = rand();
	name_ = "Default fetus";
	weight_ = 10.0;
	calories_ = 10.0;
	rot_ = 0;
}
Fetus::Fetus(std::string name, float weight, float calories) {
	name_ = name;
	weight_ = weight;
	calories_ = calories;
	rot_ = 0;
}
Fetus::Fetus(std::string name, float weight, float calories, float rot) {
	name_ = name;
	weight_ = weight;
	calories_ = calories;
	rot_ = rot;
}
bool Fetus::operator==(Fetus other) {
	if (Id == other.Id) {
		return true;
	}
	else { return false; }
}