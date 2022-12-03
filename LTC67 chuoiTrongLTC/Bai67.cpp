//Gioi thieu ve chuoi trong C
// char c[] = "text";
// char c[50] = "text";
// char c[] = {'t', 'e', 'x', 't', '\0'};
// char c[5] = {'t', 'e', 'x', 't', '\0'};

//Lưu ý:   char c[4] = "text" => sai vì chuỗi luôn kết thúc là '\0'  ;

//Lưu ý 2: không hỗ trợ toán tử gán bên ngoài khai báo
// Ví dụ: char c[100];
//        c = "lap trinh c"; saiiii

/* 
Nhập chuỗi

Hàm scanf("%s", &ten_mang); //chỉ nhập chuỗi không chứa khoảng trắng
Hàm fgets(ten_mang, sizeof(ten_mang), stdin); //đọc 1 dòng bao gồm cả khoảng trắng
*/

/*
Xuất chuỗi

printf("%s", ten_mang);

puts(ten_mang); // xuất một mảng kí tự ra màn hình + xuống dòng
*/

#include<stdio.h>
int main() {
	char ten[50];
	
	printf("Nhap vao ten cua ban: ");
	//NHAP CHUOI KHONG CO KHOANG TRANG
	/*scanf("%s", &ten);*/
	//NHAP CHUOI CO KHOANG TRANG
	fgets(ten, sizeof(ten), stdin);
    /*printf("\nTen da nhap: %s", ten);*/
	printf("\Ten da nhap la: ");
	puts(ten);
	
}