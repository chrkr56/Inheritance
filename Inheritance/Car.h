#pragma once

#include "Vehicle.h"
class Car :
    public Vehicle
{
private:
    int DoorCount;
public:
    Car() : Vehicle() {
        DoorCount = 4;
    }
    void displayInfo();
    auto getDoorCount();
    void setDoorCount(int);
};

