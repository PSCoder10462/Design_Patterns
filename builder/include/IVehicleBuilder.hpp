#pragma once
#include "Car.hpp"
#include "IVehicle.hpp"

class IVehicleBuilder {
    public:
        virtual void BuildAccelerator() = 0;
        virtual void BuildBrakes() = 0;

        IVehicle *Vehicle() { return m_vehicle; }

        IVehicleBuilder() : m_vehicle(new Car()) {}

        virtual ~IVehicleBuilder () {
            if (m_vehicle) delete m_vehicle;
        }
    protected:
        IVehicle *m_vehicle;
};
