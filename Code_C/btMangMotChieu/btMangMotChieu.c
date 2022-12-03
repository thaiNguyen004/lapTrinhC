#include<stdio.h>
#include<stdlib.h>

void inputArr(int x[], int* n) {
	printf("Nhap n: ");
	scanf_s("%d", n);
	for (int i = 0; i < *n; i++)
	{
		printf("arr[%d]= ", i);
		scanf_s("%d", &a[i]);
	}
}
void outputArr(int x[] , int n) {
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
		if (ptr[0]==x[i]) {
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
void kiemTraMangConDaiNhat(int x[], int n, int arr1[], int arr2[], int arr3[], int j, int k, int l) {
	int ketQua1 = 1;
	int ketQua2 = 1;
	int ketQua3 = 1;
	for (int i = 0; i < n; i++)
	{
		if (x[i] == arr1[0]) {
			for (int ij = 0; ij < j; ij++)
			{
				if (arr1[ij] != x[i + ij]) {
					ketQua1 = 0;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (x[i] == arr2[0]) {
			for (int ik = 0; ik < k; ik++)
			{
				if (arr1[ik] != x[i + ik]) {
					ketQua2 = 0;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (x[i] == arr3[0]) {
			for (int il = 0; il < l; il++)
			{
				if (arr1[il] != x[i + il]) {
					ketQua3 = 0;
				}
			}
		}
	}
	if (ketQua1 == 1) {
		if (ketQua2 == 1) {
			if (ketQua3 == 1) {
				int max = j;
				if (max < k) {
					max = k;
					printf("Mang 2 lon nhat");
				}
				else if (max < l) {
					max = l;
					printf("Mang 3 lon nhat");
				}
				else {
					printf("Mang 1 lon nhat");
				}
				
			}
			int max = j;
			if (max < k) {
				max = k;
				printf("Mang 2 lon nhat");
			}
			else {
				printf("Mang 1 lon nhat");
			}
		}
		else if(ketQua3 == 1) {
			int  Max = l;
			if (Max < j) {
				Max = j;
				printf("Mang 1 lon nhat");
			}
			else {
				printf("Mang 3 lon nhat");
			}
		}
	}
	else if (ketQua2 == 1) {
		if (ketQua1 == 1) {
			if (ketQua3 == 1) {
				int max = j;
				if (max < k) {
					max = k;
					printf("Mang 2 lon nhat");
				}
				else if (max < l) {
					max = l;
					printf("Mang 3 lon nhat");
				}
				else {
					printf("Mang 1 lon nhat");
				}
				
			}
			int max = j;
			if (max < k) {
				max = k;
				printf("Mang 2 lon nhat");
			}
			else {
				printf("Mang 1 lon nhat");
			}
			
		}
		else if (ketQua3 == 1) {
			int  Max = l;
			if (Max < j) {
				Max = j;
				printf("Mang 1 lon nhat");
			}
			else {
				printf("Mang 3 lon nhat");
			}
			
		}
	}
	else if (ketQua3 == 1) {
		if (ketQua1 == 1) {
			if (ketQua3 == 1) {
				int max = j;
				if (max < k) {
					max = k;
					printf("Mang 2 lon nhat");
				}
				else if (max < l) {
					max = l;
					printf("Mang 3 lon nhat");
				}
				else {
					printf("Mang 1 lon nhat");
				}

			}
			int max = j;
			if (max < k) {
				max = k;
				printf("Mang 2 lon nhat");
			}
			else {
				printf("Mang 1 lon nhat");
			}

		}
		else if (ketQua3 == 1) {
			int  Max = l;
			if (Max < j) {
				Max = j;
				printf("Mang 1 lon nhat");
			}
			else {
				printf("Mang 3 lon nhat");
			}

		}
	}
}
int main() {
	int a[100], n;
	int arrCon1[100]; int arrCon2[100]; int arrCon3[100];
	int j, k, l;
	inputArr(a,&n);
	outputArr(a, n);
	if (kiemTraMangCon(a, n)) {
		printf("arrCon la Mang con cua Arr");
	}
	else {
		printf("arrCon khong la Mang con cua Arr");
	}
}