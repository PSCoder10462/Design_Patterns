#pragma once

#include "IIngredientsFactory.hpp"
#include "IToppings.hpp"

class PizzaHutToppings : public IToppings {
  public:
    PizzaHutToppings() : IToppings("PizzaHut  Toppings") {}
};

class PizzaHutSauce : public ISauce {
  public:
    PizzaHutSauce() : ISauce("PizzaHut  Sauce") {}
};

class PizzaHutIngredientsFactory : public IIngredientsFactory {
  public:
    IToppings *CreateToppings() override;
    ISauce *CreateSauce() override;
};
