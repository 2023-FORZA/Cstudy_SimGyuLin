#include <stdio.h>

int main() {
    char blank[8][8];
    int count = 0;
    int i, j;

    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            scanf(" %c", &blank[i][j]);
        }
    }
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if (i % 2 == 1 && j % 2 == 1 && blank[i][j] == 'F') {
                count++;
            }
            else if (i % 2 == 0 && j % 2 == 0 && blank[i][j] == 'F') {
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
