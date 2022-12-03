/*
Các hàm toán học trong lập trình C

1. ceil(number) làm tròn lên 
2. floor(number) làm tròn xuống
3. sqrt(number) trả về căn bậc 2 của số đã cho
4. pow(number) trả về số mũ của số đã cho
5. abs(trả về giá trị tuyệt đối) 
6. fabs(trả về giá trị tuyệt đối, dùng cho số thực)*/
#include<stdio.h>
#include<math.h>
int main() {
	int a = 9;
	int b = 2;
	float ketqua = (float)a / b;
	printf("\nfloor(a/b)=%f", floor(ketqua));
	printf("\nceil(a/b)=%f", ceil(ketqua));
	printf("\nsqrt(a)=%f", sqrt(a));
	printf("\n9^2 = %f", pow(9, 2));
	printf("\n|5|=%f", fabs(a));
}