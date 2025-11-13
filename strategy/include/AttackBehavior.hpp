#pragma once

class AttackBehavior {
  public:
    virtual void Attack() = 0;
    virtual ~AttackBehavior() = default;
};
