#include<stdio.h>
// A: 5 3 1 3 4 6 7 1
// B: 1 1 1 1 1 1 1 <-
// B: 1 1 5 4 3 2 1 1
int a[100];
int n;
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

//cach tim mang con co sl lon nhat tang dan
//A : 3 2 4 0 1 5 7 8 <--
//B : 1 2 1 5 4 3 2 1
//B : 1 1 1 1 1 1 1 1

int timmax(int x[], int n) {
	int max = x[0];
	for (int i = 0; i < n; i++) {
		if (x[i] > max) {
			max = x[i];
		}
	}
	return max;
}
void mangcontdk(int x[], int n) {
	int b[100];
	for (int i = 0; i < n; i++) {
		b[i] = 1;
	}
	for (int i = n - 1; i > 0; i--) {
		if (x[i] > x[i - 1]) {
			b[i - 1] = b[i] + 1;
		}
	}
	int max = timmax(b, n);
	for (int i = 0; i < n; i++) {
		if (b[i] == max) {
			for (int j = i; j < max + i; j++) {
				printf("%d ", x[j]);
			}
		}
	}
}
int main() {
	NhapMang(a, n);
	mangcontdk(a, n);
	
}