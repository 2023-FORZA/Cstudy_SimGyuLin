#include <stdio.h>

int main() {
    struct {
        int x;
        int y;
    } s[50];
    int i, num, j, rank;
    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &s[i].x);
        scanf("%d", &s[i].y);
    }
    for (i = 0; i < num; i++) {
        rank = 0;
        for (j = 0; j < num; j++) {
            if (s[i].x < s[j].x && s[i].y < s[j].y)
                rank += 1;
        }
        printf("%d ", ++rank);
    }
    return 0;
}