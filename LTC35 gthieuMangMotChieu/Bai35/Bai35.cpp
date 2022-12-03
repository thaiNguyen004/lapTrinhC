/*
#35 Mảng một chiều trong lập trình C

Mảng là:
    - Một kiểu dữ liệu có cấu trúc do người lập trình định nghĩa
    - Biểu diễn một dãy các biến có cùng kiểu
    - Kích thước được xác định ngay khi khai báo và không bao giờ được thay đổi
    - C/C++ luôn chỉ định một khối nhớ liên tục cho một biến kiểu mảng

    Khai báo mảng : <kiểu dữ liệu> <tên biến mảng> [<số phần tử>]
    
*/

#include<stdio.h>

int main() {
    //Khai bao mang
    int a[10];
    int b[100];
    int c[1000];

    //Khai bao mang va gan gia tri ban dau
    int x[100] = {};
    int y[3] = { 3,5,7 };

    //Gan du lieu cho mang
    //Mang bat dau tu vi tri 0
    y[1] = 10;
    y[2] = 1;
    //int y[3] ={3, 10, 1};
    printf("0 - %d\n", y[0]);
    printf("1 - %d\n", y[1]);
    printf("2 - %d\n", y[2]);

    //

    printf("gia tri cua x la %d ", x[10]);
}