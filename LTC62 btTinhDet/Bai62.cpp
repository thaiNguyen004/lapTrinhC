#include<stdio.h>
int a[100][100];
int n;
void nhapmang(int x[100][100], int& n) {
	do {
		printf("Nhap vao n: ");
		scanf("%d", &n);
	} while (n <= 0);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("a[%d][%d]", i, j);
			scanf("%d", &x[i][j]);
		}
	}
}
void xuatmang(int x[100][100], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
}

//Ma tran dinh thuc
/*
1 2 3
4 5 6
7 8 9
det = 1*5*9 + 2*6*7 + 3*4*8    => x[mod(k+1,n)][mod(l+1,n)]
      1 = x[0][0]
	  2 = x[0][1]
	  3 = x[0][2]
	 -
	  3*5*7 + 2*4*9 + 1*6*8  => x[mod(k+1,n)][mod(l-1,n)]
	  1 = x[0][0]
	  2 = x[0][1]
	  3 = x[0][2] 
*/
int mod(int x, int y) {
	int r = x % y;
	return r < 0 ? r + y : r;
}
int tinhDet(int x[100][100], int n) {
	int tong_1 = 0;
	int tong_2 = 0;
	int k = 0;
	for (int i = 0; i < n; i++) {
		int l = i;
		int temp = 1;
		for (int j = 0; j < n; j++) {
			temp *= x[mod(k + j, n)][mod(l + j, n)];
		}
		tong_1 += temp;
	}

	k = 0;
	for (int i = 0; i < n; i++) {
		int l = i;
		int temp = 1;
		for (int j = 0; j < n; j++) {
			temp *= x[mod(k + j, n)][mod(l - j, n)];
		}
		tong_2 += temp;
	}

	return tong_1 - tong_2;
}

int main() {
	nhapmang(a, n);
	xuatmang(a, n);
	printf("Det(%d) = %d", n, tinhDet(a, n));
}