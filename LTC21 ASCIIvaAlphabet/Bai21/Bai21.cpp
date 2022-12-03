/*
Viết chương trình in ra bảng chữ cái alphabet
Bảng chữ cái ASCII
*/
#include<stdio.h>
int main() {
	char kytu;
	for (kytu = 65; kytu <= 90; kytu++) {
		printf("%d%c\n", kytu,kytu);
	}
}