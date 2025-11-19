#pragma once

#include "Engine.hpp"
#include "Lights.hpp"
class FacadeCar {
  public:
    void On();
    void Off();
    FacadeCar(const Engine &, const Lights &);

  private:
    Engine m_engine;
    Lights m_lights;
};
