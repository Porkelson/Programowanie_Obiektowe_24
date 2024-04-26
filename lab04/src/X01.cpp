#include "X01.h"

X01::X01(int val) : X04(val) {

}

void X01::Write() {
    for (int i = 0; i < val; i++) {
        cout << "&";
    }
    X04::Write();
    for (int i = 0; i < val; i++) {
        cout << "&";
    }
}