#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

int main() {
	/* Vehicle Section */
	Vehicle vehicle;

	std::cout << "Vehicle Section: \n";

	std::string InputManufacturer;
	int YearBuilt;

	std::cout << "Input Vehicle Manufacturer:> ";
	getline(std::cin, InputManufacturer);
	vehicle.setManufacturer(InputManufacturer);

	std::cout << "Input Vehicle Production Year:> ";
	std::cin >> YearBuilt;

	while (!std::cin ) {
		std::cerr << "Input a valid integer:> ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> YearBuilt;
	}

	vehicle.setYearBuilt(YearBuilt);

	vehicle.displayInfo();
	
	std::cout << '\n';

	/* Car Section */

	Car car;

	std::cout << "Car Section: \n";

	int DoorCount;

	std::cout << "Input Car Manufacturer:> ";

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	getline(std::cin, InputManufacturer);
	car.setManufacturer(InputManufacturer);

	std::cout << "Input Car Production Year:> ";
	std::cin >> YearBuilt;

	while (!std::cin) {
		std::cerr << "Input a valid integer:> ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> YearBuilt;
	}

	car.setYearBuilt(YearBuilt);

	std::cout << "Input Car Door Count:> ";
	std::cin >> DoorCount;

	while (!std::cin) {
		std::cerr << "Input a valid integer:> ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> DoorCount;
	}

	car.setDoorCount(DoorCount);

	car.displayInfo();

	std::cout << '\n';

	/* Truck Section */

	Truck truck;

	std::cout << "Truck Section: \n";

	double TowingCapacity;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Input Truck Manufacturer:> ";
	getline(std::cin, InputManufacturer);
	truck.setManufacturer(InputManufacturer);

	std::cout << "Input Truck Production Year:> ";
	std::cin >> YearBuilt;

	while (!std::cin) {
		std::cerr << "Input a valid integer:> ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> YearBuilt;
	}

	truck.setYearBuilt(YearBuilt);

	std::cout << "Input Truck Towing Capacity:> ";
	std::cin >> TowingCapacity;

	while (!std::cin) {
		std::cerr << "Input a valid double:> ";
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> TowingCapacity;
	}

	truck.setTowingCapacity(TowingCapacity);

	truck.displayInfo();

	std::cout << '\n';

	system("pause");
	return 0;
}