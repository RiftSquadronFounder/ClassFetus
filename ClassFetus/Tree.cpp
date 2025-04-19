#include "Tree.hpp"
Tree::Tree() : Plant() {
	treeType_ = DEFAULT;
}
Tree::Tree(std::string name, float height, Fetus typeOfFetus, TreeType treeType) : Plant(name, height, typeOfFetus) {
	treeType_ = treeType;
}
Tree::Tree(std::string name, float height, std::vector<Fetus> fetusesList, Fetus typeOfFetus, TreeType treeType) : Plant(name, height, fetusesList, typeOfFetus) {
	treeType_ = treeType;
}
