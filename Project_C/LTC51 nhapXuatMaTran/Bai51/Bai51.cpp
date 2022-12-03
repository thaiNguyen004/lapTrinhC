//MANG HAI CHIEU
//a[hang][cot]
#include<stdio.h>
int a[100][100];
int n, m;
void nhapMang(int x[100][100], int& n, int& m) {
	do {
		printf("Nhap vao so hang va so cot: ");
		scanf("%d%d", &n, &m);
	} while (n <= 0 && m <= 0);
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
int main() {
	nhapMang(a, n, m);
	xuatmang(a, n, m);
}