#include<stdio.h>
struct date {
	int day;
	int month;
	int year;
};
//Một vài lưu ý của C về struct
/*
1. Trong C không dùng được & để truyền THAM CHIẾU mà phải dùng con trỏ
2. Tạo biến con trỏ để truyền THAM CHIẾU cho struct
3. Truyền giá trị trong struct a->day
4. Truyền địa chỉ trong struct &a->day (Đừng lầm vì a vẫn là biến con trỏ)

5. Khi truyền THAM TRỊ trong struct thì chỉ cần tạo biến thường
5. Và truyền giá trị trong struct a.day
*/
void nhap(struct date* a) {
	printf("Nhap ngay: ");
	scanf_s("%d", &a->day);
	printf("Nhap thang: ");
	scanf_s("%d", &a->month);
	printf("Nhap nam: ");
	scanf_s("%d", &a->year);
}
void xuat(struct date a) {
	printf("%d/%d/%d", a.day, a.month, a.year);
}
int checkdate(struct date a) {
	if (a.day < 0 || a.month < 0 || a.year < 0) {
		return 0;
	}if (a.month > 12) {
		return 0;
	}if (a.month == 2) {
		if (a.year % 400 == 0 || a.year % 4 == 0 && a.year % 100 != 0) {
			if (a.day > 29) {
				return 0;
			}
		}
		else {
			if (a.day > 28) {
				return 0;
			}
		}
	}if (a.month == 1 || a.month == 3 || a.month == 5 || a.month == 7 || a.month == 8 || a.month == 10 || a.month == 12) {
		if (a.day > 31) {
			return 0;
		}
	}if (a.month == 4 || a.month == 6 || a.month == 9 || a.month == 11) {
		if (a.day > 30) {
			return 0;
		}
	}
	return 1;
}
int main() {
	struct date a;
	nhap(&a);
	printf("\n----------\n");
	xuat(a);
	int kiemtra = checkdate(a);
	if (kiemtra) {
		printf("\nNgay thang hop le");
	}
	else {
		printf("\nNgay thang khong hop le");
	}
}