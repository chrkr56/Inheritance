#pragma once

#include <string>
class Vehicle
{
private:
	std::string Manufacturer;
	int YearBuilt;
public:
	Vehicle() {
		Manufacturer = { "" };
		YearBuilt = 0;
	}
	virtual void displayInfo();
	auto getManufacturer();
	auto getYearBuilt();
	void setManufacturer(std::string);
	void setYearBuilt(int);
};

