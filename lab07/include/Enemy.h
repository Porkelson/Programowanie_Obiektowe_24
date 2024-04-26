#ifndef ENEMY_H
#define ENEMY_H

#include "GameObject.h"
#include <string>

class Enemy : public GameObject, public Renderable, public Collidable {
public:
    Enemy() : GameObject("Unnamed Enemy") {}
    Enemy(const std::string& name);
    void action() override;
};

#endif // ENEMY_H
