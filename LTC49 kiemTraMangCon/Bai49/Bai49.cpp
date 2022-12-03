//Bai49 
#include<stdio.h>
//Tach Mang 
int a[100];
int b[100];
int n1, n2;
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
//a: 1 5 3 5 7 9
//b: 3 5 7
int kiemtramangcon(int x1[], int n_1, int x2[], int n_2) {
	int kq = 0;
	if (n_2<=n_1) {
		for (int i = 0; i < n_1; i++) {
			if (x1[i] == x2[0]) {
				int j=1;
				for (; j < n_2; j++) {
					if (x1[i + j] != x2[j])
						break;
				}
				if (j == n_2)
					kq = 1;
				break;
			}
		}
	}
	return kq;
}

int main() {
	NhapMang(a, n1);
	xuatmang(a, n1);
	NhapMang(b, n2);
	xuatmang(b, n2);
	int kt = kiemtramangcon(a, n1, b, n2);
	if (kt)
		printf("Day la mang con");
	else
		printf("khong phai mang con");
}
