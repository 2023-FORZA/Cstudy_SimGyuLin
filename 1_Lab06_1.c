#include <stdio.h>
int main() {

    int number[3] = { 1, 2, 3 }, M = 0;
    scanf("%d", &M);
    int temp = 0, x = 0, y = 0, a = 0, b = 0;

    for (int i = 0; i < M; i++) {

        scanf("%d %d", &x, &y);

        for (int k = 0; k < 3; k++) {
            if (number[k] == x) a = k;
            else if (number[k] == y) b = k;
        }
        temp = number[a];
        number[a] = number[b];
        number[b] = temp;


    }
    printf("%d", number[0]);
    return 0;
}