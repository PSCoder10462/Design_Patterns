#pragma once

#include "IIngredientsFactory.hpp"
#include "IPizza.hpp"

class CheesePizza : public IPizza {
  public:
    CheesePizza(IIngredientsFactory &ingredientsFactory)
        : IPizza("Common cheese pizza"),
          m_ingredientsFactory(&ingredientsFactory) {}

    void Prepare() override;

    virtual ~CheesePizza() {
        if (m_ingredientsFactory) {
            delete m_ingredientsFactory;
            m_ingredientsFactory = nullptr;
        }
    }

  protected:
    IIngredientsFactory *m_ingredientsFactory = nullptr;
};

class PepperoniPizza : public IPizza {
  public:
    PepperoniPizza(IIngredientsFactory &ingredientsFactory)
        : IPizza("Common pepperoni pizza"),
          m_ingredientsFactory(&ingredientsFactory) {}

    void Prepare() override;

    virtual ~PepperoniPizza() {
        if (m_ingredientsFactory) {
            delete m_ingredientsFactory;
            m_ingredientsFactory = nullptr;
        }
    }
  protected:
    IIngredientsFactory *m_ingredientsFactory = nullptr;
};
