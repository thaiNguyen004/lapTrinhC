/*
LẬP TRÌNH ĐỆ QUI

Cấu trúc:

kieu_tra_ve_hamdequi(){
     hamdequi();   //goi lai chinh no
}

int main(){
     hamdequi();
}

Hàm đệ qui gồm 2 phần:
1.Điều kiện để thoát ra khỏi hàm đệ qui
2.Các bước xử lý có chứa lời gọi đệ qui
*/

#include<stdio.h>

int giaithua(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * giaithua(n - 1);
}
int main() {
    int n;
    printf("Nhap vao gia tri cua n: ");
    scanf("%d", &n);
    int kq = giaithua(n);
    printf("!%d = %d", n, kq);

}