#include "bus.h"

void Bus::SetSpeed(const double& speed) {
    std::cout << "Speeding the bus! " << speed << " km/h" << std::endl;
    speed_ = speed;
}
const double Bus::GetSpeed() {
    return speed_;
}
void Bus::SetSteerAngle(const double& angle) {
    std::cout << "Steering the bus! " << angle << " rad" << std::endl;
    steer_angle_ = angle;
}

const double Bus::GetSteerAngle() {
    return steer_angle_;
}
const std::string Bus::GetId() {
    return "Bus";
}