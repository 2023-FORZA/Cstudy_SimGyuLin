#include <stdio.h>

int main() {

    int j, i, n = 0, num = 0, count, cnt = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        count = 0;
        for (j = 1; j <= num; j++) {
            if (num % j == 0)
                count++;
        }
        if (count == 2)
            cnt++;
    }
    printf("%d", cnt);
    return 0;
}