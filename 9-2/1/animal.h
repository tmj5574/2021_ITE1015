#include <iostream>
class Animal {
public:
	Animal(std::string name_, int age_);
	virtual void printInfo();

protected:
	std::string name;
	int age;
};

class Zebra : public Animal {
public:
	Zebra(std::string name_, int age_, int numStripes_);

	void printInfo();

private:
	int numStripes;
};

class Cat : public Animal {
public : 
	Cat(std::string name_, int age_, std::string favoriteToy_);

	void printInfo();

private:
	std::string favoriteToy;
};

