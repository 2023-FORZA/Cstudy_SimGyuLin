#include <stdio.h>

int main() {
    int N, sum = 0;
    char a[101];
    scanf("%d", &N);
    scanf("%s", a);
    for (int i = 0; i < N; i++) {
        sum += a[i] - '0';
    }
    printf("%d", sum);

    return 0;
}