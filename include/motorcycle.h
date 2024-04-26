#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <iostream>

#include "vehicle.h"

class Motorcycle : public IVehicle {
   public:
    Motorcycle() {}
    ~Motorcycle() {}

    void SetSpeed(const double& speed);
    const double GetSpeed();
    void SetSteerAngle(const double& angle);
    const double GetSteerAngle();
    const std::string GetId();

   private:
    double speed_ = 0.0;
    double steer_angle_ = 0.0;
};
#endif