#include <stdio.h>

int main()
{
	int arr[9];
	int sum = 0;
	for (int i = 0; i < 9; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 9; i++)
		sum += arr[i];

	for (int i = 0; i < 9; i++)
		for (int j = i + 1; j < 9; j++)
			if (sum - arr[i] - arr[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j)
						continue;
					else
						printf("%d\n", arr[k]);
				}
			}
	return 0;
}