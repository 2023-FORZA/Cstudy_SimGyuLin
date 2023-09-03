#include <stdio.h>

int main(void)
{
    int n;
    long long a, b, max, min, gcd, lcm, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%lld %lld", &a, &b);
        max = a;
        min = b;
        if (max <= b) {
            max = b;
        }
        if (min >= a) {
            min = a;
        }
        if (max % min == 0) {
            gcd = min;
        }
        else if (max % min != 0) {
            do {
                temp = min;
                min = max % min;
                max = temp;
            } while (max % min != 0);
            gcd = min;
        }
        lcm = (a * b) / gcd;
        printf("%lld\n", lcm);
    }

    return 0;
}