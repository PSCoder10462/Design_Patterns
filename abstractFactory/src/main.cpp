#include "../include/Dominos.hpp"
#include "../include/PizzaHut.hpp"

int main() {
    Dominos dominosPizzaStore;
    auto dominosCheesePizza = dominosPizzaStore.OrderPizza("Cheese");
    dominosCheesePizza->PrintPizza();

    PizzaHut pizzaHutPizzaStore;
    auto pizzaHutPepperoniPizza = pizzaHutPizzaStore.OrderPizza("Pepperoni");
    pizzaHutPepperoniPizza->PrintPizza();
    return 0;
}
