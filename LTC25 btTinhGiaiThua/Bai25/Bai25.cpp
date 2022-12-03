//Tìm giai thừa của con số n
#include<stdio.h>
int main() {
	int n;
	do {
		printf("Nhap gia tri cho n: ");
		scanf("%d", &n);
	} while (n < 0);
	int giaithua = 1;
	for (int i = 1; i <= n; i++) {
		giaithua = giaithua * i;
	}
	printf("giai thua = %d", giaithua);
}
