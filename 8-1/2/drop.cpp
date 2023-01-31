#include "drop.h"
#include <iostream>
#include <cmath>

Planet::Planet() {}

Planet::Planet(float gravity) {
	gravity_ = gravity;
}

float Planet::drop(float height){
	float result = sqrt((2 * height) / gravity_);
	return result;
}

Earth::Earth(){
	gravity_ = 9.81f;
}

void Earth::simulate(float height) {
	std::cout << "Earth gravity= " << gravity_ << std::endl;
	float result = drop(height);
	std::cout << "Drop from " << height << "m, " << result << " seconds." << std::endl;
}

Moon::Moon() {
	gravity_ = 1.62f;
}

void Moon::simulate(float height) {
	std::cout << "Moon gravity= " << gravity_ << std::endl;
	float result = drop(height);
	std::cout << "Drop from " << height << "m, " << result << " seconds." << std::endl;
}



