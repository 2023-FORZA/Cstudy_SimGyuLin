#include <stdio.h>

int main() {
	char castle[50][50] = { 0 };
	int n, m, i, j, first, second;

	scanf("%d %d", &n, &m);
	getchar();

	first = n;
	second = m;

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++)
			castle[i][j] = getchar();
		getchar();
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (castle[i][j] == 'X') {
				first--;
				break;
			}
		}
	}

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {
			if (castle[j][i] == 'X') {
				second--;
				break;
			}
		}
	}

	if (first > second)
		printf("%d", first);
	else
		printf("%d", second);

	return 0;
}