#include<stdio.h>
#include<limits.h>
int a[100];
int n;
void NhapMang(int x[], int& n) {
	printf("Nhap so luong mang a: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf("%d", &x[i]);
	}
}
void XuatMang(int x[], int n) {
	for (int i = 0; i < n; i++) {
		printf("a[%d] = %d  ", i, x[i]);
	}
}
// vd 1 2 3 4 5 
// tim ra so min thu 2 : [2]
// tim ra so max thu 2 : [4]
int timMin_2(int x[], int n) {
	int min = INT_MAX;
	int min_2 = INT_MAX;
	//b1 tim gtnn cho int min
	for (int i = 0; i < n; i++) {
		if (x[i] < min) {
			min = x[i];
		}
	}
	//min dang la gtnn
    
	for (int i = 0; i < n; i++) {
		if (x[i] == min) {
			continue;
		}
		else if (x[i] < min_2) {
			min_2 = x[i];
		}
	}
	return min_2;
}
int timMax_2(int x[], int n) {
	int max = INT_MIN;
	int max_2 = INT_MIN;
	//b1 tim gtnn cho int min
	for (int i = 0; i < n; i++) {
		if (x[i] > max) {
			max = x[i];
		}
	}
	// -100 3 50 7 9
	for (int i = 0; i < n; i++) {
		if (x[i] == max) {
			continue;
		}
		else if (x[i] > max_2) {
			max_2 = x[i];
		}
	}
	return max_2;
}
int main() {
	NhapMang(a, n);
	XuatMang(a, n);
	printf("\nMAX_2 : %d", timMax_2(a, n));
	printf("\nMIN_2 : %d", timMin_2(a, n));

}