#include <stdio.h>

int main() {
    int N, width = 0, height = 0;
    scanf("%d", &N);
    char room[N][N];
    for (int k = 0; k < N; k++) {
        getchar();
        for (int i = 0; i < N; i++) {
            scanf("%c", &room[k][i]);
        }
    }
    for (int k = 0; k < N; k++) {
        int flag = 0;

        for (int i = 1; i < N; i++) {
            if (room[k][i] == '.' && room[k][i - 1] == '.' && !flag) {
                width++;
                flag = 1;
            }
            else if (!(room[k][i] == '.' && room[k][i - 1] == '.'))
                flag = 0;
        }
    }
    for (int i = 0; i < N; i++) {
        int flag = 0;
        for (int k = 1; k < N; k++) {
            if (room[k][i] == '.' && room[k - 1][i] == '.' && !flag) {
                height++;
                flag = 1;
            }
            else if (!(room[k][i] == '.' && room[k - 1][i] == '.'))
                flag = 0;
        }
    }
    printf("%d %d\n", width, height);
    return 0;
}