#pragma once

#include "AttackBehavior.hpp"

class Grenade : public AttackBehavior {
  public:
    void Attack() override;
};
