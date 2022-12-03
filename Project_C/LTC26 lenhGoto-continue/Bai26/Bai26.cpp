#include<stdio.h>
int main() {
	int n;
	nguyen:
	printf("\n Nhap so nguyen duong n:");
	scanf("%d", &n);
	if (n <= 0) goto nguyen;

	for (int i = 1; i <= n;i++) {
		if (i % 2 == 0) continue;
		printf("%d", i);
	}
}