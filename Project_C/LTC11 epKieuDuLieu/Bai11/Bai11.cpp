/*
ÉP KIỂU TRONG LẬP TRÌNH C

Cú pháp  (type) valua;
Loại 1: Nới rộng(widening)
short -> int -> long -> float -> double

Loại 2: Thu hẹp(narrowing)
double -> float -> long -> int -> short

Ví dụ: float x =5.3;
       long y = (long)x;
       -> y=5
*/
#include<stdio.h>
int main() {
    //Khai báo biến
    int a, b;
    printf("Nhap vao a:");
    scanf("%d", &a);
    printf("Nhap vao b:");
    scanf("%d", &b);
    
    //Ép kiểu giá trị a để kết quả theo kiểu dự liệu lớn hơn là float
    //Nếu không ép kiểu trong trường hợp này thì kết quả sẽ theo số nguyên
    //Nên kết quả có thể là số nguyên khi 5/2=2(error)
    float ketqua = (float)a / b;
    printf("%d / %d =%.1f", a, b, ketqua);

}