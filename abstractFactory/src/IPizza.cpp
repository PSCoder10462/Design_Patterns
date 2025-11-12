#include "../include/IPizza.hpp"
#include <iostream>

void IPizza::Serve() {
    std::cout << "Serving " << m_name << std::endl;
}

void IPizza::PrintPizza() {
    std::cout << "Pizza Details: " << std::endl;
    std::cout << "Name: " << m_name << std::endl;
    std::cout << "Toppings: " << m_toppings->GetName() << std::endl;
    std::cout << "Sauce: " << m_sauce->GetName() << std::endl;
    std::cout << "************\n";
}

