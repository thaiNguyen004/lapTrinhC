#include<stdio.h>
//Chuyen tham tri
void swap_thamtri(int a, int b) {
	a++;
	b++;
}
//Chuyen tham chieu
void swap_thamchieu(int &a, int &b) {
	a++;
	b++;
}

int main() {
	int a, b;
	printf("Nhap vao so a,b :");
	scanf("%d%d", &a, &b);
	printf("\nTruoc khi swap_thamtri a=%d b=%d\n", a, b);
	swap_thamtri(a, b);
	printf("\nSau khi swap_thamtri a=%d b=%d\n", a, b);


	printf("\nTruoc khi swap_thamchieu a=%d b=%d\n", a, b);
	swap_thamchieu(a, b);
	printf("\nSau khi swap_thamchieu a=%d b=%d\n", a, b);
}