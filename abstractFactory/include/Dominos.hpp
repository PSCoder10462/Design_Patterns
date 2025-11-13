#pragma once

#include "DominosIngredientsFactory.hpp"
#include "IIngredientsFactory.hpp"
#include "IPizza.hpp"
#include "IPizzaStore.hpp"
#include <memory>

class Dominos : public IPizzaStore {
  public:
    std::unique_ptr<IPizza> CreatePizza(const std::string &) override;

    Dominos() : m_dominosIngredientsFactory(std::make_shared<DominosIngredientsFactory>()) {}

    virtual ~Dominos() override = default;

  protected:
    std::shared_ptr<IIngredientsFactory> m_dominosIngredientsFactory;
};
