#include<stdio.h>
//ham tinh so nhi phan
void nhiphan(int x) {
	if (x == 0)return ;
	else {
		int r = x % 2;
		nhiphan(x / 2);
		printf("%d", r);
	}
}

int main() {
	int n;
	do {
		printf("nhap vao n=");
		scanf("%d", &n);
	} while (n < 0);
	nhiphan(n);
}

