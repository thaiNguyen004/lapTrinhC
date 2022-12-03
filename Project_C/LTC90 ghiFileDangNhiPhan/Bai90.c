#include<stdio.h>
struct date {
	int day;
	int month;
	int year;
}date1;
int main() {
	FILE* f;
	f = fopen("C:\\Users\\thain\\OneDrive\\Máy tính\\Text Document\\Bai90.txt", "wb");
	if (f == NULL) {
		printf("Khong the mo file!!!");
		exit(1);
	}

	date1.day = 11;
	date1.month = 03;
	date1.year = 2004;
	fwrite(&date1, sizeof(date1), 1, f);
	fclose(f);
}