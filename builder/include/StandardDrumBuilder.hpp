#pragma once
#include "IVehicleBuilder.hpp"

class StandardDrumBuilder : public IVehicleBuilder {
    public:
        void BuildAccelerator() override;
        void BuildBrakes() override;
};

