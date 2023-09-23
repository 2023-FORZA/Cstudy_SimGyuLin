#include <stdio.h> 

int N;
int a, b, up, max, nowup;
int main() {
	scanf("%d", &N);
	scanf("%d", &a);
	for (int i = 1; i < N; i++) {
		scanf("%d", &b);
		if (a < b) {
			up = b - a;
			nowup += up;
			if (nowup > max) { max = nowup; }
		}
		else {
			up = 0;
			nowup = 0;
		}
		a = b;
	}
	printf("%d", max);

	return 0;
}