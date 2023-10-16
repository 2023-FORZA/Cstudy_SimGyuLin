#include <stdio.h>

int N, M;

int a[1000100];
int b[1000100];

int main(void)
{
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) scanf("%d", &a[i]);
	for (int i = 0; i < M; i++) scanf("%d", &b[i]);

	int i, j;

	i = j = 0;
	while (i < N && j < M)
	{
		if (a[i] <= b[j]) printf("%d ", a[i++]);
		else printf("%d ", b[j++]);
	}

	while (i < N) printf("%d ", a[i++]);
	while (j < M) printf("%d ", b[j++]);

	return 0;
}