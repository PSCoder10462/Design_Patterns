#include "../include/CommonPizzas.hpp"

void CheesePizza::Prepare() {
    m_toppings = m_ingredientsFactory->CreateToppings();
    m_sauce = m_ingredientsFactory->CreateSauce();
}

void PepperoniPizza::Prepare() {
    m_toppings = m_ingredientsFactory->CreateToppings();
    m_sauce = m_ingredientsFactory->CreateSauce();
}
