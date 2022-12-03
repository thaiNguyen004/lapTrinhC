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
void thaydoigiatri2dong(int x1[100][100], int n, int m, int x, int y) {
	/*1 2 3
	  4 5 6 
	  7 8 9 
	  
	  x=1;y=2
	  */
	for (int i = 0; i < m; i++) {
		int temp = x1[x][i];
		x1[x][i] = x1[y][i];
		x1[y][i] = temp;
	}
}
void thaydoigiatri2cot(int x[100][100], int n, int m, int cot_a, int cot_b) {
	for (int i = 0; i < n; i++) {
		int temp = x[i][cot_a];
		x[i][cot_a] = x[i][cot_b];
		x[i][cot_b] = temp;
	}
}
int main() {
	nhapmang(a, n, m);
	thaydoigiatri2dong(a, n, m, 1, 2);
	
	xuatmang(a, n, m);
}