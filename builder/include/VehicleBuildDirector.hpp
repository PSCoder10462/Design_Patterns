#pragma once

#include "IVehicle.hpp"
#include "IVehicleBuilder.hpp"

class VehicleBuildDirector {
  public:
    IVehicle *GetVehicle();
    VehicleBuildDirector(const std::string &);

    ~VehicleBuildDirector() {
        if (m_vehicleBuilder)
            delete m_vehicleBuilder;
    }

  protected:
    IVehicleBuilder *m_vehicleBuilder;
    IVehicle *buildVehicle();
};
