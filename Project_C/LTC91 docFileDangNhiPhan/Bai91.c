#include<stdio.h>
#include<stdlib.h>
struct Ngaysinh {
	int day;
	int month;
	int year;
}ns1;
int main() {
	FILE* f;
	f=fopen("C:\\Users\\thain\\OneDrive\\Máy tính\\Text Document\\Bai90.txt", "rb");
	if (f == NULL) {
		printf("Khong the mo file");
		exit(1);
	}
	fread(&ns1, sizeof(ns1), 1, f);
	printf("%d/%d/%d", ns1.day, ns1.month, ns1.year);
	fclose(f);
}