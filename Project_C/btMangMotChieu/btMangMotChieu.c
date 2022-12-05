#include<stdio.h>
#include<stdlib.h>

void inputArr(int x[], int* n) {
	printf("Nhap n: ");
	scanf_s("%d", n);
	for (int i = 0; i < *n; i++)
	{
		printf("arr[%d]= ", i);
		scanf_s("%d", &x[i]);
	}
}
void outputArr(int x[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}
}
//Kiem tra mang con
/*
1 2 3 4 5 6
2 3 4 5
*/
int kiemTraMangCon(int x[], int n) {
	printf("Nhap Mang Con\n");
	int m;
	printf("Nhap so phan tu mang con: ");
	scanf_s("%d", &m);
	int* ptr = (int*)calloc(m, sizeof(int));
	for (int i = 0; i < m; i++)
	{
		printf("arrCon[%d]= ", i);
		scanf_s("%d", &ptr[i]);
	}
	for (int i = 0; i < m; i++)
	{
		printf("%d ", ptr[i]);
	}
	int ketQua = 1;
	for (int i = 0; i < n; i++)
	{
		if (ptr[0] == x[i]) {
			for (int j = 0; j < m; j++)
			{
				if (ptr[j] != x[i + j]) {
					ketQua = 0;
				}
			}
		}
	}
	return ketQua;
}
//Kiem tra mang con dai nhat
int timMax(int x[], int n) {
	int max = x[0];
	for (int i = 0; i < n; i++) {
		if (max < x[i]) {
			max = x[i];
		}
	}
	return max;
}
void mangKhongGiamDaiNhat(int x[], int n) {
	// 1 4 2 3 5 7 9
	// 2 1 5 4 3 2 1
	int temp[20];
	for (int i = 0; i < n; i++) {
		temp[i] = 1;
	}
	for (int j = n - 1; j >= 0; j--) {
		if (x[j] > x[j - 1]) {
			temp[j - 1] = temp[j] + 1;
		}
	}
	int max = timMax(temp, n);
	for (int i = 0; i < n; i++) {
		if (x[i] == max) {
			for (int j = i; j < i + max; j++) {
				printf("%d ", x[j]);
			}
		}
	}
}

int main() {
	int a[100], n;
	inputArr(a, &n);
	outputArr(a, n);
	if (kiemTraMangCon(a, n)) {
		printf("arrCon la Mang con cua Arr");
	}
	else {
		printf("arrCon khong la Mang con cua Arr");
	}
	mangKhongGiamDaiNhat(a, n);
}