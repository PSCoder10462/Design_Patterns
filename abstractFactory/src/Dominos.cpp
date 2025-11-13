#include "../include/Dominos.hpp"
#include "../include/CommonPizzas.hpp"
#include <memory>

std::unique_ptr<IPizza> Dominos::CreatePizza(const std::string &type) {
    if (type == "Cheese")
        return std::make_unique<CheesePizza>(m_dominosIngredientsFactory);
    else /*if (type == "Pepperoni")*/
        return std::make_unique<PepperoniPizza>(m_dominosIngredientsFactory);
}
