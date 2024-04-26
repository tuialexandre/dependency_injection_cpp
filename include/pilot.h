#ifndef PILOT_H
#define PILOT_H

#include <iostream>

#include "memory"
#include "vehicle.h"

class Pilot {
   public:
    Pilot() {}
    ~Pilot() {}

    void EnterVehicle(std::unique_ptr<IVehicle> &vehicle);  // Enter and use the assigned vehicle
    void Drive();                                           // Do some driving
   private:
    std::unique_ptr<IVehicle> my_vehicle_;
};
#endif