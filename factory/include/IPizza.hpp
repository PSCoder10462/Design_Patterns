#pragma once
#include <string>

class IPizza {
  public:
    void prepare();
    void serve();
    const std::string &Name();
    void makeInvalid();
    const bool &isValid();

  protected:
    /* Make constructor protected
     * hack to prevent this class's instantiation
     */
    IPizza(const std::string &n) : name(n) {}

    std::string name;
    bool m_isValid = true;
};
