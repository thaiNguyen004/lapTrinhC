#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
struct date {
	int day, month, year;
}date[50];
struct SinhVien {
	char mssv[30];
	char name[50];
	char sex[5];
	struct date old;
	int tuoi;
	float diem1, diem2, diem3;
	float diemTrungBinh;
	char hocLuc[20];
	char maLop[30];
}sv[50];
//n: so luong sinh vien
int n;
void xoa(char x[]) {
	size_t len = strlen(x);
	if (x[len - 1] == '\n') {
		x[len - 1] = '\0';
	}
}
void nhapSinhVien(int* n) {
	printf("Number of Student: ");
	scanf_s("%d", n);
	int goloi;
	goloi = getchar();
	for (int i = 0; i < *n; i++)
	{
		printf("\nSTUDENT %d\n", i);
		printf("MSSV: "); fflush(stdin); gets_s(sv[i].mssv, 30);
		printf("NAME: "); fflush(stdin); gets_s(sv[i].name, 50);
		printf("SEX: "); fflush(stdin); gets_s(sv[i].sex, 5);
		do {
			printf("DATE: ");
			scanf_s("%d%d%d", &date[i].day, &date[i].month, &date[i].year);
		} while (date[i].day == 0 || date[i].month == 0 || date[i].year == 0);
		printf("MARKS 1: "); scanf_s("%f", &sv[i].diem1);
		printf("MARKS 2: "); scanf_s("%f", &sv[i].diem2);
		printf("MARKS 3: "); scanf_s("%f", &sv[i].diem3); goloi = getchar();
		printf("CLASS CODE: "); fflush(stdin); gets_s(sv[i].maLop, 30);
	}
}
void tinhTuoi(int n) {
	time_t now = time(0);
	struct tm* DATE = localtime(&now);
	int yearnow = DATE->tm_year + 1900;
	for (int i = 0; i < n; i++)
	{
		sv[i].tuoi = yearnow - date[i].year;
	}
}
void tinhdiemtrungbinh(int n) {
	for (int i = 0; i < n; i++)
	{
		sv[i].diemTrungBinh = (sv[i].diem1 + sv[i].diem2 + sv[i].diem3) / 3;
	}
}
void xeploai(int n) {
	for (int i = 0; i < n; i++)
	{
		if (sv[i].diemTrungBinh >= 9) {
			strcpy(sv[i].hocLuc, "Xuat sac");
		}
		else if (sv[i].diemTrungBinh >= 8) {
			strcpy(sv[i].hocLuc, "Gioi");
		}
		else if (sv[i].diemTrungBinh >= 6.5) {
			strcpy(sv[i].hocLuc, "Kha");
		}
		else if (sv[i].diemTrungBinh >= 5) {
			strcpy(sv[i].hocLuc, "Trung binh");
		}
		else if (sv[i].diemTrungBinh >= 2) {
			strcpy(sv[i].hocLuc, "Yeu");
		}
	}
}
void inSinhVien(int n) {
	printf("\nOUTPUT STUDENT\n");
	for (int i = 0; i < n; i++)
	{
		printf("\nSTUDENT %d\n", i);
		printf("\nMSSV: %s", sv[i].mssv);
		printf("\nNAME: %s", sv[i].name);
		printf("\nSEX: %s", sv[i].sex);
		printf("\nDATE: %d/%d/%d", date[i].day, date[i].month, date[i].year);
		printf("\nOLD: %d", sv[i].tuoi);
		printf("\nMARKS 1: %.2f", sv[i].diem1);
		printf("\nMARKS 2: %.2f", sv[i].diem2);
		printf("\nMARKS 3: %.2f", sv[i].diem3);
		printf("\nAVERAGE: %.2f", sv[i].diemTrungBinh);
		printf("\nRANK: %s", sv[i].hocLuc);
		printf("\nCLASS CODE: %s", sv[i].maLop);
	}
}
void capnhatsinhvien(int n) {
	int capnhat;
	printf("Ban muon cap nhat sinh vien: ");
	scanf_s("%d", &capnhat);
	for (int i = 0; i < n; i++)
	{
		if (i == capnhat) {
			int goloi;
			goloi = getchar();
			printf("STUDENT %d\n", i);
			printf("\nMSSV: "); fflush(stdin); gets_s(sv[i].mssv, 30);
			printf("\nNAME: "); fflush(stdin); gets_s(sv[i].name, 50);
			printf("\nSEX: "); fflush(stdin); gets_s(sv[i].sex, 5);
			printf("\nDATE: "); scanf_s("%d%d%d", &date[i].day, &date[i].month, &date[i].year);
			printf("\nMARKS 1: "); scanf_s("%f", &sv[i].diem1);
			printf("\nMARKS 2: "); scanf_s("%f", &sv[i].diem2);
			printf("\nMARKS 3: "); scanf_s("%f", &sv[i].diem3); goloi = getchar();
			printf("\nCLASS CODE: "); fflush(stdin); gets_s(sv[i].maLop, 30);
		}
	}
}
void timMax_DiemTrungBinh(int n) {
	float max = sv[0].diemTrungBinh;
	for (int i = 0; i < n; i++)
	{
		if (max < sv[i].diemTrungBinh) {
			max = sv[i].diemTrungBinh;
		}
	}
	printf("MAX OF AVERAGE: %.2f", max);
}
void timMin_Tuoi(int n) {
	int min_tuoi = sv[0].tuoi;
	for (int i = 0; i < n; i++)
	{
		if (min_tuoi > sv[i].tuoi) {
			min_tuoi = sv[i].tuoi;
		}
	}
	printf("MIN OF AGE: %d", min_tuoi);
}
void xoaSinhVienTheoId(int* n) {
	char sinhviendelete[50];
	printf("Nhap MSSV muon xoa: "); int goloi; goloi = getchar();
	gets_s(sinhviendelete, 50);
	for (int i = 0; i < *n; i++)
	{
		if (strcmp(sinhviendelete, sv[i].mssv) == 0) {
			for (int j = i; j < *n; j++)
			{
				strcpy(sv[j].mssv, sv[j + 1].mssv);
				strcpy(sv[j].name, sv[j + 1].name);
				strcpy(sv[j].sex, sv[j + 1].sex);
				date[j].day = date[j + 1].day;
				date[j].month = date[j + 1].month;
				date[j].year = date[j + 1].year;
				sv[j].diem1 = sv[j + 1].diem1;
				sv[j].diem2 = sv[j + 1].diem2;
				sv[j].diem3 = sv[j + 1].diem3;
				strcpy(sv[j].maLop, sv[j + 1].maLop);
			}
		}
	}
	n--;
}
void xuatRaFile(int n) {
	char tenFile[100]; int goloi; goloi = getchar();
	fflush(stdin); gets_s(tenFile, 100);
	printf("%s", tenFile);
	FILE* f;
	f = fopen(tenFile, "wb");
	if (f == NULL) {
		printf("Loi mo file");
		return;
	}
	fwrite(&n, sizeof(struct SinhVien),1,f);
	for (int i = 0; i < n; i++)
	{
		fwrite(&sv[i], sizeof(struct SinhVien), 1, f);
	}
	fclose(f);
}
void nhapTuFile(int *n) {
	char tenFile[100]; int goloi; goloi = getchar();
	fflush(stdin); gets_s(tenFile, 100);
	FILE* f;
	f = fopen(tenFile, "rb");
	if (f == NULL) {
		printf("Loi mo file");
		return;
	}
	fread(n, sizeof(struct SinhVien), 1, f);
	for (int i = 0; i < *n; i++)
	{
		fread(&sv[i], sizeof(struct SinhVien), 1, f);
	}
	fclose(f);
}
int main() {
	printf("KET THUC C\n");
	int menu;
	do {
	nguyen:
		printf("\n++===========================++\n");
		printf("++1. Nhap Sinh Vien          ++\n");
		printf("++2. Xuat Sinh Vien          ++\n");
		printf("++3. Cap nhat sinh vien      ++\n");
		printf("++4. Tim Max diem trung binh ++\n");
		printf("++5. Tim Min tuoi            ++\n");
		printf("++6. Xoa sinh vien           ++\n");
		printf("++7. Xuat tt sv ra file      ++\n");
		printf("++8. Nhap tt sv tu file      ++\n");
		printf("++0. Thoat                   ++\n");
		printf("++===========================++\n");
		printf("Nhap: ");
		scanf_s("%d", &menu);
		if (menu == 1) {
			nhapSinhVien(&n);
			printf("\n----------------------\n");
		}
		else if (menu == 2) {
			tinhTuoi(n);
			tinhdiemtrungbinh(n);
			xeploai(n);
			inSinhVien(n);
			printf("\n----------------------\n");
		}
		else if (menu == 3) {
			capnhatsinhvien(n);
			printf("\n----------------------\n");
		}
		else if (menu == 4) {
			timMax_DiemTrungBinh(n);
			printf("\n----------------------\n");
		}
		else if (menu == 5) {
			timMin_Tuoi(n);
			printf("\n----------------------\n");
		}
		else if (menu == 6) {
			xoaSinhVienTheoId(&n);
			printf("\n----------------------\n");
		}
		else if (menu == 7) {
			xuatRaFile(n);
		}
		else if (menu == 8) {
			nhapTuFile(&n);
		}
		else if (menu != 0) {
			goto nguyen;
		}
	} while (menu != 0);
}




