#include <stdio.h>
#include <string.h>

int main(void) {
    char N[1000001];
    scanf("%[^\n]s", N);

    int len = strlen(N);
    int a = 0;
    for (int i = 0; i < len; i++) {
        if (N[i] == ' ') {
            if (i != 0 && i != len - 1)
                a++;
            if (len == 1)
                a = -1;
        }
    }
    printf("%d\n", a + 1);
}
