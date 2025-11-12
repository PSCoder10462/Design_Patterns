#include "../include/DominosIngredientsFactory.hpp"

IToppings *DominosIngredientsFactory::CreateToppings() {
    // not handling exceptions
    return new DominosToppings();
}

ISauce *DominosIngredientsFactory::CreateSauce() {
    // not handling exceptions
    return new DominosSauce();
}
