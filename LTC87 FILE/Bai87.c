//Cách tạo file và ghi dữ liệu vào file dạng Văn Bản

#include<stdio.h>
#include<stdlib.h>

int main() {
	FILE  *f;
	//tao hoac mo file
	f = fopen("C:\\Users\\thain\\OneDrive\\Máy tính\\Text Document\\Bai87.txt", "w");
	//doc file hoac ghi file
	if (f == NULL) {
		printf("Loi tao hoac mo file!");
		exit(1);
	}
	
	int n;
	printf("Nhap so vao file: ");
	scanf_s("%d", &n);
	fprintf(f, "%d", n);
	//dong file
	fclose(f);
}