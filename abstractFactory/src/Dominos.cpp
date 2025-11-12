#include "../include/Dominos.hpp"
#include "../include/CommonPizzas.hpp"

IPizza &Dominos::CreatePizza(const std::string &type) {
    // not handling exceptions here !!!
    IPizza *pizza = nullptr;

    if (type == "Cheese")
        pizza = new CheesePizza(*m_dominosIngredientsFactory);
    else if (type == "Pepperoni")
        pizza = new PepperoniPizza(*m_dominosIngredientsFactory);

    return *pizza;
}
