#pragma once
#include <iostream>

using namespace std;

class X04 {
protected:
    int val = 1;
public:
    X04() = default;
    X04(int);
    void Write();
};

