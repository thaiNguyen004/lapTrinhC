/*
Tìm giá trị lớn nhất/ lớn nhất giữa hai số A và B
*/
#include<stdio.h>
int main() {
	//Khai bao bien
	int a, b, min, max;

	//Nhap du lieu
	printf("Nhap vao a :");
	scanf("%d", &a);
	printf("Nhap vao b :");
	scanf("%d", &b);

	//Xu ly
	min = (a < b) ? a: b;
	max = (a > b) ? a: b;
	
	//Xuat du lieu
	printf("Max la %d\n", max);
	printf("Min la %d", min);
}