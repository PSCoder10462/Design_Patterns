#pragma once

#include "IIngredientsFactory.hpp"
#include "IPizza.hpp"
#include <memory>

class CheesePizza : public IPizza {
  public:
    CheesePizza(std::shared_ptr<IIngredientsFactory> ingredientsFactory)
        : IPizza("Common cheese pizza"),
          m_ingredientsFactory(ingredientsFactory) {}

    void Prepare() override;

    virtual ~CheesePizza() = default;

  protected:
    std::shared_ptr<IIngredientsFactory> m_ingredientsFactory;
};

class PepperoniPizza : public IPizza {
  public:
    PepperoniPizza(std::shared_ptr<IIngredientsFactory> ingredientsFactory)
        : IPizza("Common pepperoni pizza"),
          m_ingredientsFactory(ingredientsFactory) {}

    void Prepare() override;

    virtual ~PepperoniPizza() = default;

  protected:
    std::shared_ptr<IIngredientsFactory> m_ingredientsFactory;
};
