#include<stdio.h>
int main() {
	int* bien1, bien2;
	bien1 = &bien2;
	bien2 = 100;
	printf("Gia tri bien 2 la:%d\n",bien2);
	printf("Gia tri dia chi cua bien 2:%p\n", &bien2);
	printf("Gia tri bien 2 la:%d\n", *bien1);
	printf("Gia tri cua dia chi bien 2:%p\n", bien1);
	*bien1 = 200;
	printf("Gia tri moi la: %d\n", bien2);
	printf("Dia chi moi la:%p\n", &bien2);//Không bị thay đổi
}