#include<stdio.h>
#include<math.h>
struct phanso {
	int mauso;
	int tuso;
};
void nhapphanso(struct phanso* ps) {
	printf("Vui long nhap tu so: ");
	scanf_s("%d", &ps->tuso);
	do {
		printf("Vui long nhap mau so: ");
		scanf_s("%d", &ps->mauso);
	} while (ps->mauso == 0);
}
void rutgonphanso(struct phanso* ps) {
	int USCLN = 1;
	int a = abs(ps->tuso);
	int b = abs(ps->mauso);
	if (a == 0 || b == 0) {
		USCLN = a + b;
	}
	else {
		while (a != b) {
			if (a > b) {
				a = a - b;
			}
			else {
				b = b - a;
			}
		}
		USCLN = a;
	}
	ps->tuso = ps->tuso / USCLN;
	ps->mauso = ps->mauso / USCLN;
}
void xuatstruct(struct phanso ps) {
	rutgonphanso(&ps);
	if (ps.mauso == 1) {
		printf("%d", ps.tuso);
	}
	else {
		printf("%d/%d", ps.tuso, ps.mauso);
	}
}
struct phanso tinhtong(struct phanso ps1, struct phanso ps2) {
	struct phanso ketqua;
	ketqua.tuso = ps1.tuso * ps2.mauso + ps1.mauso * ps2.tuso;
	ketqua.mauso = ps1.mauso * ps2.mauso;
	return ketqua;
}
struct phanso tinhtru(struct phanso ps1, struct phanso ps2) {
	struct phanso ketqua;
	ketqua.tuso = ps1.tuso * ps2.mauso - ps1.mauso * ps2.tuso;
	ketqua.mauso = ps1.mauso * ps2.mauso;
	return ketqua;
}
struct phanso tinhnhan(struct phanso ps1, struct phanso ps2) {
	struct phanso ketqua;
	ketqua.tuso = ps1.tuso *  ps2.tuso;
	ketqua.mauso = ps1.mauso * ps2.mauso;
	return ketqua;
}
struct phanso tinhchia(struct phanso ps1, struct phanso ps2) {
	struct phanso ketqua;
	ketqua.tuso = ps1.tuso * ps2.mauso;
	ketqua.mauso = ps1.mauso * ps2.tuso;
	return ketqua;
}
int main() {
	struct phanso phanso1, phanso2;
	printf("======NHAP PHAN SO 1======\n");
	nhapphanso(&phanso1);
	printf("\n======NHAP PHAN SO 2======\n");
	nhapphanso(&phanso2);
	printf("\nPHAN SO 1: \n");
	xuatstruct(phanso1);
	printf("\nPHAN SO 2: \n");
	xuatstruct(phanso2);
	printf("\n");
	printf("\n=======Tinh tong hai phan so=======\n");
	xuatstruct(phanso1); printf(" + "); xuatstruct(phanso2); printf(" = "); xuatstruct(tinhtong(phanso1, phanso2));
	printf("\n=======Tinh hieu hai phan so=======\n");
	xuatstruct(phanso1); printf(" - "); xuatstruct(phanso2); printf(" = "); xuatstruct(tinhtru(phanso1, phanso2));
	printf("\n=======Tinh tong hai phan so=======\n");
	xuatstruct(phanso1); printf(" * "); xuatstruct(phanso2); printf(" = "); xuatstruct(tinhnhan(phanso1, phanso2));
	printf("\n=======Tinh tong hai phan so=======\n");
	xuatstruct(phanso1); printf(" / "); xuatstruct(phanso2); printf(" = "); xuatstruct(tinhchia(phanso1, phanso2));
}