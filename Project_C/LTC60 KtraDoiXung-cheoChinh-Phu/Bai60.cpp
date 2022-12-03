#include<stdio.h>
//mang vuong
int a[100][100];
int n;
void nhapmang(int x[100][100], int& n) {
	do {
		printf("Nhap vao n: ");
		scanf("%d", &n);
	} while (n <= 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("a[%d][%d]", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatmang(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}
/*
   1 2 3
   2 1 6
   3 6 1

   1 2 3 5
   2 1 7 6
   3 7 1 1
   5 6 1 1
   x[i][j]

   1 2 3 5
   2 1 7 3
   3 7 1 2
   5 3 2 1

   //x[i][j] = x[n-1-j][n-1-i];

   //Đối xứng
   x[i][j] = x[j][i];

*/
int kiemtramangdoixungquaduongcheochinh(int x[100][100], int n) {
	int kq = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i][j] != x[j][i]) {
				kq = 0;
				return 0;
			}
		}
	}
	return kq;
}
int kiemtramangdoixungquaduongcheophu(int x[100][100], int n) {
	int kq = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (x[i][j] != x[n-1-j][n-1-i]) {
				kq = 0;
				return 0;
			}
		}
	}
	return kq;
}
int main() {
	nhapmang(a, n);
	xuatmang(a, n);
	int kq = kiemtramangdoixungquaduongcheochinh(a, n);
	if (kq) {
		printf("La ham doi xung");
	}
	else {
		printf("Khong la mang doi xung");
	}
	int kq2 = kiemtramangdoixungquaduongcheophu(a, n);
	if (kq2) {
		printf("La ham doi xung");
	}
	else {
		printf("Khong la mang doi xung");
	}
}