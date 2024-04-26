#ifndef COLLIDABLE_H
#define COLLIDABLE_H

#include "Updatable.h"

class Collidable : virtual public Updatable {
public:
    virtual ~Collidable() {}
    virtual void collide();
};

#endif // COLLIDABLE_H
