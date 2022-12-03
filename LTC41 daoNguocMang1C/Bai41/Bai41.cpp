//Dao nguoc mang mot chieu
//1. Nhap mang ben ngoai
//2. Tao ham xuat Mang ben ngoai
//3. In ra Mang dao nguoc
//4. Lam cho Mang bi dao nguoc

#include<stdio.h>
int a[100];
int n;
void NhapMang(int x[100], int &n) {
	printf("Nhap vao so luong Mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
}
void XuatMang(int x[100], int n) {
	printf("Mang a co cac gia tri sau: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", x[i]);
	}
}
void XuatNguocMang(int x[100], int n) {
	printf("XuatNguocMang: ");
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", x[i]);
	}
}
void LamNguocMang(int x[100], int n) {
	//vi du ham co 5 gt
	// int a[5]= {1,2,3,4,5}
	for (int i = 0; i < n/2; i++) {
		int temp = x[i];
		x[i] = x[n - i - 1];
		x[n - i - 1] = temp;
	}
}
int main() {
	NhapMang(a,n);
	XuatMang(a,n);
	XuatNguocMang(a, n);
	LamNguocMang(a, n);
	XuatMang(a, n);
}
