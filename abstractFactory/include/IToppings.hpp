#pragma once
#include <string>

class IToppings {
  public:
    const std::string &GetName() { return m_name; }

  protected:
    std::string m_name;
    IToppings(const std::string &name) : m_name(name) {}
};
