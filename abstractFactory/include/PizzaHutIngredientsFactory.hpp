#pragma once

#include "IIngredientsFactory.hpp"
#include "ISauce.hpp"
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
      std::unique_ptr<IToppings>CreateToppings() override;
      std::unique_ptr<ISauce>CreateSauce() override;
};
