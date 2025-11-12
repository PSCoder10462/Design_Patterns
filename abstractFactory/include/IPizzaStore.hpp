#pragma once

#include "IPizza.hpp"
#include <string>

class IPizzaStore {
  public:
    virtual IPizza &OrderPizza(const std::string &) final;
    virtual IPizza &CreatePizza(const std::string &) = 0;
};
