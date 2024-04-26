
#include "X05.h"

X05::X05(int _max) : X07(_max) {

}

void X05::Write1() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "*";
    }
    for (int i = 0; i < max; i++) {
        std::cout << "*";
    }
}

void X05::Write2() {
    std::cout << max;
}

void X05::Write3() {
    std::cout << max;
}