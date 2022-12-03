//Bien con tro

//
//#include<stdio.h>
//int main() {
//	//dia chi cua bien
//	int var;
//	printf("Nhap var = ");
//	scanf_s("%d",&var);
//	printf("\nGia tri cua var = %d", var);
//	printf("\nDia chi cua bien var trong bo nho la: %p ", &var);
//
//	//Con tro
//	int* a;
//	a = &var;
//	printf("\nGia tri cua var = %d", *a);
//	printf("\nDia chi cua bien var trong bo nho la: %p ", a);
//
//	*a = 10;
//	printf("\nGia tri cua var la %d", var);
//	printf("\nGia tri cua *a la %d", *a);
//}






//Cach su dung con tro de lam viec voi mang trong lap trinh C

#include<stdio.h>
int main() {
	/*double x[] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		printf("%p ", &x[i]);
	}
	printf("Dia chi cua x la: %p", &x);
	printf("Dia chi cua x[0] la: %p", &x[0]);*/

	int x[10];
	int n = 10;
	printf("Nhap vao cac giia tri cua mang: ");
	for (int i = 0; i < n; i++) {
		printf("a[%d]", i);
		/*scanf("%d", &x[i]);*/
		scanf("%d", x + i);
	}
	for (int i = 0; i < n; i++) {
		/*printf("%d ", x[i]);*/
		printf("%d ", *(x+i));
	}


}