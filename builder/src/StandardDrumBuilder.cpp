#include "../include/StandardDrumBuilder.hpp"

void StandardDrumBuilder::BuildBrakes() {
    m_vehicle->Brakes("Drum brakes");
}

void StandardDrumBuilder::BuildAccelerator() {
    m_vehicle->Acceleration("Standard acceleration");
}
