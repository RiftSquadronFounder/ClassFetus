#pragma once
#ifndef TREE_HPP

#include "HangedFetus.hpp"
#include "Plant.hpp"

class Tree : Plant
{

public:
	enum TreeType {
		DEFAULT,
		APPLE_TREE,
		PINEAPPLE_TREE,
		OAK_TREE,
		SPRUCE,
		PINE
	};
	Tree();
	Tree(std::string name, float height, Fetus typeOfFetus, TreeType treeType);
	Tree(std::string name, float height, std::vector<Fetus> fetusesList, Fetus typeOfFetus, TreeType treeType);
	
private:
	TreeType treeType_;

};


#endif // !TREE_HPP
