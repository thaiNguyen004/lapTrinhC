#include<stdio.h>
int a[100][100];
int n, m;
void nhapmang(int x[100][100], int& n, int& m) {
	do {
		printf("Nhap so hang: ");
		scanf("%d", &n);
	} while (n <= 0);
	do {
		printf("Nhap so cot: ");
		scanf("%d", &m);
	} while (m <= 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("a[%d][%d]", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatmang(int x[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}
int timmax(int x[100][100], int n, int m) {
	int max = x[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (max < x[i][j])
				max = x[i][j];
		}
		
	}
	return max;
}
int timmin(int x[100][100], int n, int m) {
	int min = x[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (min > x[i][j])
				min = x[i][j];
		}

	}
	return min;
}
int main() {
	nhapmang(a, n, m);
	xuatmang(a, n, m);
	printf("Gia tri max : %d\n", timmax(a, n, m));
	printf("Gia tri min : %d", timmin(a, n, m));
}