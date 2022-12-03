/*
    Các phép toán cơ bản

Toán tử                 Mô tả
	+				Cộng số hạng
	-				Trừ số hạng
	*				Tích số hạng
	/				Chia số hạng
	%				Chia lấy dư số hạng
	++				Tăng một đơn vị số hạng
	__				Giảm 1 đơn vị số hạng



*/


#include<stdio.h>
int main() {
	float a, b;
	printf("Nhap gia tri a:");
	scanf("%f", &a);
	printf("\nNhap gia tri b:");
	scanf("%f", &b);
	float tong = a + b;
	printf("\n%.2f + %.2f = %.2f", a, b, tong);
	float hieu = a - b;
	printf("\n%.2f - %.2f = %.2f", a, b, hieu);
	float tich = a * b;
	printf("\n %.2f * %.2f = %.2f", a, b, tich);
	float thuong = a / b;
	printf("\n%.2f / %.2f = %.2f", a, b, thuong);
	int r = ((int)a) % ((int)b);
	printf("\n%.2f chia lay du %.2f = %d", a, b, r);
	a++;
	printf("\n a++:%.2f", a);
	b--;
	printf("\n b--:%.2f", b);
}