
#include "X04.h"

X04::X04(int _max) : X03(_max) {

}

void X04::Write1() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "%";
    }
    X03::Write1();
    for (int i = 0; i < max; i++) {
        std::cout << "%";
    }
}

void X04::Write2() {
    for (int i = 0; i < max; i++) {
        std::cout << "%";
    }
    X03::Write2();
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "%";
    }
}

void X04::Write3() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "%";
    }
    X03::Write3();
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "%";
    }
}