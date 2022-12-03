/*
BÀI TẬP ÔN TẬP CÂU LỆNH ĐIỀU KIỆN

Bài 1:
    Viết chương trình nhập vào tọa độ 3 đỉnh của tam giác ABC. Hãy thực hiện các yêu cầu sau đây:
         a, Kiểm tra 3 điểm A, B, C có tạo thành tam giác hay không?
                 Nếu A, B, C tạo thành tam giác
         b, Kiểm tra tam giác ABC có phải tam giác cân hay không?
         c, Tính và xuất ra màn hình chu vi của tam giác ABC
         d, Tính và xuất ra  màn hình diện tích của tam giác ABC

         A(xa,ya)
         B(xb,yb)
         C(xc,yc)
         AB= sqrt( pow(xb-xa,2) + pow(yb-ya,2));
         BC= sqrt( pow(xc-xb,2) + pow(yc-yb,2));
         CA= sqrt( pow(xa-xc,2) + pow(ya-yc,2));

         Tạo thành tam khác :
               AB+BC>CA && AB+CA>BC && BC+CA>AB;
         Tạo thành tam giác cân:
               AB==BC || AB==CA || BC==CA;
         Chu vi tam giác 
               chuvi = AB+BC+CA
         Diện tích tam giác herong
               p = chuvi/2;
               dientich = sqrt(p*(p-AB)*(p-BC)*(p-CA));
*/
#include<stdio.h>
#include<math.h>
int main() {
    //Khai báo
    float xa, ya, xb, yb, xc, yc;
    float AB, BC, CA;
    float chuvi, dientich, p;
    //Nhập liệu
    printf("Nhap vao toa do dinh A:");
    scanf("%f %f", &xa, &ya);
    printf("Nhap vao toa do dinh B:");
    scanf("%f %f", &xb, &yb);
    printf("Nhap vao toa do dinh C:");
    scanf("%f %f", &xc, &yc);
    //Xử lý
    AB = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
    BC = sqrt(pow(xc - xb, 2) + pow(yc - yb, 2));
    CA = sqrt(pow(xa - xc, 2) + pow(ya - yc, 2));
    //Kiểm tra  xem có phải: tam giác, tam giác cân hay không
    if (AB + BC > CA && AB + CA > BC && BC + CA > AB) {
        printf("La tam giac");
        if (AB == BC || AB == CA || BC == CA) {
            printf("\nLa tam giac can");
        }
        else {
            printf("\nKhong phai tam giac can");
        }
    }
    else {
        printf("\nKhong phai la tam giac");
    }
    //Tính chu vi
    chuvi = AB + BC + CA;
    printf("\nChu vi tam giac = %.2f", chuvi);
    //Tính diện tích
    p = chuvi / 2;
    dientich= sqrt(p * (p - AB) * (p - BC) * (p - CA));
    printf("\nDien tich = %.2f", dientich);
    //Xuất kết quả
}