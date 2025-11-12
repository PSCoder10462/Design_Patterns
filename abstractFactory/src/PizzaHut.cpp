#include "../include/PizzaHut.hpp"
#include "../include/CommonPizzas.hpp"

IPizza &PizzaHut::CreatePizza(const std::string &type) {
    // not handling exceptions here !!!
    IPizza *pizza = nullptr;
    if (type == "Cheese")
        pizza = new CheesePizza(*m_pizzaHutIngredientsFactory);
    else if (type == "Pepperoni")
        pizza = new PepperoniPizza(*m_pizzaHutIngredientsFactory);
    return *pizza;
}
