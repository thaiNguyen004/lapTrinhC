#include<stdio.h>
#include<math.h>


int ham(int x) {
	int kc = (int)sqrt(x);
	if (pow(kc, 2) == x) return 1;
	return 0;
}


int main() {
	int n;
	printf("KIEM TRA SO CHINH PHUONG\n");
	printf("Kiem tra tu 0 den n\n");
	re:
	printf("Nhap n :");
	scanf("%d", &n);
	if (n < 1) goto re;
	for (int i = 0; i < n; i++) {
		if (ham(i)) {
			printf("%d\n", i);
		}
	}
}