/*
Toán tử điều kiện trong lập trình C
bieu_thuc_1 ? bieu_thuc_2 : bieu_thuc_3;
*/
#include<stdio.h>
int main() {
	int a;
	printf("Nhap vao a:");
	scanf("%d", &a);
	printf("a la so %s", (a) % 2 == 0 ? "Chan" : "Le");
}
	