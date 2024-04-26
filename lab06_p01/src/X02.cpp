
#include "X02.h"

X02::X02(int _max) : X06(_max) {

}

void X02::Write1() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "$";
    }
    X06::Write1();
    for (int i = 0; i < max; i++) {
        std::cout << "$";
    }
}

void X02::Write2() {
    for (int i = 0; i < max; i++) {
        std::cout << "$";
    }
    X06::Write2();
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "$";
    }
}

void X02::Write3() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "$";
    }
    X06::Write3();
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "$";
    }
}