/*
CÂU LỆNH SWITCH CASE
Cấu trúc:
switch(case_valua){
    case1:
            //execute your code
            break;
    case n:
            //execute your code
            break;
    default:
            //execute your code
            break;
}

Lệnh break;
Khi gặp câu lệnh break trong vòng lặp, vòng lặp sẽ kết thúc ngay lập tức và câu lệnh kế tiếp sau vòng lặp được thực thi'
Lệnh break có thể dùng để kết thúc một case trong câu lệnh switch

*/

#include<stdio.h>
int main() {
    int n;
    printf("Nhap vao so n =");
    scanf("%d", &n);
    switch (n) {
    case 1:
        printf("\nChu nhat");
        break;
    case 2:
        printf("\nThu hai");
        break;
    case 3:
        printf("\nThu ba");
        break;
    case 4:
        printf("\nThu tu");
        break;
    case 5:
        printf("\nThu nam");
        break;
    case 6:
        printf("\nThu sau");
        break;
    case 7:
        printf("\nThu bay");
        break;
    default:
        printf("\nNhap vao so n khong dung");
    }
}