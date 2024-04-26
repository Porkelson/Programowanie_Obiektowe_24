#include "Enemy.h"
#include <iostream>

Enemy::Enemy(const std::string& name) : GameObject(name) {}

void Enemy::action() {
    std::cout << "Performing enemy-specific action for " << Name() << ":" << std::endl;
    render();
    collide();
    update();
}
