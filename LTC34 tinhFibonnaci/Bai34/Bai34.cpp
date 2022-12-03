/*
#34 BÀI TẬP TÌM SỐ FIBONACCI
F(0)=0;
F(1)=1;
F(n) = F(n-1) +F(n-2)

*/
#include<stdio.h>
int Fibonacci(int x) {
	if (x == 0) return 0;
	else if (x == 1) return 1;
	else return Fibonacci(x - 1) + Fibonacci(x - 2);
}
int main() {
	int n;
	do {
		printf("Nhap vao so n>=0 :");
		scanf("%d", &n);
	} while (n < 0);

	printf("Fibonacci(%d) la %d", n, Fibonacci(n));
}
