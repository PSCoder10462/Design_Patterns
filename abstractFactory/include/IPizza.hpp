#pragma once
#include "ISauce.hpp"
#include "IToppings.hpp"
#include <string>

class IPizza {
  public:
    virtual void Prepare() = 0;
    void Serve();
    const std::string &GetName() { return m_name; }

    virtual ~IPizza() {
        if (m_toppings)
            delete m_toppings;
        if (m_sauce)
            delete m_sauce;
    }

    // setters
    void Toppings(IToppings &toppings) { m_toppings = &toppings; }
    void Sauce(ISauce &sauce) { m_sauce = &sauce; }

    // getters
    IToppings &Toppings() { return *m_toppings; }
    ISauce &Sauce() { return *m_sauce; }

    void PrintPizza();

  protected:
    IPizza(const std::string &name) : m_name(name) {}

    std::string m_name;

    IToppings *m_toppings = nullptr;
    ISauce *m_sauce = nullptr;
};
