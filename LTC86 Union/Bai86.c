// KIỂU DỮ LIỆU UNION
#include<stdio.h>
union Ngay_1 {
	int ngay;
	int thang;
	int nam;
}uNgay;

struct Ngay_2 {
	int ngay;
	int thang;
	int nam;
}sNgay;
int main() {
	/*printf("Kich thuoc cua union: %d byte", sizeof(uNgay));
	printf("\nKich thuoc cua struct: %d byte", sizeof(sNgay));
	*/
	printf("Kieu du lieu Union");
	union Ngay_1 n1;
	n1.ngay = 15;
	printf("\n%d", n1.ngay);
	n1.thang = 2;
	printf("/%d", n1.thang);
	n1.nam = 2022;
	printf("/%d", n1.nam);
	struct Ngay_2 n2;
	n2.ngay = 15;
	n2.thang = 2;
	n2.nam = 2022;
	printf("\nKieu du lieu Struct");
	printf("\n%d/%d/%d", n2.ngay, n2.thang, n2.nam);
}