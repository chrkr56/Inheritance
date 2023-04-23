#include "Vehicle.h"
#include <iostream>

void Vehicle::displayInfo() {
	std::cout << "Vehicle Information: \n"
		<< "Manufacturer: " << Manufacturer << '\n'
		<< "Model Year: " << YearBuilt << '\n';
}
auto Vehicle::getManufacturer() {
	return Manufacturer;
}
auto Vehicle::getYearBuilt() {
	return YearBuilt;
}
void Vehicle::setManufacturer(std::string inputString) {
	Manufacturer = inputString;
}
void Vehicle::setYearBuilt(int inputYear) {
	YearBuilt = inputYear;
}
