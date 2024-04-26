
#include "X03.h"

X03::X03() : X05(1) {

}

X03::X03(int _max) : X05(_max) {

}

void X03::Write1() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "@";
    }
    X05::Write1();
    for (int i = 0; i < max; i++) {
        std::cout << "@";
    }
}

void X03::Write2() {
    for (int i = 0; i < max; i++) {
        std::cout << "@";
    }
    X05::Write2();
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "@";
    }
}

void X03::Write3() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "@";
    }
    X05::Write3();
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "@";
    }
}