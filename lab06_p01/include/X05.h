#pragma once
#include "X07.h"

class X05 : public X07 {
public:
    X05(int _max);
    void Write1();
    void Write2();
    virtual void Write3();
};
