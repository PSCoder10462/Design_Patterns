#pragma once

#include "IIngredientsFactory.hpp"
#include "IToppings.hpp"

class DominosToppings : public IToppings {
  public:
    DominosToppings() : IToppings("Dominos  Toppings") {}
};

class DominosSauce : public ISauce {
  public:
    DominosSauce() : ISauce("Dominos  Sauce") {}
};

class DominosIngredientsFactory : public IIngredientsFactory {
  public:
    IToppings *CreateToppings() override;
    ISauce *CreateSauce() override;
};
