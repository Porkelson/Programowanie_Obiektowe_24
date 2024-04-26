#ifndef RENDERABLE_H
#define RENDERABLE_H

#include "Updatable.h"

class Renderable : virtual public Updatable {
public:
    virtual ~Renderable() {}
    virtual void render();
};

#endif // RENDERABLE_H
