#include "../include/PizzaHutIngredientsFactory.hpp"

IToppings *PizzaHutIngredientsFactory::CreateToppings() {
    // not handling exceptions
    return new PizzaHutToppings();
}

ISauce *PizzaHutIngredientsFactory::CreateSauce() {
    // not handling exceptions
    return new PizzaHutSauce();
}
