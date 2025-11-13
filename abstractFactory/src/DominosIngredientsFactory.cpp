#include "../include/DominosIngredientsFactory.hpp"

std::unique_ptr<IToppings> DominosIngredientsFactory::CreateToppings() {
    // not handling exceptions
    return std::make_unique<DominosToppings>();
}

std::unique_ptr<ISauce> DominosIngredientsFactory::CreateSauce() {
    // not handling exceptions
    return std::make_unique<DominosSauce>();
}
