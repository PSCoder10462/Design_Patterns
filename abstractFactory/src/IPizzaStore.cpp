#include "../include/IPizzaStore.hpp"

IPizza &IPizzaStore::OrderPizza(const std::string &type) {
    // create pizza
    IPizza &pizza = CreatePizza(type);
    
    // logic to prepare, server... 
    pizza.Prepare();
    pizza.Serve();

    // complete the pizza order
    return pizza;
}
