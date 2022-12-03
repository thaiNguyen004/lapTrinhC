
//CÁCH NỐI 2 CHUỖI TRONG C

#include<stdio.h>
#include<string.h>
void my_strcat(char x1[], char x2[]) {
	size_t x_1 = strlen(x1);
	size_t x_2 = strlen(x2);
	for (int i = x_1; i < x_1 + x_2; i++) {
		x1[i] = x2[i - x_1];
	}
	x1[x_1 + x_2] = '\0';
}
int main() {
	char s_1[40] = "Xin chao ";
	char s_2[20] = "NGUYEN";

	//Nối 

	printf("s_1: %s", s_1);
	printf("\ns_2: %s", s_2);
	/*strcat(s_1, s_2);*/
	my_strcat(s_1, s_2);
	printf("\ns_1: %s", s_1);
	printf("strlen = %d", strlen(s_1));
}