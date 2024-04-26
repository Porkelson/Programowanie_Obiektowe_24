#pragma once
#include <iostream>

class X07 {
protected:
    int max;
public:
    X07(int _max) {
        max = _max;
    }
    virtual void Write1() = 0;

    void Write2() {
        std::cout << max;
    }
    void Write3() {
        std::cout << max;
    }
};