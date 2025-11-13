#include "../include/Grenade.hpp"
#include "../include/GrenadePlayer.hpp"
#include "../include/MyPlayer.hpp"
#include "../include/Player.hpp"
#include "../include/SwordPlayer.hpp"
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Player> myPlayer = std::make_unique<MyPlayer>();
    myPlayer->Display();
    myPlayer->Attack();

    std::cout << "Switching weapon to Grenade\n";

    myPlayer->SetAttack(std::make_unique<Grenade>());
    myPlayer->Attack();

    std::unique_ptr<Player> swordPlayer = std::make_unique<SwordPlayer>();
    swordPlayer->Display();
    swordPlayer->Attack();

    std::unique_ptr<Player> grenadePlayer = std::make_unique<GrenadePlayer>();
    grenadePlayer->Display();
    grenadePlayer->Attack();
    return 0;
}
