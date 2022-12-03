//Chen phan tu vao mang mot chieu
//1. Chen mot so nguyen m (m nhap tu ban phim) vao cuoi day
//2. Chen mot so nguyen m (m nhap tu ban phim) vao dau day
//3. Chen mot so nguyen m (m nhap tu ban phim) vao vi tri K
//4. Chen mot so nguyen m (m nhap tu ban phim) vao vi tri thich hop


#include<stdio.h>
int a[100];
int n;
void NhapMang(int x[], int& n) {
	do {
		printf("Nhap vao so luong mang a: ");
		scanf("%d", &n);
	} while (n < 1);
	for (int i = 0; i < n; i++) {
		printf("a[%d]= ", i);
		scanf("%d", &x[i]);
	}
}
void XuatMang(int x[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", x[i]);
	}
}
void themvaocuoimang(int x[], int &n, int m) {
	int size = sizeof(x) / sizeof(x[0]);
	if (n == size) {
		printf("khong the them vao mang!");
	}
	else {
		x[n] = m;
		n++;
	}
}


void themvaodaumang(int x[], int& n, int m) {
	int size = sizeof(x) / sizeof(x[0]);
	if (n == size) {
		printf("khong the them vao mang!");
	}
	else {
		n++;
	}
	for (int i = n-1; i >0 ; i--) {
		x[i] = x[i - 1];
	}
	x[0] = m;
}

void themvaovitriK(int x[], int& n,int m, int k) {
	int size = sizeof(x) / sizeof(x[0]);
	if (n == size) {
		printf("khong the them vao mang!");
	}
	else {
		n++;
	}
	for (int i = n - 1; i > k; i--) {
		x[i] = x[i - 1];
	}
	x[k] = m;
}
//con so them vao nho hon\ co gia tri gan nhat voi vitri tim thay
int main() {
	NhapMang(a, n);
	XuatMang(a, n);
	printf("\n");
	themvaocuoimang(a, n, 99);
	XuatMang(a, n);
	themvaodaumang(a, n, 88);
	printf("\n");
	XuatMang(a, n);
	themvaovitriK(a, n,77, 2);
	printf("\n");
	XuatMang(a, n);

}