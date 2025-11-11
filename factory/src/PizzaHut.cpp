#include "../include/IPizzaStore.hpp"

class PizzaHutPizza1 : public IPizza {
  public:
    PizzaHutPizza1() : IPizza("PizzaHutPizza1") {}
};

class PizzaHutPizza2 : public IPizza {
  public:
    PizzaHutPizza2() : IPizza("PizzaHutPizza2") {}
};

class PizzaHut : public IPizzaStore {
    IPizza &createPizza(const std::string &type) override {
        IPizza *pizza = nullptr;
        if (type == "PizzaHutPizza1")
            pizza = new PizzaHutPizza1();
        else if (type == "PizzaHutPizza2")
            pizza = new PizzaHutPizza2();
        else {
            // Hacking around, should be done in better way
            // invalid order basically
            // ideally, set some return status for this to error
            pizza = new PizzaHutPizza1();
            pizza->makeInvalid();
        }
        return *pizza;
    }
};

