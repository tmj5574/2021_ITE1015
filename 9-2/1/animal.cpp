#include "animal.h"
#include <iostream>

Animal::Animal(std::string name_, int age_) {
	name = name_;
	age = age_;
}
void Animal::printInfo() {}

Zebra:: Zebra(std::string name_, int age_, int numStripes_) :
	Animal(name_, age_) {
	numStripes = numStripes_;
}

void Zebra::printInfo() {
	std::cout << "Zebra, " << "name: " << name << ", Age: " << age << ", Number of stripes: " << numStripes << std::endl;
}

Cat::Cat(std::string name_, int age_, std::string favoriteToy_) :
	Animal(name_, age_){
		favoriteToy = favoriteToy_ ;
	}

void Cat::printInfo() {
	std::cout << "cat, " << "Name: " << name << ", Age: " << age << ", Favorite toy: " << favoriteToy << std::endl;
}


