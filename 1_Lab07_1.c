#include <stdio.h>
#include <string.h>
int main()
{
    int T;
    int R;
    char S[20];
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d %s", &R, S);
        for (int a = 0; a < strlen(S); a++) {
            for (int b = 0; b < R; b++) {
                printf("%c", S[a]);
            }
        }
        printf("\n");
    }
    return 0;
}