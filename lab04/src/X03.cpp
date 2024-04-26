#include "X03.h"

X03::X03(int val) : X06(val) {

}

void X03::Write() {
    for (int i = 0; i < val; i++) {
        cout << "!";
    }
    X06::Write();
    for (int i = 0; i < val; i++) {
        cout << "!";
    }
}