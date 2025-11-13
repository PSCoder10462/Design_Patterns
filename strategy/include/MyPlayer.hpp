#pragma once

#include "Player.hpp"
#include "Sword.hpp"
#include <memory>

class MyPlayer : public Player {
  public:
    void Display() override;
    MyPlayer() : Player(std::make_unique<Sword>()) {}
};
