#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char* p;
    int n, s;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {

        int c = 0, total = 0;

        p = (char*)malloc(81 * sizeof(char));

        scanf("%s", p);

        for (int j = 0; j < strlen(p); j++) {
            if (p[j] == 'O') {
                c++;
                total += c;
            }
            else {
                c = 0;
            }
        }
        printf("%d\n", total);

        free(p);
    }
    return 0;
}