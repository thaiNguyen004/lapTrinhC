/*
Quản lý hình ảnh
Hình chữ nhật => diemTraiTren, chieuRong,chieuCao
Hình tam giác => diemA, diemB, diemC
Hình tròn     => tamHinhTron, banKinh
*/
#include<stdio.h>
struct point {
	float x;
	float y;
};
struct triangle {
	struct point a, b, c;
};
struct circle {
	struct point c;
	float r;
};
struct rectangle {
	struct point a, b, c, d;
};
struct polygon {
	struct point *ps;
	int n;
};


//Quản lý hình ảnh
struct date {
	int day, month, year;
};
struct person {
	char name[100];
	struct date dateOfBirth;
	float weight;
};
//struct person person1;
//person.dateOfBirth.day

struct PERSON {
	char name[100];
	struct date {
		int day, month, year;
	}dateOfBirth;
	float weight;
};