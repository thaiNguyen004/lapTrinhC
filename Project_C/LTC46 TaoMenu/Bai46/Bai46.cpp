//Tao menu cho truong trinh C

//Chen phan tu vao mang mot chieu
//1. Chen mot so nguyen m (m nhap tu ban phim) vao cuoi day
//2. Chen mot so nguyen m (m nhap tu ban phim) vao dau day
//3. Chen mot so nguyen m (m nhap tu ban phim) vao vi tri K
//4. Chen mot so nguyen m (m nhap tu ban phim) vao vi tri thich hop


#include<stdio.h>
//1. Chen mot so nguyen m (m nhap tu ban phim) vao cuoi day
int a[100];
int n;
void NhapMang(int x[], int& n) {
	printf("Nhap vao sl mang a: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("a[%d]= ",i);
		scanf("%d", &x[i]);
	}
}
void XuatMang(int x[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", x[i]);
	}
}

// 1 2 3 4 5 m
void Nhapvaocuoimang(int x[], int& n, int m) {
	int size = sizeof(x) / sizeof(x[0]);
	if (n == size) {
		printf("khong the thuc hien!");
	}
	else {
		x[n] = m;
		n++;
	}
}
// 1 1 2 3 4 5
//             
void Nhapvaodaumang(int x[], int& n, int m) {
	int size = sizeof(x) / sizeof(x[0]);
	if (n == size) {
		printf("khong the thuc hien!");
	}
	else {
		n++;
	}
	for (int i = n - 1; i > 0; i--) {
		x[i] = x[i - 1];
	}
	x[0] = m;
}
// 1 2 m 3 4 5
void NhapvaovitriK(int x[], int& n, int k, int m) {
	int size = sizeof(x) / sizeof(x[0]);
	if (n == size) {
		printf("khong the thuc hien!");
	}
	else {
		n++;
	}
	for (int i = n - 1; i > k; i--) {
		x[i] = x[i - 1];
	}
	x[k] = m;
}
int main() {
	char gt;
	do{
		printf("Menu");
		printf("\n1.Nhap Mang");
		printf("\n2.Xuat Mang");
		printf("\n3.Nhap vao cuoi mang");
		printf("\n4.Nhap vao dau mang");
		printf("\n5.Nhap vao vi tri k");
		printf("\nx- thoat");
		printf("\nNhap vao ");
		scanf(" %c", &gt);
		if (gt == '1') {
			NhapMang(a, n);
		}
		else if (gt == '2') {
			XuatMang(a, n);
			printf("\n");
		}
		else if (gt == '3' || gt == '4' || gt == '5') {
			int m;
			printf("Nhap vao m: ");
			scanf("%d", &m);
			if (gt == '3') {
				Nhapvaocuoimang(a, n, m);
			}
			else if (gt == '4') {
				Nhapvaodaumang(a, n, m);
			}
			else if (gt == '5') {
				int k;
				printf("Nhap vao vi tri can them : ");
				scanf("%d", &k);
				NhapvaovitriK(a, n, k, m);
			}
		}
	} while (gt != 'x');
}

