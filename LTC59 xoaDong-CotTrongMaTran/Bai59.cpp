//Xóa một dòng hoặc một cột trong ma trận
#include<stdio.h>
int a[100][100];
int n, m;
void nhapmang(int x[100][100], int& n, int& m) {
	do {
		printf("Nhap so hang: ");
		scanf_s("%d", &n);
	} while (n <= 0);
	do {
		printf("Nhap so cot: ");
		scanf_s("%d", &m);
	} while (m <= 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("a[%d][%d]", i, j);
			scanf_s("%d", &x[i][j]);
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
void xoadongmatran(int x[100][100], int& n, int m, int k) {
	if (k < 0 || k >= n) {
		return;
	}
	for (int i = k; i < n; i++) {
		for (int j = 0; j < m; j++) {
			x[i][j] = x[i + 1][j];
		}
	}
	n--;
}

void xoacotmatran(int x[100][100], int n, int& m, int k) {
	if (k < 0 || k >= m) {
		return;
	}
	for (int i = 0; i < n; i++) {
		for (int j = k; j < m; j++) {
			x[i][j] = x[i][j + 1];
		}
	}
	m--;
}
int main() {
	nhapmang(a, n, m);
	xuatmang(a, n, m);
	xoacotmatran(a, n, m, 2);
	xuatmang(a, n, m);
}