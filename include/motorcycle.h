#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <iostream>

#include "vehicle.h"

class Motorcycle : public IVehicle {
   public:
    Motorcycle() {}
    ~Motorcycle() {}

    void SetSpeed(const double& speed) override;
    const double GetSpeed() override;
    void SetSteerAngle(const double& angle) override;
    const double GetSteerAngle() override;
    const std::string GetId() override;

   private:
    double speed_ = 0.0;
    double steer_angle_ = 0.0;
};
#endif