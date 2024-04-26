#include "X07.h"

X07::X07(int val) : X06(val) {

}

X07::X07() : X07(1) {

}

void X07::Write() {
    for (int i = 0; i < val; i++) {
        cout << "@";
    }
    X06::Write();
    for (int i = 0; i < val; i++) {
        cout << "@";
    }
}