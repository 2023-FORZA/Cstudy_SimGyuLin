#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int stick = 64, s, n, cnt = 1;
    scanf("%d", &n);
    while (1) {
        if (stick == n) break;
        else if (stick < n) {
            s = stick;
            while (1) {
                s /= 2;
                if ((stick + s) > n) continue;
                else {
                    stick += s;
                    cnt++;
                }
                if (stick == n) break;
            }
        }
        else stick /= 2;
    }
    printf("%d", cnt);
    return 0;
}