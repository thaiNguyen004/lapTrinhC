#include<stdio.h>
int a[100];
int n;
void NhapMang(int x[], int& n) {
	printf("Nhap vao so luong mang a: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("a[%d]= ", i);
		scanf("%d", &x[i]);
	}
}
void XuatMang(int x[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", x[i]);
	}
}

//mang a co : 1 2 3 4 5 6 7 8 9 [9]
void Xoagiatritaivitri(int x[], int& n, int vitri) {
	for (int i = vitri; i < n - 1; i++) {
		x[i] = x[i + 1];
	}
	n--;
}

void xoagiatriyeucau(int x[], int& n) {
	int vt;
	printf("Nhap vao so can xoa: ");
	scanf("%d", &vt);
	for (int i = 0; i < n; i++) {
		if (x[i] == vt) {
			Xoagiatritaivitri(x, n, i);
		}
	}
}

int main() {
	NhapMang(a, n);
	XuatMang(a, n);
	xoagiatriyeucau(a, n);
	XuatMang(a, n);
}