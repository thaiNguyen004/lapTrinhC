#include<stdio.h>
#include<math.h>
struct Phanso
{
	int tuSo;
	int mauSo;
};
void nhapPhanSo(struct Phanso* ps) {
	printf("\nNhap vao tu so: ");
	scanf_s("%d", &ps->tuSo);
	do {
		printf("\nNhap vao mau so");
		scanf_s("%d", &ps->mauSo);
	} while (ps->mauSo == 0);
}
void rutgon(struct Phanso* ps) {
	//tim USCLN
	int a = ps->tuSo;
	int b = ps->mauSo;
	int uscln = 1;

	a = abs(a);
	b = abs(b);

	if (a == 0 || b == 0) {
		uscln = (ps->tuSo + ps->mauSo);
	}
	else {
		while (a != b) {
			if (a > b) {
				a -= b;
			}
			else {
				b -= a;
			}
		}
		uscln = a;
	}
	ps->tuSo /= uscln;
	ps->mauSo /= uscln;
}
void inphanso(struct Phanso ps) {
	if (ps.mauSo < 0) {
		ps.tuSo *= -1;
		ps.mauSo *= -1;
	}
	rutgon(&ps);
	printf("%d/%d", ps.tuSo, ps.mauSo);
}

int main() {
	struct Phanso ps1, ps2;
	printf("Nhap phan so 1: ");
	nhapPhanSo(&ps1);
	printf("\nNhap phan so 2: ");
	nhapPhanSo(&ps2);
	
	printf("\nPhan so vua nhap la: ");
	inphanso(ps1);
	printf("\t");
	inphanso(ps2);
}