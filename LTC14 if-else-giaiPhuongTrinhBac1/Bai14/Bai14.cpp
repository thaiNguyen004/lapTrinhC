//Giải phương trình ax + b = 0
#include<stdio.h>
int main() {
	float a, b, x;
	printf("Nhap vao he so cua phuong trinh ax + b = 0");
	printf("\na=");
	scanf("%f", &a);
	printf("\nb=");
	scanf("%f", &b);
	if (a != 0) {
		x = -b / a;
		printf("phuong trinh co nghiem la %.2f", x);
	}
	else {
		if (b == 0) {
			printf("Phuong trinh vo so nghiem");
		}
		else {
			printf("Phuong trinh vo nghiem");
		}
	}
}