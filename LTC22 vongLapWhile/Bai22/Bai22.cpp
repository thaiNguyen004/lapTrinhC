/*
CÂU LỆNH VÒNG LẶP TRONG C

while (expression){
    statement
}
*/

#include<stdio.h>
int main() {
    int tong;
    int i;
    int n;
    printf("Nhap n :");
    scanf("%d", &n);
    i = 0;
    tong = 0;
    while (i<=n) {
        tong = tong + i;
        i++;
    }
    printf("Tong gia tri tu 0 den %d la : %d", n, tong);
}