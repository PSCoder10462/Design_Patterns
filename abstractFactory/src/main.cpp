#include "../include/Dominos.hpp"
#include "../include/PizzaHut.hpp"

int main() {
    Dominos dominosPizzaStore;
    IPizza &dominosCheesePizza = dominosPizzaStore.OrderPizza("Cheese");
    dominosCheesePizza.PrintPizza();

    PizzaHut pizzaHutPizzaStore;
    IPizza &pizzaHutPepperoniPizza = pizzaHutPizzaStore.OrderPizza("Pepperoni");
    pizzaHutPepperoniPizza.PrintPizza();
    return 0;
}
