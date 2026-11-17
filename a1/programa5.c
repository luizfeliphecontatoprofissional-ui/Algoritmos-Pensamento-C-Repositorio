#include <stdio.h>

struct T1 {
    int v1;
    int v2;
};

void f1(struct T1 v1[], int v2) {

    FILE *v3;

    v3 = fopen("dados.txt", "w");

    for (int v4 = 0; v4 < v2; v4++) {
        fprintf(v3, "%d %d\n", v1[v4].v1, v1[v4].v2);
    }

    fclose(v3);
}

int f2(struct T1 v1[], int v2) {

    int v3 = 0;

    for (int v4 = 0; v4 < v2; v4++) {

        if (v1[v4].v2 > 5) {
            v3++;
        }

    }

    return v3;
}

int main() {

    struct T1 v1[4] = {
        {2, 7},
        {4, 3},
        {6, 8},
        {5, 9}
    };

    int v2;

    f1(v1, 4);

    v2 = f2(v1, 4);

    printf("%d", v2);

    return 0;
}