#pragma once

#include "Player.hpp"
#include "Sword.hpp"
#include <memory>

class SwordPlayer : public Player {
  public:
    void Display() override;
    SwordPlayer() : Player(std::make_unique<Sword>()) {}
};
