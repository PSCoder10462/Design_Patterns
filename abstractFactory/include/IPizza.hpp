#pragma once
#include "ISauce.hpp"
#include "IToppings.hpp"
#include <memory>
#include <string>

class IPizza {
  public:
    // abstract factory
    virtual void Prepare() = 0;
    void Serve();
    const std::string &GetName() { return m_name; }

    virtual ~IPizza() = default;
    

    // setters
    // void Toppings(IToppings &toppings) { m_toppings = toppings; }
    // void Sauce(ISauce &sauce) { m_sauce = &sauce; }

    // getters
    // IToppings &Toppings() { return *m_toppings; }
    // ISauce &Sauce() { return *m_sauce; }

    void PrintPizza();

  protected:
    IPizza(const std::string &name) : m_name(name) {}

    std::string m_name;

    std::unique_ptr<IToppings> m_toppings;
    std::unique_ptr<ISauce> m_sauce;
};
