#include "X02.h"

X02::X02(int val) : X01(val) {

}

void X02::Write() {
    for (int i = 0; i < val; i++) {
        cout << "$";
    }
    X01::Write();
    for (int i = 0; i < val; i++) {
        cout << "$";
    }
}