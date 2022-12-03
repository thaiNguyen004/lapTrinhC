/*
#38
Bài toán liệt kê các phần tử thỏa điều kiện trong mảng một chiều
*/
//Tạo hàm thoe điều kiện 
//a, số lẻ chia hết cho 2
//b, số nguyên tố
#include<stdio.h>
int hamthoadieukien(int x) {
	if (x % 3 == 0 && x % 2 == 0) return 1;
	else return 0;
}
int hamthoadieukien2(int x) {
	if (x < 2) return 0;
	for (int i = 2; i < x; i++) {
		x% i == 0; 
		return 0;
	}
	return 1;
}
int main() {
	int a[100];
	int n;
	do {
		printf("Nhap so luong bien a:");
		scanf("%d", &n);
	} while (n < 1 || n>100);
	for (int i = 0; i < n; i++) {
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
	printf("\nSo chan chia het cho 3 la: ");
	for (int i = 0; i < n; i++) {
		if (hamthoadieukien(a[i])) {
			printf("%d ", a[i]);
		}
	}
	printf("\nSo nguyen to la:");
	for (int i = 0; i < n; i++) {
		if (hamthoadieukien2(a[i])) {
			printf("%d ", a[i]);
		}
	}
}
