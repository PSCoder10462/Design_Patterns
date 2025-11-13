#include "../include/PizzaHut.hpp"
#include "../include/CommonPizzas.hpp"

std::unique_ptr<IPizza>PizzaHut::CreatePizza(const std::string &type) {
    // not handling exceptions here !!!
    if (type == "Cheese")
        return std::make_unique<CheesePizza>(m_pizzaHutIngredientsFactory);
    else /*if (type == "Pepperoni")*/
        return std::make_unique<PepperoniPizza>(m_pizzaHutIngredientsFactory);
}
