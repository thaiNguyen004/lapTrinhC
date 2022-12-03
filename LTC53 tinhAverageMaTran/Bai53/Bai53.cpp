//Tinh trung binh cong trong mang hai chieu
#include<stdio.h>
int a[100][100];
int n, m;
void nhapmang(int x[100][100], int& n, int& m) {
	do {
		printf("Nhap so hang: ");
		scanf("%d", &n);
	} while (n <= 0);
	do {
		printf("Nhap so cot: ");
		scanf("%d", &m);
	} while (m <= 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("a[%d][%d]", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatmang(int x[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
}

double trungbinhcongfull(int x[100][100], int n, int m) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			tong += x[i][j];
		}
	}
	double trungbinhcong = (double)tong / (n * m);
	return trungbinhcong;
}
double trungbinhcongchiahetcho5(int x[100][100], int n, int m) {
	int tong = 0;
	int soluong = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (x[i][j] % 5 == 0) {
				tong += x[i][j];
				soluong++;
			}
		}
	}
	double trungbinhcong = 0;
	if (soluong > 0)
		return trungbinhcong = tong / soluong;
	else
		return trungbinhcong;
}
int main() {
	nhapmang(a, n, m);
	xuatmang(a, n, m);
	printf("trung binh cong cua mang hai chieu la: %.2f", trungbinhcongfull(a, n, m));
	printf("\n");
	printf("trung binh cong chia het cho 5 la: %.2f ", trungbinhcongchiahetcho5(a, n, m));
}