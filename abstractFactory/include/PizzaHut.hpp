#pragma once

#include "IIngredientsFactory.hpp"
#include "IPizza.hpp"
#include "IPizzaStore.hpp"
#include "PizzaHutIngredientsFactory.hpp"

class PizzaHut : public IPizzaStore {
  public:
    IPizza &CreatePizza(const std::string &) override;

    PizzaHut() {
        m_pizzaHutIngredientsFactory = new PizzaHutIngredientsFactory();
    }

    virtual ~PizzaHut() {
        if (m_pizzaHutIngredientsFactory) {
            delete m_pizzaHutIngredientsFactory;
            m_pizzaHutIngredientsFactory = nullptr;
        }
    }

  protected:
    IIngredientsFactory *m_pizzaHutIngredientsFactory = nullptr;
};
