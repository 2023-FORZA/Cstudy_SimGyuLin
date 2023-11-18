#include <stdio.h>

int main()
{
    int N[46] = { 0, 1 };
    int n = 0;

    for (int i = 2; i < sizeof(N) / sizeof(int); i++) {
        N[i] = N[i - 1] + N[i - 2];
    }

    scanf("%d", &n);

    printf("%d\n", N[n]);

    return 0;
}