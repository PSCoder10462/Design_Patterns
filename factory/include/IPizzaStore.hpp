#pragma once

#include "IPizza.hpp"

class IPizzaStore {
    public:
        IPizza &OrderPizza(const std::string &type);
    protected:
        // factory method
        virtual IPizza &createPizza(const std::string &type) = 0;
};
