/*
Các toán tử so sánh trong lập trình C
Toán tử			Ý nghĩa				Ví dụ
==				so sánh bằng		4 == 3	False
>				so sánh hơn			2 > 1	True
<				so sánh kém			9 < 3	False
!=				so sánh khác		5 != 8	True
>=				lớn hơn hoặc bằng	5 >= 3	True
<=				nhỏ hơn hoặc bằng	5 <= 3	False

Kết quả của việc so sánh
0				-> False
1(hoặc khác 0)	-> True

*/

#include<stdio.h>
int main() {
	int a, b;
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	printf("\n%d == %d : %d", a, b, a == b);
	printf("\n%d < %d:%d", a, b, a < b);
	printf("\n%d > %d:%d", a, b, a > b);
	printf("\n%d >= %d:%d", a, b, a >= b);
	printf("\n%d <= %d:%d", a, b, a <= b);
	printf("\n%d != %d:%d", a, b, a != b);

}