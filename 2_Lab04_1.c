#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int n, k, s, pos;
	scanf("%d %d", &n, &k);
	int* data = (int*)malloc(sizeof(int) * (n + 2));
	int* result = (int*)malloc(sizeof(int) * (n + 2));
	for (int i = 1; i <= n; i++) {
		data[i] = i;
	}
	data[k] = 0;
	result[0] = k;
	s = 0;
	pos = k;
	for (int i = 1; i < n; i++) {
		s = 0;
		while (1) {
			if (data[pos] > 0) {
				s++;
			}
			if (s == k)break;
			pos++;
			pos %= (n + 1);
		}
		result[i] = data[pos];
		data[pos] = 0;
	}
	printf("<");
	for (int i = 0; i < n - 1; i++) {
		printf("%d, ", result[i]);
	}
	printf("%d>", result[n - 1]);
	free(data); free(result);
	return 0;
}