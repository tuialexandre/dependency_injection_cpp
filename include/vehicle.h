#ifndef VEHICLE_H
#define VEHICLE_H

class IVehicle {
   public:
    virtual ~IVehicle() {}

    virtual void SetSpeed(const double& speed) = 0;
    virtual const double GetSpeed() = 0;
    virtual void SetSteerAngle(const double& angle) = 0;
    virtual const double GetSteerAngle() = 0;
    virtual const std::string GetId() = 0;
};
#endif