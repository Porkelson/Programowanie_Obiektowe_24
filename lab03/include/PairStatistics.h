#include <vector>

class PairStatistics {
public:
    PairStatistics();
    void operator()(int x, int y);
    void Print() const;

private:
    int equalPairs;
    int increasingPairs;
    int decreasingPairs;
};