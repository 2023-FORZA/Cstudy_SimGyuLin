#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int n, group = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		char str[101];
		scanf("%s", str);
		int flag = 0;
		int len = strlen(str);
		for (int j = 0; j < len - 1; j++)
		{
			for (int k = len - 1; k > j + 1; k--)
			{
				if ((str[k] == str[j]) && (str[k - 1] != str[j])) flag = 1;
			}
			if (flag == 1) break;
		}
		if (flag == 0) group++;
	}
	printf("%d", group);

}