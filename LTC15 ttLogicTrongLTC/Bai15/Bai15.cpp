/*
Toán tử logic trong lập trình C
&& -> AND trả về TRUE khi tất cả các toán hạng đều đúng
|| -> OR trả về TRUE khi có ít nhất 1 toán hạng đúng
!  -> NOT phủ định giá trị của toán hạng
*/
#include<stdio.h>
int main() {
	int a = 1;
	int b = 0;
	int c = 1;
	printf("\n%d && %d = %d", a, b, a && b);
	printf("\n%d && %d = %d", a, c, a && c);

	printf("\n%d || %d = %d", a, b, a || b);
	printf("\n%d || %d = %d", a, c, a || c);

	printf("\n!%d = %d", a, !a);
	printf("\n!%d = %d", b, !b);
}
