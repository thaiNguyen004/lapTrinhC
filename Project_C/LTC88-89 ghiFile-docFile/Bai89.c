#include<stdio.h>
#include<stdlib.h>
int main() {
	//1.2 Tạo file, mở file
	FILE* f;
	f = fopen("C:\\Users\\thain\\OneDrive\\Máy tính\\Text Document\\Bai87.txt", "r");
	if (f == NULL) {
		printf("\nLoi tao hoac mo file");
		exit(1);
	}
	//3.4 Nhập hoặc đọc file
	int n;
	fscanf_s(f, "%d", &n);
	printf("\nGia tri cua n: %d", n);
	//5 Đóng file
	fclose(f);
}