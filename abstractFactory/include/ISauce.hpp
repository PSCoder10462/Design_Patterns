#pragma once
#include <string>

class ISauce {
  public:
    const std::string &GetName() { return m_name; }

  protected:
    std::string m_name;
    ISauce(const std::string &name) : m_name(name) {}
};
