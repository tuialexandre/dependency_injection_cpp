#include "motorcycle.h"

void Motorcycle::SetSpeed(const double& speed) {
    std::cout << "Speeding the motorcycle! " << speed << " km/h" << std::endl;
    speed_ = speed;
}
const double Motorcycle::GetSpeed() {
    return speed_;
}
void Motorcycle::SetSteerAngle(const double& angle) {
    std::cout << "Steering the motorcycle! " << angle << " rad" << std::endl;
    steer_angle_ = angle;
}

const double Motorcycle::GetSteerAngle() {
    return steer_angle_;
}

const std::string Motorcycle::GetId() {
    return "Motorcycle";
}