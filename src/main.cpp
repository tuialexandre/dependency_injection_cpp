#include <iostream>

#include "bus.h"
#include "motorcycle.h"
#include "pilot.h"

int main(int, char**) {
    Pilot my_pilot;
    std::unique_ptr<IVehicle> my_vehicle;
    my_vehicle = std::make_unique<Motorcycle>();
    my_pilot.EnterVehicle(my_vehicle);
    my_pilot.Drive();

    my_vehicle = std::make_unique<Bus>();
    my_pilot.EnterVehicle(my_vehicle);
    my_pilot.Drive();
}
