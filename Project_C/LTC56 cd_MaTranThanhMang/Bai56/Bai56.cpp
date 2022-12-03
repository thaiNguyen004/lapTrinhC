//chuyen mang hai chieu thanh mang mot chieu
#include<stdio.h>
int a[100][100];
int b[10000];
int n, m, k;
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
void nhapMang2vao1(int x2[100][100], int n, int m, int x1[10000], int& k) {
	k = n * m;
	int index = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			x1[index] = x2[i][j];
			index++;
		}
	}
}
void xuatmang1(int x[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", x[i]);
	}
}
int main() {
	nhapmang(a, n, m);
	xuatmang(a, n, m);
	nhapMang2vao1(a, n, m, b, k);
	xuatmang1(b, k);
}