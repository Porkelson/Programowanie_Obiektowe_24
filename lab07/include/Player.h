#ifndef PLAYER_H
#define PLAYER_H

#include "GameObject.h"
#include <string>

class Player : public GameObject, public Renderable, public Collidable {
public:
    Player() : GameObject("Unnamed Player") {}
    Player(const std::string& name);
    void action() override;
};

#endif // PLAYER_H
