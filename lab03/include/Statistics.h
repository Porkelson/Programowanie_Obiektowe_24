#include <vector>
#include <limits>
#include <iostream>

class Statistics {
public:
    Statistics();
    void operator()(int x);
    void Print() const;

private:
    int count;
    double sum;
    int min;
    int max;
};