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
void matranchuyenvi(int x[100][100], int n, int m) {
	int y[100][100];
	int k = m;
	int l = n;
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < l; j++) {
			y[i][j] = x[j][i];
		}
	}

	printf("Ma tran chuyen vi\n");
	for (int i = 0; i < k; i++) {
		for (int j = 0; j < l; j++) {
			printf("%d ", y[i][j]);
		}
		printf("\n");
	}
}
int main() {
	nhapmang(a, n, m);
	xuatmang(a, n, m);
	matranchuyenvi(a, n, m);
}