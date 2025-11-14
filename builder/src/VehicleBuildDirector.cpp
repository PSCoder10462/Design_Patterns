#include "../include/VehicleBuildDirector.hpp"
#include "../include/StandardDrumBuilder.hpp"
#include "../include/TurboDiscBuilder.hpp"

VehicleBuildDirector::VehicleBuildDirector(const std::string &type) {
    if (type == "base model")
        m_vehicleBuilder = new StandardDrumBuilder();
    else
        // type == top model
        m_vehicleBuilder = new TurboDiscBuilder();
}

IVehicle *VehicleBuildDirector::GetVehicle() { return buildVehicle(); }

IVehicle *VehicleBuildDirector::buildVehicle() {
    m_vehicleBuilder->BuildBrakes();
    m_vehicleBuilder->BuildAccelerator();
    return m_vehicleBuilder->Vehicle();
}
