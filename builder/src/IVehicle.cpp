#include "../include/IVehicle.hpp"
#include <iostream>

IVehicle::IVehicle(const std::string &wheeler) : m_wheeler(wheeler) {}

// getters
const std::string &IVehicle::Brakes() const { return m_brakes; }
const std::string &IVehicle::Acceleration() const { return m_acceleration; }

// setters
void IVehicle::Brakes(const std::string &brakes) { m_brakes = brakes; };
void IVehicle::Acceleration(const std::string &acceleration) {
    m_acceleration = acceleration;
};

void IVehicle::Display() const {
    std::cout << "**********************\n";
    std::cout << "Vehicle: " << m_wheeler << '\n';
    std::cout << "Acceleration: " << m_acceleration << '\n';
    std::cout << "Brakes: " << m_brakes << '\n';
    std::cout << "**********************\n";
}
