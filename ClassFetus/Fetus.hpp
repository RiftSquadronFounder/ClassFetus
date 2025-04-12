#pragma once
#ifndef FETUS_HPP

#include <iostream>
#include <string>

class Fetus {
private:
	std::string name_;
	float weight_;
	float rot_;
	float calories_;
	int Id;

public:

	bool operator==(Fetus other) {
		if (Id == other.Id) {
			return true;
		}
		else { return false; }
	}


	Fetus() {
		
		Id = rand();
		name_ = "Default fetus";
		weight_ = 10.0;
		calories_ = 10.0;
		rot_ = 0;
	}
	Fetus(std::string name, float weight, float calories) {
		name_ = name;
		weight_ = weight;
		calories_ = calories;
		rot_ = 0;
	}
	Fetus(std::string name, float weight, float calories, float rot) {
		name_ = name;
		weight_ = weight;
		calories_ = calories;
		rot_ = rot;
	}
};

#endif // !FETUS_HPP
