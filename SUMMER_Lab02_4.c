#include <stdio.h>
int main() {
    int x;
    int y;

    scanf("%d %d", &x, &y);

    y -= 45;
    if (y < 0) {
        y += 60;
        x -= 1;

        if (x < 0) {
            x = 23;
        }
    }
    printf("%d %d", x, y);

    return 0;
}