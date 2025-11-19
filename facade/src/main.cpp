#include "../include/FacadeCar.hpp"

int main() {
    Engine engine;
    Lights lights;
    FacadeCar facadeCar(engine, lights);
    facadeCar.On();
    facadeCar.Off();
}
