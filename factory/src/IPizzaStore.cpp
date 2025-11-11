#include "../include/IPizzaStore.hpp"

// creator class logic
IPizza &IPizzaStore::OrderPizza(const std::string &type) {
    IPizza &pizza = createPizza(type);

    // Order logic independent of pizza type
    pizza.prepare();
    pizza.serve();

    return pizza;
}
