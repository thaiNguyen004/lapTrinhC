#include<stdio.h>
int main() {
	int n;
	printf("nhap n: ");
	scanf_s("%d", &n);
	for (int i = 0; i <= n; i++) {
		if (i % 2 != 0) {
			printf("%d ", i);
		}
	}
}