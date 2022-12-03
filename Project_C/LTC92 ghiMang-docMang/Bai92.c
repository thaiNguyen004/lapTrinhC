#include<stdio.h>
#include<stdlib.h>
void nhapmang(int x[], int* n) {
	do {
		printf("Nhap vao n: ");
		scanf("%d", n);
	} while (*n <= 0);
	for (int i = 0; i < *n; i++)
	{
		scanf("%d", &x[i]);
	}

}
void xuatmang(int x[], int n) {
	for (int i = 0; i < n; i++)
	{
		printf("%d ", x[i]);
	}
}

void xuatraFile(int x[], int n, char tenfile[50]) {
	FILE* f;
	f = fopen(tenfile, "w");
	if (f == NULL) {
		printf("Loi mo file");
		return;
	}
	fprintf(f, "%d\n", n);
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%d ", x[i]);
	}
	fclose(f);
}
void xuatraFile2(int x[], int n, char tenfile[50]) {
	FILE* f;
	f = fopen(tenfile, "w");
	if (f == NULL) {
		printf("Loi mo file");
		return;
	}
	for (int i = 0; i < n; i++)
	{
		fprintf(f, "%d ", x[i]);
	}
	fclose(f);
}
void NhapFile(int x[], int *n, char tenfile[50]) {
	FILE* f;
	f = fopen(tenfile, "r");
	if (f == NULL) {
		printf("Loi mo file");
		return;
	}

	fscanf(f, "%d", n);
	printf("%d", *n);
	for (int i = 0; i < *n; i++)
	{
		fscanf(f, "%d", &x[i]);
	}
	fclose(f);
}
void NhapFile2(int x[], int* n, char tenfile[50]) {
	FILE* f;
	f = fopen(tenfile, "r");
	if (f == NULL) {
		printf("Loi mo file");
		return;
	}
	int i = 0;
	while (!feof(f)) {
		fscanf(f, "%d ", &x[i]);
		i++;
	}
	*n = i;
	fclose(f);
}
int main() {
	int a[100];
	int n;
	/*nhapmang(a, &n);
	xuatraFile(a, n, "C:\\Users\\thain\\OneDrive\\Máy tính\\Text Document\\Bai92.txt");*/
	/*NhapFile(a, &n, "C:\\Users\\thain\\OneDrive\\Máy tính\\Text Document\\Bai92.txt");
	xuatmang(a, n);*/
	NhapFile2(a, &n, "C:\\Users\\thain\\OneDrive\\Máy tính\\Text Document\\Bai92.txt");
	xuatmang(a, n);
}