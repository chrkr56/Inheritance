#include "Truck.h"
#include <iostream>

void Truck::displayInfo() {
	Vehicle::displayInfo();
	std::cout << "Towing Capacity: " << TowingCapacity << '\n';
}

auto Truck::getTowingCapacity() {
	return TowingCapacity;
}

void Truck::setTowingCapacity(double inputCapacity) {
	TowingCapacity = inputCapacity;
}