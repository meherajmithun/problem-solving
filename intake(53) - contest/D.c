#include <stdio.h>

int main() {
    int v, t;

    while (scanf("%d %d", &v, &t) != EOF) {
        int displacement = v * 2 * t;
        printf("%d\n", displacement);
    }

    return 0;
}

