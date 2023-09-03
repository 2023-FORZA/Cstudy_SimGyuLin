#include <stdio.h>
int d(int n) {
    int sum = n;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    int ary[10036] = { 0 };
    for (int i = 1; i < 10000; i++)
        ary[d(i)] = 1;
    for (int i = 1; i < 10000; i++)
        if (ary[i] == 0)
            printf("%d\n", i);
}