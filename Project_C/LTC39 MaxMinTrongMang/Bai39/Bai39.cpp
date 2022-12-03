#include<stdio.h>
int max(int x[], int n) {
int max = x[0];
for (int i = 1; i < n; i++) {
	if (max < x[i]) {
		max = x[i];
	}
}
return max;
}
int min(int x[], int n) {
	int min = x[0];
	for (int i = 1; i < n; i++) {
		if (min > x[i]) {
			min = x[i];
		}
	}
	return min;
}
int main() {
	int a[100];
	int n;
	do {
		printf("Nhap so luong bien a:");
		scanf("%d", &n);
	} while (n < 1 || n>100);
	for (int i = 0; i < n; i++) {
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}

	printf("\nmax la: %d", max(a, n));
	printf("\nmin la: %d", min(a, n));
}