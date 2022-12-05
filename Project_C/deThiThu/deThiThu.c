#include<stdio.h>
#include<string.h>
struct NYC {
	char hoten[50];
	float chieucao;
	float cannang;
	int tuoi;
	char khanangcuany[100];
	char phanLoaiCanNang[50];
}nyc1[50]; int n;
void nhapTtNyc(int *n) {
	do {
		printf("Vui long nhap so luong nyc: ");
		scanf_s("%d", n);
	} while (*n == 0);
	
	for (int i = 0; i < *n; i++)
	{
		printf("NHAP THONG TIN NGUOI YEU CU THU %d\n",i+1);
		int goloi; goloi = getchar();
		printf("Ho Va Ten: "); gets_s(nyc1[i].hoten, 50);
		printf("Chieu Cao: "); scanf_s("%f", &nyc1[i].chieucao);
		printf("Can Nang: "); scanf_s("%f", &nyc1[i].cannang);
		printf("Tuoi: "); scanf_s("%d", &nyc1[i].tuoi);
	}
}

void phanLoaiTuoi(int n) {
	for (int i = 0; i < n; i++)
	{
		if (nyc1[i].tuoi > 30) {
			strcpy(nyc1[i].khanangcuany, "(Ban la phi cong gioi!!!)");
		}
		else if (nyc1[i].tuoi > 24) {
			strcpy(nyc1[i].khanangcuany, "(Nuoi duoc minh hoc lai)");
		}
		else if (nyc1[i].tuoi >= 18) {
			strcpy(nyc1[i].khanangcuany, "(Du tuoi chiu trach nghiem)");
		}
		else {
			strcpy(nyc1[i].khanangcuany, "(Can than neu khong muon di boc lich)");
		}
	}
}
void phanLoaiCanNang(int n) {
	for (int i = 0; i < n; i++)
	{
		if (nyc1[i].cannang >= 60) {
			strcpy(nyc1[i].phanLoaiCanNang, "\t(Beo nhu Lon)");
		}
		else {
			strcpy(nyc1[i].phanLoaiCanNang, "\t(Om nhu cui kho)");
		}
	}
}
float timMinCanNang(int n) {
	float min = nyc1[0].cannang;
	for (int i = 0; i < n; i++)
	{
		if (min > nyc1[i].cannang) {
			min = nyc1[i].cannang;
		}
	}
	return min;
}
void sapXepCanNang(int n) {
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (nyc1[i].cannang > nyc1[j].cannang) {
				struct NYC temp;
				temp = nyc1[i];
				nyc1[i] = nyc1[j];
				nyc1[j] = temp;
			}
		}
	}
}
void xuatTtNyc(int n) {
	printf("\nXUAT THONG TIN NGUOI YEU CU\n");
	for (int i = 0; i < n; i++)
	{
		printf("\nHo va Ten: %s\n", nyc1[i].hoten);
		printf("Chieu Cao: %5.2f\t", nyc1[i].chieucao);
		printf("Can Nang: %5.2f\t\t", nyc1[i].cannang);
		printf("Tuoi: %5d\t", nyc1[i].tuoi);
		printf("%50s", nyc1[i].khanangcuany);
		printf("%40s\n", nyc1[i].phanLoaiCanNang);
	}
}
int main() {
	int menu;
	do {
		printf("\n++==========MENU==========++\n");
		printf("++1. Thong Tin ve NYC     ++\n");
		printf("++2. Phan loai            ++\n");
		printf("++3. Mang NYC             ++\n");
		printf("++4. Thoat                ++\n");
		printf("++========================++\n");
		printf("Vui long nhap: ");
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1:
			nhapTtNyc(&n);
			xuatTtNyc(n);
			printf("\n--------------------------------------\n");
			break;
		case 2:
			phanLoaiTuoi(n);
			xuatTtNyc(n);
			printf("\n--------------------------------------\n");
			break;
		case 3:
			phanLoaiCanNang(n);
			timMinCanNang(n);
			sapXepCanNang(n);
			xuatTtNyc(n);
			break;
		default:
			break;
		}
	} while (menu != 4);
}