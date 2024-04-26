#include "X06.h"

X06::X06(int val) : X04(val) {

}

void X06::Write() {
    for (int i = 0; i < val; i++) {
        cout << "*";
    }
    X04::Write();
    for (int i = 0; i < val; i++) {
        cout << "*";
    }
}