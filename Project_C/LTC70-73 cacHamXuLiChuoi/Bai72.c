
//COPY CHUỖI TRONG LẬP TRÌNH C
#include<stdio.h>
#include<string.h>
void xoaenter(char x[]) {
	size_t len1 = strlen(x);
	if (x[len1 - 1] == '\n') {
		x[len1 - 1] = '\0';
	}
}
void my_strcat(char x1[], char x2[]) {
	size_t len1 = strlen(x1);
	size_t len2 = strlen(x2);
	//thai  5
	//nguyen 6
	for (int i = len1; i < len1 + len2; i++) {
		x1[i] = x2[i - len1];
	}
	x1[len1 + len2] = '\0';//NULL
}
void my_strcpy(char x1[], char x2[]) {
	//s1: 
	//s2: nguyen => strcpy(s1,s2)
	//s1: nguyen 

	size_t len2 = strlen(x2);
	for (int i = 0; i < len2; i++) {
		x1[i] = x2[i];
	}
	x1[len2] = '\0';
}
int main() {
	char ho[50];
	char ten[30];
	fgets(ho, sizeof(ho), stdin);
	fgets(ten, sizeof(ten), stdin);
	xoaenter(ho);
	xoaenter(ten);


	//NỐI
	/*my_strcat(ho, ten);
	puts(ho);*/
	
	
	//COPY
	strcpy(ho, ten);
	/*my_strcpy(ho, ten);*/
	puts(ho);
}