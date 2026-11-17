#include <stdio.h>

int main() {

    int v1 = 0;
    int v2 = 0;
    int v3 = 1;
    int v4 = 0;
    int v5 = 0;
    int v6 = 0;

    for (v1 = 1; v1 <= 4; v1++) {

        for (v2 = 1; v2 <= 3; v2++) {

            if ((v1 + v2) % 2 == 0) {
                v4 += v1;
            }
            else {
                v4 += v2;
            }

        }

    }

    while (v3 < 20) {

        if (v3 % 3 == 0) {
            v5++;
        }

        v3 += 4;
    }

    do {

        v6 += 2;

        if (v6 > 5 && v6 < 10) {
            v4--;
        }

    } while (v6 < 10);

    printf("%d %d %d", v4, v5, v6);

    return 0;
}