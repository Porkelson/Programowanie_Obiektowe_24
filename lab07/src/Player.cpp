#include "Player.h"
#include <iostream>

Player::Player(const std::string& name) : GameObject(name) {}

void Player::action() {
    std::cout << "Performing player-specific action for " << Name() << ":" << std::endl;
    render();
    update();
}
