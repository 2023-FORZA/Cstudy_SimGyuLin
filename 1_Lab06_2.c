#include<stdio.h>

int main() {
    int a, b;
    int min = 1000000, max = 1;
    int x, y;
    scanf("%d", &a);
    for (x = 0; x < a; x++) {
        scanf("%d", &b);
        if (b > max)
            max = b;
        if (b < min)
            min = b;
    }
    printf("%d\n", min * max);
    return 0;
}