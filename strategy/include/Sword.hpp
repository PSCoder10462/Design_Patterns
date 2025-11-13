#pragma once

#include "AttackBehavior.hpp"

class Sword : public AttackBehavior {
  public:
    void Attack() override;
};
