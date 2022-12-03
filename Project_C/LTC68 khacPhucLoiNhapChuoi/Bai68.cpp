//Cách khắc phục lỗi không nhập được chuỗi
#include<stdio.h>
int main() {
	int tuoi;
	char ten[50];
	printf("Nhap vao tuoi cua ban: ");
	scanf("%d", &tuoi);
	getchar();//thêm hàm getchar sau scanf
	printf("Nhap vao ten cua ban: ");
	//NHAP CHUOI KHONG CO KHOANG TRANG
	/*scanf("%s", &ten);*/
	//NHAP CHUOI CO KHOANG TRANG
	fgets(ten, sizeof(ten), stdin);
	/*printf("\nTen da nhap: %s", ten);*/
	printf("\Ten da nhap la: ");
	puts(ten);
	printf("Tuoi cua ban la: %d",tuoi);
}



//Nhập chuỗi
//Tốt nhất dùng fgets
//Xuất chuỗi 
//Tốt nhất dùng printf hoặc puts

