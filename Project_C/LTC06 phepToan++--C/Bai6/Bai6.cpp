#include<stdio.h>
int main() {
	int a = 8;
	int b = 5;
	printf("%d", a++);//In trước rồi mới thay đổi
	printf("\n");
	printf("%d", a);
	printf("\n");
	printf("%d", ++a);//Thay đổi trước rồi in

	printf("%d", b--);//In trước rồi mới thay đổi
	printf("\n");
	printf("%d", b);
	printf("\n");
	printf("%d", --b);//Thay đổi trước rồi in

}