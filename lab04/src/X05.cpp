#include "X05.h"

X05::X05(int val) : X07(val) {

}

void X05::Write() {
    for (int i = 0; i < val; i++) {
        cout << "%";
    }
    X07::Write();
    for (int i = 0; i < val; i++) {
        cout << "%";
    }
}