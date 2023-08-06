#include <stdio.h>
#include <string.h>

int main() {
	int res[26] = { 0 }, len;
	char str[101];

	while (gets(str) != '\0')
	{
		len = strlen(str);

		for (int i = 0; i < 4; i++)
			res[i] = 0;

		for (int i = 0; i < len; i++)
		{
			if (str[i] == ' ')
				res[3]++;
			else if ('0' <= str[i] && str[i] <= '9')
				res[2]++;
			else if ('A' <= str[i] && str[i] <= 'Z')
				res[1]++;
			else if ('a' <= str[i] && str[i] <= 'z')
				res[0]++;
		}

		for (int i = 0; i < 4; i++)
			printf("%d ", res[i]);
		printf("\n");
	}

	return 0;
}