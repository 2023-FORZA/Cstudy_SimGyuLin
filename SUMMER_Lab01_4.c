#include <stdio.h>

int    note[1000010];
int    tmp[1000010];

int binarySearch(int s, int e, int data)
{
    int m;

    while (s <= e)
    {
        m = (s + e) / 2;
        if (note[m] == data) return 1;
        else if (note[m] < data) s = m + 1;
        else if (note[m] > data) e = m - 1;
    }
    return 0;
}

void init()
{
    for (register int i = 0; note[i]; i++)
    {
        note[i] = 0;
        tmp[i] = 0;
    }
}

void merge_sort(int s, int e)
{
    int idxtmp, idx1, idx2, m;

    if (s >= e) return;

    m = (s + e) / 2;
    merge_sort(s, m);
    merge_sort(m + 1, e);

    idxtmp = s; idx1 = s; idx2 = m + 1;

    while (idx1 <= m && idx2 <= e)
    {
        if (note[idx1] < note[idx2]) tmp[idxtmp++] = note[idx1++];
        else tmp[idxtmp++] = note[idx2++];
    }

    while (idx1 <= m) tmp[idxtmp++] = note[idx1++];
    while (idx2 <= e) tmp[idxtmp++] = note[idx2++];

    for (register int i = s; i <= e; i++) note[i] = tmp[i];
}

int main()
{
    int T, N, M, i, j;
    scanf("%d", &T);
    while (T--)
    {
        init();
        scanf("%d", &N);
        for (i = 0; i < N; i++)
        {
            scanf("%d", &note[i]);
        }
        merge_sort(0, N - 1);

        scanf("%d", &M);
        for (i = 0; i < M; i++)
        {
            int d = 0;
            scanf("%d", &d);
            printf("%d\n", binarySearch(0, N, d));
        }
    }

    return 0;
}
