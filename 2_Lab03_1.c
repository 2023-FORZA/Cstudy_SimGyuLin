#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[201][4] = { 0, };
    int result[201] = { 0, };
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int k = 0; k < n; k++)
            {
                if (arr[i][j] == arr[k][j] && i != k)
                {
                    cnt = 1;
                    break;
                }
            }
            if (cnt == 0)
            {
                result[i] += arr[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", result[i]);
    }
}
