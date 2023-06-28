#include <stdio.h>

int main()
{
    char S[100];
    scanf("%s", S);
    for (int i = 97; i <= 122; i++) {
        int a = 0;
        while (S[a] != 0) {
            if (S[a] == i) break;
            a++;
        }
        if (S[a] == i) printf("%d ", a);
        else printf("-1 ");
    }
    return 0;
}