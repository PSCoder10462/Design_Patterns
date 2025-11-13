#pragma once

#include "Grenade.hpp"
#include "Player.hpp"
#include <memory>

class GrenadePlayer : public Player {
  public:
    void Display() override;
    GrenadePlayer() : Player(std::make_unique<Grenade>()) {}
};
