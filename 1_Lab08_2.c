#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	int kor;
	int eng;
	int math;
	char name[11];
}s;

s ar[100001];
s ar_copy[100001];

void merge(int start, int mid, int end) {
	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end) {
		if (ar[i].kor > ar[j].kor) {
			ar_copy[k] = ar[i++];
		}
		else if (ar[i].kor < ar[j].kor) {
			ar_copy[k] = ar[j++];
		}
		else {
			if (ar[i].eng < ar[j].eng) {
				ar_copy[k] = ar[i++];
			}
			else if (ar[i].eng > ar[j].eng) {
				ar_copy[k] = ar[j++];
			}
			else {
				if (ar[i].math > ar[j].math) { 
					ar_copy[k] = ar[i++];
				}
				else if (ar[i].math < ar[j].math) {
					ar_copy[k] = ar[j++];
				}
				else {
					if (strcmp(ar[i].name, ar[j].name) > 0) {
						ar_copy[k] = ar[j++];
					}
					else {
						ar_copy[k] = ar[i++];
					}
				}
			}
		}
		k++;
	}
	if (i > mid) {
		for (int m = j; m <= end; m++) {
			ar_copy[k++] = ar[m];
		}
	}
	else {
		for (int m = i; m <= mid; m++) {
			ar_copy[k++] = ar[m];
		}
	}
	for (int m = start; m <= end; m++) {
		ar[m] = ar_copy[m];
	}
}

void merge_sort(int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_sort(start, mid);
		merge_sort(mid + 1, end);
		merge(start, mid, end);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s %d %d %d", &ar[i].name, &ar[i].kor, &ar[i].eng, &ar[i].math);
	}
	merge_sort(0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%s\n", ar[i].name);
	}

	return 0;
}