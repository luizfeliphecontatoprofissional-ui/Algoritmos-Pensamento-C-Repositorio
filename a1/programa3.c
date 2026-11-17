#include <stdio.h>

int main() {

    int v1[8] = {7, 3, 9, 3, 5, 8, 3, 4};

    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    int v5 = 0;
    int v6 = v1[0];
    int v7 = 3;

    for (v2 = 0; v2 < 8; v2++) {

        v3 += v1[v2];

        if (v1[v2] == v7) {
            v4++;
        }

        if (v1[v2] > v6) {
            v6 = v1[v2];
        }
    }

    while (v5 < 8) {

        if (v1[v5] % 2 == 0) {
            v3--;
        }

        v5++;
    }

    printf("%d %d %d", v4, v6, v3);

    return 0;
}