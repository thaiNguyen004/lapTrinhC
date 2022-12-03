#include<stdio.h>
#include<string.h>
void xoaxuongdong(char x[]) {
	size_t len = strlen(x);
	if (x[len - 1] == '\n') {
		x[len - 1] = '\0';
	}
}
void my__strrev(char x[]) {
	//TITV
	//VTIT
	size_t len = strlen(x);
	for (int i = 0; i <len/2 ; i++) {
		char temp = x[i];
		x[i] = x[len - i - 1];
		x[len - i - 1] = temp;
	}
}
int main() {
	char s[50] = "";
	printf("Nhap s: ");
	fgets(s, sizeof(s), stdin);
	xoaxuongdong(s);
	printf("\ns: %s", s);
	/*_strrev(s);*/
	my__strrev(s);
	printf("\ns: %s", s);
}

//Nhập chuỗi fgets(x,sizeof(x),stdin);
//lấy số lượng chuỗi			strlen();
//Nối 2 chuỗi					strcat();
//Copy chuỗi					strcpy();
//So sánh 2 chuỗi				strcmp();
//Chuyển sang viết HOA			_strupr();
//Chuyển sang viết thường		_strlwr();
//Đảo ngược chuỗi				_strrev();