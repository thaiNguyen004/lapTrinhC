#include<stdio.h>
int main() {
	//Khai bao
	int a, b, UCLN;
	//Nhap lieu
	printf("Nhap a b :");
	scanf("\n%d", &a);
	scanf("\n%d", &b);
	//Xu ly
	//TH1
	while (a != b) {
		if (a == 0 || b == 0) {
			UCLN = a + b;
			printf("UCLN la %d", UCLN);
		}
		else {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}
		}
	}
	printf("UCLN la %d ", a);
}

//vd a =5 b=3 