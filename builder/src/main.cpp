#include "../include/VehicleBuildDirector.hpp"

int main() {
    VehicleBuildDirector basevehicleBuildDirector("base model");
    VehicleBuildDirector topVehicleBuildDirector("top model");

    IVehicle *baseCar = basevehicleBuildDirector.GetVehicle();
    IVehicle *topCar = topVehicleBuildDirector.GetVehicle();

    baseCar->Display();
    topCar->Display();

    return 0;
}
