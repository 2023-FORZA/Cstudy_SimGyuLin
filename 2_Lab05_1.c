#include <stdio.h>

int main()
{
	int C, N, i, j;
	double score[1001] = {};
	double sum = 0, avg = 0, cnt = 0;

	scanf("%d", &C);

	for (i = 0; i < C; i++)
	{
		scanf("%d ", &N);
		for (j = 0; j < N; j++)
		{
			scanf("%lf", &score[j]);
		}
		for (j = 0; j < N; j++)
		{
			sum += score[j];
		}
		avg = sum / N;
		for (j = 0; j < N; j++)
		{
			if (score[j] > avg)
			{
				cnt++;
			}
		}
		avg = cnt / N * 100;
		printf("%5.3f%%\n", avg);
		avg = 0;
		sum = 0;
		cnt = 0;
	}
	return 0;
}