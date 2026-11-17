#include <stdio.h>

int main() {

    int v1 = 12;
    int v2 = 5;
    int v3 = 8;
    int v4;

    v4 = (v1 - v2) * 2 + v3 / 2;

    if (v4 > 20 && v2 < v3) {
        v4 = v4 - 3;
    }
    else if (v4 >= 15 || v1 == 10) {
        v4 = v4 + 5;
    }
    else {
        v4 = v4 * 2;
    }

    if (!(v1 < v3)) {
        v4 = v4 + 1;
    }

    printf("%d", v4);

    return 0;
}