#include<stdio.h>
int main() {
	int n;
	printf("-----------");
	printf("NHAP MAT KHAU");
	printf("-----------\n");
	do {
		printf("pass: ");
		scanf("%d", &n);
	} while (n != 100001);
	printf("Success");
}
