#include<stdio.h>
// Input: Nhập dữ liệu cho array
// Output : In ra số nguyên tố lớn nhất
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
		printf("Arr[%d]: ",i);
		scanf_s("%d", &Arr[i]);
	}
}
void snt(int Arr[], int n)
{
	int snt[100] = { 0 }; int m = 0;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = 2; j < Arr[i]; j++)
		{
			if (Arr[i] < j)
			{
				break;
			}
			if (Arr[i] % j == 0)
			{
				count++;
			}
		}
		if (count == 0&&Arr[i]>=2)
		{
			snt[m] = Arr[i];
			m++;
		}
	}
	for (int i = 0; i < m; i++)
	{
		printf("%d ", snt[i]);
	}
	//Tìm số nguyên tố lớn nhất
	int max = snt[0];
	for (int i = 0; i < m; i++)
	{
		if (max < snt[i])
		{
			max = snt[i];
		}
	}
	printf("\nSNT lon nhat: %d ", max);
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
	printf("\nSnt: ");
	snt(arr, n);
}


