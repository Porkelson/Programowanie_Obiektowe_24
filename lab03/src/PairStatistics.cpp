#include <iostream>
#include "PairStatistics.h"

PairStatistics::PairStatistics() : equalPairs(0), increasingPairs(0), decreasingPairs(0) {}

void PairStatistics::operator()(int x, int y) {
    if (x == y) equalPairs++;
    else if (x < y) increasingPairs++;
    else decreasingPairs++;
}

void PairStatistics::Print() const {
    std::cout << "Liczba par rownych: " << equalPairs << "\n";
    std::cout << "Liczba par rosnacych: " << increasingPairs << "\n";
    std::cout << "Liczba par malejacych: " << decreasingPairs << "\n";
}