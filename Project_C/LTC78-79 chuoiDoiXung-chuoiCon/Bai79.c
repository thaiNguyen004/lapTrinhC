//Tìm chuỗi con trong chuỗi
//strstr(const char *chuoi, const char *chuoi_con);
#include<stdio.h>
#include<string.h>
void xoaxuongdong(char x[]) {
	size_t len = strlen(x);
	if (x[len - 1] == '\n') {
		x[len - 1] = '\0';
	}
}
int main() {
	char chuoi[50];
	char chuoi_con[50];
	fgets(chuoi, sizeof(chuoi), stdin);
	xoaxuongdong(chuoi);
	
	printf("Nhap vao chuoi can tim: ");
	fgets(chuoi_con, sizeof(chuoi_con), stdin);
	xoaxuongdong(chuoi_con);
	
	char kq = strstr(chuoi, chuoi_con);
	if (kq != NULL) {
		printf("Tim thay chuoi con");
	}
	else {
		printf("Khong tim thay chuoi con");
	}
}