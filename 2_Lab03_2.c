#include <stdio.h>

int main() {
    int L, P, V;
    int day = 0, count = 1;
    while (1) {
        scanf("%d %d %d", &L, &P, &V);
        if (L == 0 && P == 0 && V == 0) break;
        else {
            day += L * (V / P);
            if (V % P <= L)
                day += V % P;
            else
                day += L;

        }
        printf("Case %d: %d\n", count, day);
        count++;
        day = 0;

    }
    return 0;

}