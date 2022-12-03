//strchr(const char *str, int c);
#include<stdio.h>
#include<string.h>
int main() {
	char s[50] = "titv.vn";
	char* x2;
	x2= strchr(s, '.');
	printf("s: %s\n", s);
	printf("x2: %s\n", x2);
}