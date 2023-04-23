#include "Car.h"
#include <iostream>

void Car::displayInfo() {
	Vehicle::displayInfo();
	std::cout << "Number of Doors: " << DoorCount << '\n';
}

auto Car::getDoorCount() {
	return DoorCount;
}

void Car::setDoorCount(int inputCount) {
	DoorCount = inputCount;
}