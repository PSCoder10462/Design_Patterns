#include "../include/TurboDiscBuilder.hpp"

void TurboDiscBuilder::BuildBrakes() {
    m_vehicle->Brakes("Disc brakes");
}

void TurboDiscBuilder::BuildAccelerator() {
    m_vehicle->Acceleration("Turbo acceleration");
}

