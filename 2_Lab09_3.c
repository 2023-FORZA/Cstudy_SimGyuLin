#include <stdio.h>
#define max(a,b) ((a)>(b)? (a):(b))
#define min(a,b) ((a)<(b)? (a):(b))
int d[1003][3];
double w[1003];
int main() {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		int n, m;
		double mini = 987654321, maxi = -1;
		scanf("%d %d", &n, &m);
		for (int i = 1; i <= n; i++) {
			d[i][1] = 0; d[i][0] = 0;
		}
		for (int i = 1; i <= m; i++) {
			int a, b, p, q;
			scanf("%d %d %d %d", &a, &b, &p, &q);
			d[a][1] += p; d[b][1] += q; d[a][0] += q; d[b][0] += p;
		}
		for (int i = 1; i <= n; i++) {
			int s = d[i][1] * d[i][1], a = d[i][0] * d[i][0];
			if (s == 0 && a == 0)w[i] = 0;
			else w[i] = (double)s / (s + a);
			w[i] = (int)(w[i] * 1000);
			maxi = max(maxi, w[i]);
			mini = min(mini, w[i]);
		}
		printf("%.0lf\n%.0lf\n", maxi, mini);
	}
	return 0;
}