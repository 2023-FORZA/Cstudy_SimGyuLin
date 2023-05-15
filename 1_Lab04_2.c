#include <stdio.h>

int main() {
    int n, count, total = 0;
    scanf("%d", &n);

    for (count = 1; count != n + 1; count += 1) {
        total += count;
    }
    printf("%d", total);
    return 0;
}