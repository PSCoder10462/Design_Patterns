#pragma once

#include "IPizza.hpp"
#include <memory>
#include <string>

class IPizzaStore {
  public:
    virtual std::unique_ptr<IPizza> OrderPizza(const std::string &) final;
    virtual std::unique_ptr<IPizza> CreatePizza(const std::string &) = 0;
    virtual ~IPizzaStore() = default;
};
