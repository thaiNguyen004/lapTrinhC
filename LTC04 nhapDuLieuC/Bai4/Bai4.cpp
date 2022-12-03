/*Nhập dữ liệu từ bàn phím
*
Sử dụng hàm scanf() -> nhập dữ liệu từ bàn phím qua bảng điều khiển console

scanf("format string", argument_address_list);

Địa chỉ của biến là: &tên_biến

Format string có thể là %d(số nguyên)
                        %c(ký tự)
                        %s(chuỗi)
                        %f(float)
*/
#include<stdio.h>
int main() {
    int x;
    float y;
    char c;
    float x1, x2, x3;
    //Nhap vao mot ky tu
    printf("\nNhap vao day mot ky tu:");
    scanf("%c", &c);
    printf("Ky tu vua nhap la:%c", c);

    //Nhập vào số nguyên
    printf("\nNhap vao day mot so nguyen:");
    scanf("%d", &x);
    printf("Gia tri vua nhap la:%d", x);

    //Nhap vao mot so thuc
    printf("\nNhap vao mot so thuc:");
    scanf("%f", &y);
    printf("Gia tri vua nhap la:%.2f", y);
    
    //Nhap vao nhieu du lieu
    printf("\nNhap vao day 3 so thuc:");
    scanf("%f%f%f", &x1, &x2, &x3);
    printf("x1=%f,x2=%f,x3=%f", x1, x2, x3);



}