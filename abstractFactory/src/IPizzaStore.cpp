#include "../include/IPizzaStore.hpp"

std::unique_ptr<IPizza>IPizzaStore::OrderPizza(const std::string &type) {
    // create pizza
    std::unique_ptr<IPizza> pizza = CreatePizza(type);
    
    // logic to prepare, server... 
    pizza->Prepare();
    pizza->Serve();

    // complete the pizza order
    return pizza;
}
