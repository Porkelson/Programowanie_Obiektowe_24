#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include <vector>
#include <string>
#include <algorithm>
#include "Renderable.h"
#include "Collidable.h"

class GameObject {
public:
    GameObject(const std::string& name) : name(name) {}
    virtual ~GameObject() {}
    virtual void action() = 0;
    std::string Name() const { return name; }

    static GameObject* addGameObject(GameObject* gameObject);
    static void destroyGameObject(GameObject* gameObject);
    static void destroyGameObjects();
    static std::vector<GameObject*> ActiveGameObjects();

protected:
    std::string name;
    static std::vector<GameObject*> gameObjects;
};

#endif // GAMEOBJECT_H
