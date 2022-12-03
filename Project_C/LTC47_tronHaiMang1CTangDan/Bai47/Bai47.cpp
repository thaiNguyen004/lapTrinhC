#include<stdio.h>
int a[100];
int b[100];
int c[200];
int n;
int n1, n2, n3;
void NhapMang(int x[], int& n) {
	printf("Nhap vao sl mang ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("[%d]: ", i);
		scanf("%d", &x[i]);
	}
}
void XuatMang(int x[], int n) {
	for (int i = 0; i < n;i++) {
		printf("%d ", x[i]);
	}
}
void GopMang(int x1[], int x2[], int x3[], int n1, int n2, int& n3) {
	n3 = n1 + n2;
	int i1 = 0;
	int i2 = 0;
	int i3 = 0;
	while (i3 < n3) {
		if (i1 >= n1) {
			x3[i3] = x2[i2];
			i2++;
		}
		else if (i2 >= n2) {
			x3[i3] = x1[i1];
			i1++;
		}
		else if (x1[i1] <= x2[i2]) {
			x3[i3] = x1[i1];
			i1++;
		}
		else {
			x3[i3] = x2[i2];
			i2++;
		}
		i3++;
	}
}
int main() {
	printf("Nhap mang a\n");
	NhapMang(a, n1);
	XuatMang(a, n1);
	printf("Nhap mang b\n");
	NhapMang(b, n2);
	XuatMang(b, n2);
	printf("\n");
	printf("gop mang");
	GopMang(a, b, c, n1, n2, n3);
	XuatMang(c, n3);
	
}