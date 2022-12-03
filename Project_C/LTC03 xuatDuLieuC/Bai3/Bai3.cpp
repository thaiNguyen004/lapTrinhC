
//Xuất dữ liệu trong lập trình C
/*Sử dụng thư viện: stdio.h -> standard input output
Sử dụng hàm printf() -> Xuất dữ liệu ra bảng điều khiển console
printf("format string", argument_list);
Format string có thể là %d(số nguyên), %c(ký tự), %s(chuỗi), %f(float)
*/

#include<stdio.h>
int main() {
    printf("bai tap xuat ra man hinh\n");
    int x = 5;
    printf("Gia tri x la: %d\n", x);
    float x1 = 3.141555555;
    printf("Gia tri x1 la: %f\n", x1);
    printf("Gia tri x1 la: %.2f\n", x1);
    float x2 = 5.6789;
    float x3 = 5.1234;
    printf("x2 la:%.2f,x3 la:%.2f", x2, x3);
    char a = 'C';
    printf("\n%c", a);
}
