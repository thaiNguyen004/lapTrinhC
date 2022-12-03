#include<stdio.h>
int a[100][100];
int n;
void nhapmatranvuong(int x[100][100], int* n) {
	printf("Nhap n: ");
	scanf_s("%d", n);
	for (int i = 0; i < *n; i++) {
		for (int j = 0; j < *n; j++) {
			printf("a[%d][%d]", i, j);
			scanf_s("%d", &x[i][j]);
		}
	}
}
void xuat(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}
int mod(int x, int y) {
	int r = x % y;
	return r < 0 ? r + y : r;
}
int Det3(int x[100][100], int n) {
	int tong_1 = 0;
	int tong_2 = 0;
	//gọi k là hàng 
   // gọi l là cột
	int k = 0;
	//for lớn tong+=x*x*x
	for (int i = 0; i < n; i++) {
		int l = i;
		//for nhỏ temp*=x
		int temp = 1;
		for (int t = 0; t < n; i++) {
			temp *= x[mod(k + t, n)][mod(l + t, n)];
		}
		tong_1 += temp;
	}
	k = 0;
	//for lớn tong+=x*x*x
	for (int i = 0; i < n; i++) {
		int l = i;
		//for nhỏ temp*=x
		int temp = 1;
		for (int t = 0; t < n; i++) {
			temp *= x[mod(k + t, n)][mod(l - t, n)];
		}
		tong_2 += temp;
	}
	return tong_1 - tong_2;
}
int main() {
	nhapmatranvuong(a, &n);
	printf("Nguyen");
	int kq = Det3(a, n);
	printf("%d ", kq);
}