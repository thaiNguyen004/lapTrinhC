//Hàm trong lập trình C
/*#include<stdio.h>
#include<math.h>
int kiem_tra_SNT(int x) {
	if (x <= 1)
		return 0;
	int so_luong_uoc_so;
	for (int i = 2; i < x - 1; i++) {
		if (x % i == 0)
			return 0;
	}
	return 1;
}
int main() {
	//Nhap lieu
	int n;
	printf("Nhap vao n:");
	scanf("%d", &n);
	//Goi ham
	int kt = kiem_tra_SNT(n);

	//Xu ly va xuat ket qua
	if (kt == 0) {
		printf("khong la snt");
	}
	else {
		printf("la snt");
	}
}
*/




#include<stdio.h>
int kiem_tra_SNT(int x) {
	if (x <= 1) {
		return 0;
	}
	else {
		for (int i = 2; i <= x - 1; i++) {
			if (x % i == 0) {
				return 0;
			}
			else {
				return 1;
			}	
		}
	}
}

int main() {
	int n;
	printf("Nhap n:");
	scanf("%d", &n);
	int goiham = kiem_tra_SNT(n);
	if (goiham == 0) {
		printf("Khong la so nguyen to");
	}
	else {
		printf("La so nguyen to");
	}
}
