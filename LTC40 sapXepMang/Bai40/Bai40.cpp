//Sap xep tang dan giam dan

#include<stdio.h>
int a[100];
int n;
void nhapMang(int x[], int& n) {
	printf("Nhap vao sl mang: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		printf("a[%d]= ",i);
		scanf("%d", &x[i]);
	}
}
void xuatMang(int x[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ", x[i]);
	}

}
void temp(int& b, int& c) {
	int temp = b;
	b = c;
	c = temp;
}

void  giatritang(int x[], int n) {
	for (int i = 0; i < n; i++) {
		int vitrinhonhat = i;
		for (int j = i + 1; j < n; j++) {
			if (x[j] < x[vitrinhonhat])
				vitrinhonhat = j;
			temp(x[j], x[i]);
		}

	}
}
void giatrigiam(int x[], int n) {
	for (int i = 0; i < n; i++) {
		int vitrilonnhat = i;
		for (int j = i + 1; j < n; j++) {
			if (x[j] > x[vitrilonnhat])
				vitrilonnhat = j;
			temp(x[i], x[j]);
		}
	}
}
int main() {
	nhapMang(a, n);
	printf("\nMang tang dan:");
	giatritang(a, n);
	xuatMang(a, n);
	printf("\nMang giam dan:");
	giatrigiam(a, n);
	xuatMang(a, n);
	
	

}