
#include "X01.h"

X01::X01(int _max) : X05(_max) {

}

void X01::Write1() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "!";
    }
    X05::Write1();
    for (int i = 0; i < max; i++) {
        std::cout << "!";
    }
}

void X01::Write2() {
    for (int i = 0; i < max; i++) {
        std::cout << "!";
    }
    X05::Write2();
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "!";
    }
}

void X01::Write3() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "!";
    }
    X05::Write3();
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "!";
    }
}