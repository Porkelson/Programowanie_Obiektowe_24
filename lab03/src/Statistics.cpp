#include <iostream>
#include "Statistics.h"

Statistics::Statistics() : count(0), sum(0), min(std::numeric_limits<int>::max()), max(std::numeric_limits<int>::min()) {}

void Statistics::operator()(int x) {
    sum += x;
    count++;
    if (x < min) min = x;
    if (x > max) max = x;
}

void Statistics::Print() const {
    std::cout << "Srednia z wyrazow ciagu: " << sum / count << "\n";
    std::cout << "Najmniejszy wyraz ciagu: " << min << "\n";
    std::cout << "Najwiekszy wyraz ciagu: " << max << "\n";
}