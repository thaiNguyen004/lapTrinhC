#include<stdio.h>
#include<string.h>

//_strupr(); chuyển thành chữ hoa
//_strlwr(); chuyển thành chữ thường

int main() {
	char s[50] = "";
	printf("Nhap s: ");
	fgets(s, sizeof(s), stdin);
	printf("\ns: %s", s);
	_strupr(s);
	printf("\nChuyen sang viet hoa s: %s", s);
	_strlwr(s);
	printf("\nChuyen sang viet thuong s: %s", s);
}