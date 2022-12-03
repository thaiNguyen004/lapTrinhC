/*
#37 
Mảng có thể được truyền như tham số trong hàm

Các tham số chính thức là một con trỏ như sau
return_type function(type *arrayname)

Các tham số chính thức là một mảng đã định kích thước như sau:
return_type function(type arrayname[size])

Các tham số chính thức là một mảng chưa định kích thước như sau:
return_type function(type arrayname[])
*/

#include<stdio.h>
float TBC(int x[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += x[i];
	}
	return (float)tong / n;
}
float TBCsoduong(int x[], int n) {
	int tong = 0;
	int soluongsoduong = 0;
	for (int i = 0; i < n; i++) {
		if (x[i] >= 0) {
			tong += x[i];
			soluongsoduong++;
		}
	}
	return soluongsoduong > 0 ? (float)tong / soluongsoduong : -2;
}
int main() {
	//Khai bao mang
	int a[100];
	int n;
	do {
		printf("Nhap so luong mang mot chieu a:");
		scanf("%d", &n);
	} while (n < 1 || n>100);
	//Nhap du lieu vao a
	for (int i = 0; i < n; i++) {
		printf("a[%d]", i);
		scanf("%d", &a[i]);
	}
	printf("TBC la: %.2f", TBC(a, n));
	float TBCSD = TBCsoduong(a, n);
	if (TBCSD > 0) {
		printf("Trung binh cong so duong la : %.2f", TBCSD);

	}
	else {
		printf("Ham khong co so duong");
	}
}
