#include <stdio.h>

int main() {
    int n, sum = 0;

    char* p;

    scanf("%d", &n);

    getchar();
    p = (char*)malloc(sizeof(char) * (n + 1));

    gets(p);
    for (int i = 0; p[i] != NULL; i++) {
        sum = sum + p[i] - '0';
    }

    printf("%d", sum);
    return 0;
}