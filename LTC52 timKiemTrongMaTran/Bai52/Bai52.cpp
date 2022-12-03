//tim kiem trong mang hai chieu
#include<stdio.h>
int a[100][100];
int n, m;
void nhapmanghaichieu(int x[100][100], int& n, int& m) {
	do {
		printf("Nhap vao so hang: ");
		scanf("%d", &n);
	} while (n <= 0);
	do {
		printf("Nhap vao so cot: ");
		scanf("%d", &m);
	} while (m <= 0);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("a[%d][%d]", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatmanghaichieu(int x[100][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}

int timkiem(int x[100][100], int n, int m, int giatri_tim) {
	int kq = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (x[i][j] == giatri_tim) {
				kq = 1;
			}
		}
	}
	return kq;
}
void thuchientimkiem(int x[100][100], int n, int m) {
	int luachon;
	do {
		int giatri_timkiem;
		printf("Nhap vao gia tri can tim: ");
		scanf("%d", &giatri_timkiem);
		timkiem(x, n, m, giatri_timkiem);
		if (timkiem(x, n, m, giatri_timkiem))
			printf("tim thay");
		else
			printf("khong tim thay");
		printf("\nNhap so bat ki de tiep tuc, nhap 0 de thoat\n");
		scanf("%d", &luachon);
	} while (luachon != 0);

}

int main() {
	nhapmanghaichieu(a, n, m);
	xuatmanghaichieu(a, n, m);
	thuchientimkiem(a, n, m);
}