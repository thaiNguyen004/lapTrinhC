//Kiểm tra chuỗi đối xứng
#include<stdio.h>
#include<string.h>
int kiemtra(char x[]) {
	//1 -> đối xứng
	//0 -> không đối xứng
	size_t len = strlen(x);
	for (int i = 0; i < len/2; i++) {
		if (x[i] != x[len - i - 1]) {
			return 0;
		}
	}
	return 1;
}
void xoaxuongdong(char x[]) {
	size_t len = strlen(x);
	if (x[len - 1] == '\n') {
		x[len - 1] = '\0';
	}
}
int main() {
	char s[50];
	fgets(s, sizeof(s), stdin);
	xoaxuongdong(s);
	if (kiemtra(s)) {
		printf("Day la chuoi doi xung");
	}
	else {
		printf("Day khong la chuoi doi xung");
	}
}