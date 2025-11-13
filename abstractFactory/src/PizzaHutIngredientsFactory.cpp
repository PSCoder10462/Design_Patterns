#include "../include/PizzaHutIngredientsFactory.hpp"
#include <memory>

std::unique_ptr<IToppings>PizzaHutIngredientsFactory::CreateToppings() {
    // not handling exceptions
    return std::make_unique<PizzaHutToppings>();
}

std::unique_ptr<ISauce> PizzaHutIngredientsFactory::CreateSauce() {
    // not handling exceptions
    return std::make_unique<PizzaHutSauce>();
}
