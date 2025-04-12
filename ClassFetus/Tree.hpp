#pragma once
#ifndef TREE_HPP

#include "HangedFetus.hpp"
#include "Plant.hpp"

class Tree : Plant
{
private:
	enum TreeType {
		DEFAULT,
		APPLE_TREE,
		PINEAPPLE_TREE,
		OAK_TREE,
		SPRUCE,
		PINE
	};
	TreeType treeType;
public:
	Tree() {
		treeType = DEFAULT;
	}
	Tree() {

	}
	


};


#endif // !TREE_HPP
