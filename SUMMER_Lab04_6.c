#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char vps[51];
	int test;
	int len;

	scanf("%d", &test);

	while (test--) {
		int top = 0;
		scanf("%s", vps);

		len = strlen(vps);

		for (int i = 0; i < len; i++) {
			if (vps[i] == '(') {
				top++;
			}
			else {
				top--;
			}
			if (top < 0) {
				break;
			}
		}
		if (top != 0) {
			printf("NO\n");
		}
		else {
			printf("YES\n");
		}
	}

	return 0;
}