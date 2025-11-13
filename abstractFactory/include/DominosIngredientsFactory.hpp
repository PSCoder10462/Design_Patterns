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
    std::unique_ptr<IToppings> CreateToppings() override;
    std::unique_ptr<ISauce> CreateSauce() override;
};
