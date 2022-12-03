//tim so lon nhat hoac nho nhat cua tung dong, tung cot trong mang hai chieu
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
int timmaxcuadong(int x[100][100], int n, int m, int dong) {
	int max = x[dong][0];
	for (int i = 0; i < m; i++) {
		if (max < x[dong][i]) {
			max = x[dong][i];
		}
	}
	return max;
}
int timmincuadong(int x[100][100], int n, int m, int dong) {
	int min = x[dong][0];
	for (int i = 0; i < m; i++) {
		if (min > x[dong][i]) {
			min = x[dong][i];
		}
	}
	return min;
}
int timmaxcuacot(int x[100][100], int n, int m, int cot) {
	int max = x[0][cot];
	for (int i = 0; i < m; i++) {
		if (max < x[i][cot]) {
			max = x[i][cot];
		}
	}
	return max;
}
int timmincuacot(int x[100][100], int n, int m, int cot) {
	int min = x[0][cot];
	for (int i = 0; i < m; i++) {
		if (min > x[i][cot]) {
			min = x[i][cot];
		}
	}
	return min;
}

int main() {
	nhapmang(a, n, m);
	xuatmang(a, n, m);
	printf("Max cot 1 la %d\n", timmaxcuacot(a, n, m, 1));
	printf("Min cot 1 la %d\n", timmincuacot(a, n, m, 1));
	printf("Max hang 1 la %d\n", timmaxcuadong(a, n, m, 1));
	printf("Min hang 1 la %d\n", timmincuadong(a, n, m, 1));
	for (int i = 0; i < n; i++) {
		printf("Max hang %d la %d\n",i, timmaxcuadong(a, n, m, i));
	}
	for (int i = 0; i < m; i++) {
		printf("Max cot %d la %d\n", i, timmaxcuacot(a, n, m, i));
	}
}