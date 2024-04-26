#include "pilot.h"

void Pilot::EnterVehicle(std::unique_ptr<IVehicle> &vehicle) {
    my_vehicle_ = std::move(vehicle);
    std::cout << "Pilot entering a " << my_vehicle_->GetId() << std::endl;
}
void Pilot::Drive() {
    my_vehicle_->SetSpeed(40.0);
    my_vehicle_->SetSteerAngle(0.2);
}