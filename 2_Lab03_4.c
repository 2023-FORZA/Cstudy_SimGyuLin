#include <stdio.h>

int i, temp, check, cnt = 1;
int main(void)
{
    int a;
    scanf("%d", &a);
    if (a == 1) {
        printf("666");
        return 0;
    }
    for (i = 667;; i++) {
        temp = i;
        check = 0;
        while (temp) {
            if (temp % 1000 == 666) {
                check = 1;
            }
            temp /= 10;
        }
        if (check) {
            cnt++;
            if (cnt == a) {
                break;
            }
        }
    }
    printf("%d\n", i);
    return 0;
}
