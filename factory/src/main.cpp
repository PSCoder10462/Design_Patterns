#include "./Dominos.cpp"
#include "./PizzaHut.cpp"
#include <iostream>

int main() {
    Dominos Dominos;
    PizzaHut pizzaHut;

    IPizza &domPizza = Dominos.OrderPizza("DominosPizza2");
    std::cout << "Got: " << (domPizza.isValid() ? domPizza.Name() : "no pizza")
              << std::endl;
    IPizza &domPizza1 = Dominos.OrderPizza("invalid order");
    std::cout << "Got: " << (domPizza1.isValid() ? domPizza.Name() : "no pizza")
              << std::endl;
    IPizza &phPizza = pizzaHut.OrderPizza("PizzaHutPizza1");
    std::cout << "Got: " << (phPizza.isValid() ? domPizza.Name() : "no pizza")
              << std::endl;

    return 0;
}
