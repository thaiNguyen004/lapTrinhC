//TÍNH ĐỘ DÀI CỦA CHUỖI 
//SỬ DỤNG HÀM CÓ SẴN VÀ TỰ XÂY DỰNG HÀM
#include<stdio.h>
#include<string.h>
int my_strlen(char x[]) {
	int count = 0;
	while (x[count] != '\0') {
		count++;
	}
	return count;
}
void xoaxuongdong(char x[]) {
	size_t len = strlen(x);
	//NGUYEN\n => NGUYEN\0
	if (x[len - 1] == '\n') {
		x[len - 1] = '\0';
	}
}
int main() {
	//khai báo
	/*char ten[50] = "NGUYEN";*/
	char ten[50];
	fgets(ten, sizeof(ten), stdin);
	xoaxuongdong(ten);
	printf("Ten cua ban la: %s", ten);
	printf("\ndo dai ten = %d",strlen(ten));
	printf("\nmy_strlen: %d", my_strlen(ten));
	
}