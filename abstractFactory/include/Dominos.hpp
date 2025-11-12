#pragma once

#include "DominosIngredientsFactory.hpp"
#include "IIngredientsFactory.hpp"
#include "IPizza.hpp"
#include "IPizzaStore.hpp"

class Dominos : public IPizzaStore {
  public:
    IPizza &CreatePizza(const std::string &) override;

    Dominos() { m_dominosIngredientsFactory = new DominosIngredientsFactory(); }

    virtual ~Dominos() {
        if (m_dominosIngredientsFactory) {
            delete m_dominosIngredientsFactory;
            m_dominosIngredientsFactory = nullptr;
        }
    }

  protected:
    IIngredientsFactory *m_dominosIngredientsFactory = nullptr;
};
