#include<stdio.h>
int n; //Số phần tử của mảng
int arr[100]; //mảng
void inputArr(int Arr[], int* n)
{
	do
	{
		printf("Nhap so luong cho Array: ");
		scanf_s("%d", n);
	} while (*n <= 0);
	for (int i = 0; i < *n; i++)
	{
		printf("Arr[%d]: ", i);
		scanf_s("%d", &Arr[i]);
	}
}
void xoataivitri(int Arr[], int* n, int vitri)
{
	int a = *n;
	for (int i = vitri; i < *n; i++)
	{
		Arr[i] = Arr[i + 1];
	}
	a--;
	*n = a;
}
void xoasochan(int Arr[], int* n)
{
	int i = 0;
	while (i < *n)
	{
		if (Arr[i] % 2 == 0) {
			xoataivitri(Arr, n, i);
		}
		else {
			i++;
		}
	}
	//Lưu ý: trong vòng lặp nếu giá trị thỏa điều kiện thì ta không tăng i lên 1 đơn vị
	//Chỉ tăng i trong trường hợp giá trị không thỏa điều kiện
}
void outputArr(int Arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", Arr[i]);
	}
}
int main()
{
	inputArr(arr, &n);
	outputArr(arr, n);
	xoasochan(arr, &n);
	outputArr(arr, n);
}