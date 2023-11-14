#include <stdio.h>

int main(void) {

	int n, a = 1, i = 1;

	scanf("%d", &n);

	while (1) {
		if (n <= a) {
			break;
		}
		a += 6 * i;
		i++;
	}
	printf("%d\n", i);

	return 0;
}