#include <stdio.h>

int f1(int v1[3][3]) {

    int v2;
    int v3;
    int v4 = 0;

    for (v2 = 0; v2 < 3; v2++) {

        for (v3 = 0; v3 < 3; v3++) {

            if (v1[v2][v3] % 2 == 0) {
                v4 += v1[v2][v3];
            }

        }

    }

    return v4;
}

int f2(int v1[3][3]) {

    int v2;
    int v3;
    int v4 = v1[0][0];

    for (v2 = 0; v2 < 3; v2++) {

        for (v3 = 0; v3 < 3; v3++) {

            if (v1[v2][v3] > v4) {
                v4 = v1[v2][v3];
            }

        }

    }

    return v4;
}

int main() {

    int v1[3][3] = {
        {2, 5, 8},
        {1, 9, 4},
        {6, 3, 7}
    };

    int v2;
    int v3;

    v2 = f1(v1);
    v3 = f2(v1);

    if (v2 > 15) {
        v2 = v2 - 5;
    }

    printf("%d %d", v2, v3);

    return 0;
}