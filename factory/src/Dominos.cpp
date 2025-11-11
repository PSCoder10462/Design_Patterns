#include "../include/IPizzaStore.hpp"

class DominosPizza1 : public IPizza {
  public:
    DominosPizza1() : IPizza("DominosPizza1") {}
};

class DominosPizza2 : public IPizza {
  public:
    DominosPizza2() : IPizza("DominosPizza2") {}
};

class Dominos : public IPizzaStore {
    IPizza &createPizza(const std::string &type) override {
        IPizza *pizza = nullptr;
        if (type == "DominosPizza1")
            pizza = new DominosPizza1();
        else if (type == "DominosPizza2")
            pizza = new DominosPizza2();
        else {
            // Hacking around, should be done in better way
            // invalid order basically
            // ideally, set some return status for this to error
            pizza = new DominosPizza1();
            pizza->makeInvalid();
        }
        return *pizza;
    }
};
