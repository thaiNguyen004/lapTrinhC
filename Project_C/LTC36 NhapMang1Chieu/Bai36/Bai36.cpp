/*Mảng một chiều
* Nhập và xuất mảng
* Tính tổng các phần tử trong mảng một chiều
*/

#include<stdio.h>
int main() {
	int a[1000];
	int n;
	do {
		printf("May hay nhap vao day so luong cua bien a may muon:");
		scanf("%d", &n);
	} while (n < 1 || n>1000);
	//Nhap du lieu cho mang
	for (int i = 0; i < n; i++) {
		printf("a[%d]=", i);
		scanf("%d", &a[i]);
	}
	//Xuat du lieu cua mang
	printf("Cac du lieu cua a vua nhap la:");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += a[i];
	}
	printf(" Tong la %d", tong);
}
