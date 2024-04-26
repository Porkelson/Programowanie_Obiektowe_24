
#include "X06.h"

X06::X06(int _max) : X07(_max) {

}

void X06::Write1() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "&";
    }
    for (int i = 0; i < max; i++) {
        std::cout << "&";
    }
}

void X06::Write2() {
    for (int i = 0; i < max; i++) {
        std::cout << "&";
    }
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "&";
    }
}

void X06::Write3() {
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "&";
    }
    for (int i = 0; i < 2 * max; i++) {
        std::cout << "&";
    }
}
