int main() {
	int N = 0; scanf("%d", &N);
	int cash = 1000 - N;
	int m[6] = { 500,100,50,10,5,1 };
	int i = 0, cnt = 0;
	while (cash > 0) {
		if (cash - m[i] >= 0)
		{
			cash -= m[i];
			cnt++;
		}
		else
			i++;

	}
	printf("%d", cnt);
	return 0;
}