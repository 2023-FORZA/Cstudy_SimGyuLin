#include <stdio.h>

int main() {

    int x[9], i, max = 0, y;
    for (i = 0; i < 9; ++i)
        scanf("%d", &x[i]);
    for (i = 0; i < 9; ++i) {
        if (x[i] > max) {
            max = x[i];
            y = i + 1;
        }
    }
    printf("%d\n", max);
    printf("%d", y);

    return 0;
}