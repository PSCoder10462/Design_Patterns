#pragma once

#include "IIngredientsFactory.hpp"
#include "IPizza.hpp"
#include "IPizzaStore.hpp"
#include "PizzaHutIngredientsFactory.hpp"
#include <memory>

class PizzaHut : public IPizzaStore {
  public:
    std::unique_ptr<IPizza> CreatePizza(const std::string &) override;

    PizzaHut()
        : m_pizzaHutIngredientsFactory(
              std::make_shared<PizzaHutIngredientsFactory>()) {}

    ~PizzaHut() override = default;

  protected:
    std::shared_ptr<IIngredientsFactory> m_pizzaHutIngredientsFactory;
};
