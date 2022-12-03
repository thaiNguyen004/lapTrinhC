/*
Câu lệnh điều kiện IF ELSE trong C

Cấu trúc 1:
if (điều kiện){
   //đoạn code được thực hiện nếu điều kiện đúng
}

Cấu trúc 2:
if (điều kiện){
   //đoạn code được thực hiện nếu điều kiện đúng
}
else{
   //đoạn code được thực hiện nếu điều kiện sai
}

Cấu trúc 3:
if (điều kiện 1){
   //đoạn code được thực hiện nếu điều kiện 1 đúng
}
else if(điều kiện 2){
   //đoạn code được thực hiện nếu điều kiện 1 sai và điều kiện 2 đúng
}
else{
   //đoạn code được thực hiện nếu điều kiện 1 và 2 sai
}
*/
#include<stdio.h>
int main() {
	
	//Nhập dữ liệu
	int  n;
	printf("Nhap vao n:");
	scanf("%d", &n);
//Ví dụ: Kiểm tra số n NHỎ hơn hay LỚN hơn 20
/*  if (n < 20) {
		printf("\nSo nhap vao nho hon 20");
	}
	else if (n < 40) {
		printf("\nSo nhap vao lon hon 40");
	}
	else {
		printf("\nSo nhap vao khong ton tai");
	}
*/
//Ví dụ: Kiểm tra n là số chẵn hay số lẻ
	if (n % 2 == 0) {
		printf("\nn la so chan");
	}
	else {
		printf("\nn la so le");
	}
}