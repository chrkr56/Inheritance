#pragma once

#include "Vehicle.h"
class Truck :
    public Vehicle
{
private:
    double TowingCapacity;
public:
    Truck() : Vehicle() {
        TowingCapacity = 0;
    }
    void displayInfo();
    auto getTowingCapacity();
    void setTowingCapacity(double);
};

