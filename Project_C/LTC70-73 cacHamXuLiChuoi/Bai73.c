#include<stdio.h>
#include<string.h>

//SO SÁNH HAI CHUỖI
/*
Hàm strcmp();
Nếu hai chuỗi:
     TRẢ VỀ             NHẬN XÉT
     0                  Nếu cả hai chuỗi giống hệt nhau
     số nguyên âm       Nếu giá trị ASCII của kí tự khác nhau đầu tiên nhỏ hơn
     số nguyên dương    Nếu giá trị ASCII của kí tự khác nhau đầu tiên lớn hơn
*/
void xoaenter(char x[]) {
    size_t len1 = strlen(x);
    if (x[len1 - 1] == '\n') {
        x[len1 - 1] = '\0';
    }
}
int my_strcmp(char x1[], char x2[]) {
    int ketqua = 0;
    size_t len1 = strlen(x1);
    size_t len2 = strlen(x2);
    size_t min = len1 < len2 ? len1 : len2;
    for (int i = 0; i < min; i++) {
        ketqua = x1[i] - x2[i];
        if (ketqua != 0) {
            break;
        }
    }
    if (ketqua > 0) {
        return 1;
    }
    else if (ketqua < 0) {
        return -1;
    }
    else {
        return 0;
    }
}
int main() {
    char s1[50];
    char s2[50];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);
    xoaenter(s1);
    xoaenter(s2);
   /* printf("\nKet qua so sanh la: %d", strcmp(s1, s2));*/
    printf("\nKet qua so sanh la: %d", my_strcmp(s1, s2));

}