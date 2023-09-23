#include<stdio.h>
int main()
{
	int t, n, m, bridge, i, j;
	scanf("%d", &t);
	for (i = 0; i < t; i++)
	{
		bridge = 1;
		scanf("%d %d", &n, &m);
		for (j = 0; j < n; j++)
		{
			bridge *= m - j;
			bridge /= 1 + j;
		}
		printf("%d\n", bridge);
	}
	return 0;
}