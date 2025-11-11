#include "../include/IPizza.hpp"
#include <iostream>

void IPizza::prepare() { std::cout << "Preparing: " << name << std::endl; }

void IPizza::serve() { std::cout << "Serving: " << name << std::endl; }

const std::string &IPizza::Name() { return name; }

void IPizza::makeInvalid() { m_isValid = false; }

const bool &IPizza::isValid() { return m_isValid; }
