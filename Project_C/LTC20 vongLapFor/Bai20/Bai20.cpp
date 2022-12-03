/*
Câu lệnh: for

for(expr1;expr2;expr3){
    statement
}

Trong đó
  Biểu thức 1: biểu thức khởi đầu
  Biểu thức 2: biểu thức điều kiện - điều kiện lặp
  Biểu thức 3: bước nhảy - thường dùng với ý nghĩa là thay đổi bước nhảy
*/

//Xuất các con số từ 0 tới 9
//Xuất các con số từ 0 tới n

#include<stdio.h>
int main() {
    /*
    int i;
    for (i=0;i<=9 ;i++) {
        printf("%d\n", i);
    }
    */
    int n;
    printf("Nhap n =");
    scanf("%d", &n);
    int i;
    for (i = 2; i <= n; i++) {
        printf("%d\n", i);
    }
}