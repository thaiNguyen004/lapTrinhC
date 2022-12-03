#include<stdio.h>
//Tach Mang 
int a[100];
int b[50];//chan
int c[50];//le
int n1, n2, n3;
void NhapMang(int biennhap[], int& slbiennhap) {
	printf("Nhap vao sl bien:");
	scanf("%d", &slbiennhap);
	for (int i = 0; i < slbiennhap; i++) {
		printf("[%d]", i);
		scanf("%d", &biennhap[i]);
	}
}
void xuatmang(int xuatmang[], int slbienxuat) {
	for (int i = 0; i < slbienxuat; i++) {
		printf("%d ", xuatmang[i]);
	}
}
void tachmang(int x1[], int n_1, int x2[], int& n_2, int x3[], int& n_3) {
	int i1 = 0, i2 = 0, i3 = 0;
	n_2 = 0;
	n_3 = 0;
	for (int i = 0; i < n_1; i++) {
		if (x1[i] % 2 == 0) {
			x2[i2] = x1[i];
			i2++;
			n_2++;
		}
		else {
			x3[i3] = x1[i];
			i3++;
			n_3++;
		}
	}
}
int main() {
	NhapMang(c, n3);
	xuatmang(c, n3);
	tachmang(c, n3, a, n1, b, n2);
	xuatmang(a, n1);
	printf("\n");
	xuatmang(b, n2);
}
