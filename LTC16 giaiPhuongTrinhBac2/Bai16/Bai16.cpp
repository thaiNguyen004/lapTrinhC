/*
Giải phương trình bậc 2
*/
#include<stdio.h>
#include<math.h>
int main() {
	//Khai báo
	float a, b, c, x1, x2, delta;
	//Nhập dữ liệu
	printf("Giai phuong trinh bac 2");
	printf("\nNhap bien a =");
	scanf("%f", &a);
	printf("\nNhap bien b =");
	scanf("%f", &b);
	printf("\nNhap bien c =");
	scanf("%f", &c);
	if (a == 0) {
		printf("Math ERROR");
	}
	//a!=0
	else {
		delta = pow(b, 2) - 4 * a * c;
		if (delta > 0) {
			x1 = (-b + sqrt(delta)) / (2 * a);
			x2 = (-b - sqrt(delta)) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet");
			printf("\nNghiem x1 =%.2f",x1);
			printf("\nNghiem x2 =%.2f",x2);
		}
		else if (delta == 0) {
			x1 = -b / 2 * a;
			printf("Phuong trinh co nghiem kep x=%.2f", x1);
		}
		else {
			printf("Phuong trinh vo nghiem");
		}
	}
}