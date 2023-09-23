#include<stdio.h>

int main()
{
	int num[1000], up = 0, i, j, a, b, sum = 0;

	for (i = 0; i < 1000; i++) {
		for (j = 0; j < i; j++) {
			if (up == 1000)
				break;

			num[up] = i;
			up++;
		}
	}
	scanf("%d %d", &a, &b);

	for (i = a - 1; i < b; i++) {
		sum += num[i];
	}

	printf("%d\n", sum);

	return 0;
}