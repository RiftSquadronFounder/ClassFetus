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

	bool operator==(Fetus other);


	Fetus();
	Fetus(std::string name, float weight, float calories);
	Fetus(std::string name, float weight, float calories, float rot);
};

#endif // !FETUS_HPP
