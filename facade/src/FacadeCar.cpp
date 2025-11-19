#include "../include/FacadeCar.hpp"

void FacadeCar::On() {
    m_engine.PowerOn();
    m_lights.LightsOn();
}

void FacadeCar::Off() {
    m_engine.PowerOff();
    m_lights.LightsOff();
}

FacadeCar::FacadeCar(const Engine &engine, const Lights &lights)
    : m_engine(engine), m_lights(lights) {}
