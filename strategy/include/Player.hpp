#pragma once

#include "AttackBehavior.hpp"
#include <memory>

class Player {
  public:
    virtual void Display() = 0;
    void Attack();
    Player(std::unique_ptr<AttackBehavior> attackBehavior)
        : m_attackBehavior(std::move(attackBehavior)) {}
    void SetAttack(std::unique_ptr<AttackBehavior> attackBehavior) {
        m_attackBehavior = std::move(attackBehavior);
    }

  protected:
    std::unique_ptr<AttackBehavior> m_attackBehavior;
};
