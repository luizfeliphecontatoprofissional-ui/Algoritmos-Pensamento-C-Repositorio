#include <stdio.h>

void f1(int *v1) {

    *v1 = *v1 + 3;

}

void f2(int v1[], int *v2) {

    int v3;

    for (v3 = 0; v3 < 5; v3++) {

        if (v1[v3] % 2 == 0) {
            (*v2)++;
        }

    }

}

int main() {

    int v1[5] = {4, 7, 2, 9, 6};

    int v2 = 1;
    int v3 = 0;

    f1(&v2);

    f2(v1, &v3);

    if (v3 > 2) {
        f1(&v3);
    }

    printf("%d %d", v2, v3);

    return 0;
}