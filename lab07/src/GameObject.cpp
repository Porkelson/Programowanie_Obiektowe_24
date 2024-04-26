#include "GameObject.h"

std::vector<GameObject*> GameObject::gameObjects;

GameObject* GameObject::addGameObject(GameObject* gameObject) {
    gameObjects.push_back(gameObject);
    return gameObject;
}

void GameObject::destroyGameObject(GameObject* gameObject) {
    auto it = std::find(gameObjects.begin(), gameObjects.end(), gameObject);
    if (it != gameObjects.end()) {
        delete *it;
        gameObjects.erase(it);
    }
}

void GameObject::destroyGameObjects() {
    for (GameObject* gameObject : gameObjects) {
        delete gameObject;
    }
    gameObjects.clear();
}

std::vector<GameObject*> GameObject::ActiveGameObjects() {
    return gameObjects;
}
