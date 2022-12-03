#include<stdio.h>
#include<string.h>
//LẬP TRÌNH VIẾT HOA CHỮ CÁI ĐẦU TIÊN
void chuyendoi(char x[]) {
	//LAP trinh C => Lap Trinh C
	//x[0] => viet hoa
	//x[i-1] là khoảng trắng => x[i] viết hoa
	for (int i = 0; i < strlen(x); i++) {
		if (i == 0||(i>0&&x[i-1]==32)) {
			if (x[i] >= 97 && x[i] <= 122) {
				x[i] = x[i] - 32;
			}
		}
		else {
			if (x[i] >= 65 && x[i] <= 90) {
				x[i] = x[i] + 32;
			}
		}
	}
}
int main() {
	char s[50] = "";
	printf("Nhap s: ");
	fgets(s, sizeof(s), stdin);
	printf("\ns: %s", s);
	chuyendoi(s);
	printf("\ns: %s", s);
}