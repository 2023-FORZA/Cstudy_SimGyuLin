#include <stdio.h>

int new(int n){
	int sum = n / 10 + n % 10;
	int i = ((10 * (n % 10)) + sum % 10);
	return i;
}

int main() {
	int n;
	scanf("%d", &n);
	int comp = n;
	int c = 0;

	new(n);

	while (1) {
		n = new(n);
		c++;
		if (n == comp) {
			break;
		}
	}
	printf("%d", c);
}