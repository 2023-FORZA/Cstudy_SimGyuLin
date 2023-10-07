#include <stdio.h>

int main() {
	int n, a, b, arr[14], sum = 0, fi = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		for (int i = 1; i <= 14; i++) {
			arr[i - 1] = i;
		}
		if (a == 0) printf("%d\n", arr[b - 1]);
		for (int j = 1; j <= a; j++) {
			for (int k = 0; k < b; k++) {
				sum += arr[k];
				arr[k] = sum;
			}
			fi = sum;
			sum = 0;
		}
		printf("%d\n", fi);
	}
	return 0;
}