//28
#include<stdio.h>
#include<math.h>
int kiemtrasnt(int x) {
	if (x <= 0) return 0;
	for (int a = 2; a < x; a++) {
		if (x % a == 0) return 0;
	}
	return 1;
}

int main() {
	int n;
	nguyen:
	printf("Nhap n:");
	scanf("%d", &n);
	if (n <= 0) goto nguyen;
	for (int i = 2; i <= n; i++) {
		if (kiemtrasnt(i)) {
			printf("%d\n", i);
		}
	}
}