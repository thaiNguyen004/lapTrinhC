#include<stdio.h>
struct date {
	int day;
	int month;
	int year;
};
void nhap(struct date& p) {
	printf("Nhap ngay: ");
	scanf_s("%d", &p.day);
	printf("Nhap thang: ");
	scanf_s("%d", &p.month);
	printf("Nhap nam: ");
	scanf_s("%d", &p.year);
}
void xuat(date p) {
	printf("%d/%d/%d", p.day, p.month, p.year);
}

int main() {
	struct date my_date;
	nhap(my_date);
	xuat(my_date);
}