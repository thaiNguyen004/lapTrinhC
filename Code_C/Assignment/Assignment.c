#include<stdio.h>
#include<math.h>
#include<string.h>
void kiemTraSoNguyen() {
	float bien_1;
	printf("\n1.KIEM TRA SO NGUYEN\n");
	printf("Nhap vao 1 so bat ky: ");
	scanf_s("%f", &bien_1);
	if (bien_1 == (int)bien_1) {
		printf("KETQUA: So Nguyen");
	}
	else {
		printf("KETQUA: Khong phai So Nguyen");
	}
	int bien_2;
	printf("\n1.KIEM TRA SO NGUYEN TO\n");
	printf("Nhap so nguyen bat ky(>0): ");
	scanf_s("%d", &bien_2);
	int ketqua = 1;
	for (int i = 2; i < bien_2; i++)
	{
		if (bien_2%i==0) {
			ketqua = 0;
		}
	}
	if (ketqua == 1) {
		printf("KETQUA: So Nguyen To");
	}
	else {
		printf("KETQUA: Khong phai So Nguyen To");
	}
	int bien_3;
	printf("\n1.KIEM TRA SO CHINH PHUONG\n");
	printf("Nhap so nguyen bat ky(>0): ");
	scanf_s("%d", &bien_3);
	int count = 0;
	for (int i = 1; i < bien_3; i++)
	{
		if (pow(i, 2) == bien_3) {
			count = 1;
		}
	}
	if (count == 1) {
		printf("KETQUA: So Chinh Phuong");
	}
	else {
		printf("KETQUA: Khong phai So Chinh Phuong");
	}
}
void USCLN_BSCNN() {
	int gt1, gt2;
	int uscln = 1;
	printf("\nBAI TOAN TIM USCLN\n");
	printf("Nhap gia tri 1: ");
	scanf_s("%d", &gt1);
	printf("Nhap gia tri 2: ");
	scanf_s("%d", &gt2);
	if (gt1 == 0 || gt2 == 0) {
		uscln = gt1 + gt2;
	}
	else {
		while (gt1 != gt2) {
			if (gt1 > gt2) {
				gt1 -= gt2;
			}
			else {
				gt2 -= gt1;
			}
		}
		uscln = gt1;
	}
	printf("KETQUA: USCLN = %d\n", uscln);
	int gt1a, gt2a;
	printf("Nhap gia tri 1: ");
	scanf_s("%d", &gt1a);
	printf("Nhap gia tri 2: ");
	scanf_s("%d", &gt2a);
	int bscnn = 1;
	printf("\nBAI TOAN TIM BSCNN\n");
	if (gt1a % gt2a == 0) {
		bscnn = gt1a;
	}
	else if (gt2a % gt1a == 0) {
		bscnn = gt2a;
	}
	else {
		bscnn = gt1a * gt2a;
	}
	printf("KETQUA; BSCNN = %d\n", bscnn);
}
void tinhTienKaraoke() {
	int gioBatDau;
	int gioKetThuc;
	int giatien;
	do {
		printf("\nVui long nhap vao gio bat dau: ");
		scanf_s("%d", &gioBatDau);
		printf("\nVui long nhap vao gio ket thuc: ");
		scanf_s("%d", &gioKetThuc);
	} while (gioBatDau<0||gioKetThuc<0||gioBatDau>23||gioKetThuc>23);
	if (gioBatDau < 12) {
		printf("Quan dong cua!!!");
	}
	else {
		int thoiGian = gioKetThuc - gioBatDau;
		if (gioBatDau >= 14 && gioBatDau <= 17) {
			if (thoiGian <= 3) {
				giatien = (thoiGian * 150000)-(thoiGian*150000*0.1);
			}
			else {
				giatien = (450000 + ((thoiGian - 3) * 150000 * 0.3)) - (450000 + ((thoiGian - 3) * 150000 * 0.3)) * 0.1;
			}
		}
		else {
			if (thoiGian <= 3) {
				giatien = thoiGian * 150000;
			}
			else {
				giatien = 450000 + ((thoiGian - 3) * 150000 * 0.3);
			}
		}
	}
	printf("Gia tien = %d", giatien);
}
void tinhTienDien() {
	float sodien, tiendien;
	int bac1 = 1678, bac2 = 1734, bac3 = 2014, bac4 = 2536, bac5 = 2834, bac6 = 2927;
	do {
		printf("Nhap so dien trong thang: ");
		scanf_s("%f", &sodien);
	} while (sodien == 0);

	if (sodien <= 50) {
		tiendien = sodien * bac1;
	}
	else if (sodien <= 100) {
		tiendien = 50 * bac1 + (sodien - 50) * bac2;
	}
	else if (sodien <= 200) {
		tiendien = (50 * bac1) + (50 * bac2) + (sodien - 100) * bac3;
	}
	else if (sodien <= 300) {
		tiendien = (50 * bac1) + (50 * bac2) + (100 * bac3) + (sodien - 200) * bac4;
	}
	else if (sodien <= 400) {
		tiendien = (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) + (sodien - 300) * bac5;
	}
	else {
		tiendien = (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) + (100 * bac5) + (sodien - 400) * bac6;
	}
	printf("Tien dien la: %.1f VND", tiendien);
}
void doiTien() {
	printf("\nCHUC NANG DOI TIEN\n");
	int menhGia[9] = { 500,200,100,50,20,10,5,2,1 };
	int soTo[9] = { 0 };
	int tien;
	do {
		printf("Nhap so TIEN: ");
		scanf_s("%d", &tien);
	} while (tien <= 0);
	int i = 0;
	while (i < 9) {
		if (tien > menhGia[i]) {
			break;
		}
		i++;
	}
	while (tien > 0 || i <9) {
		soTo[i] = tien / menhGia[i];
		tien = tien % menhGia[i];
		i++;
	}
	for (int i = 0; i < 9; i++)
	{
		printf("Co %d to %d VND\n", soTo[i], menhGia[i]);
	}
}
void tinhLaiSuatNH() {
	printf("\nTINH LAI SUAT NGAN HANG\n");
	int tienvay;
	int gocPhaiTra;
	int lai[12];
	printf("Ban muon vay bao nhieu tien: ");
	scanf_s("%d", &tienvay);
	gocPhaiTra = tienvay / 12;
	printf("So tien phai tra\n");
	for (int i = 0; i < 12; i++)
	{
		lai[i] = gocPhaiTra + tienvay * 0.05;
		tienvay -= gocPhaiTra;
		printf("Thang %d : %d\n", i + 1,lai[i]);
	}
}
void vayTienMuaXe() {
	printf("\nXAY DUNG CHUONG TRINH VAY TIEN MUA XE\n");
	int phantramvay;
	do {
		printf("Nhap vao phan tram vay: ");
		scanf_s("%d", &phantramvay);
	} while (phantramvay <= 0);
	int tientralandau = 500000000 * (100 - phantramvay) / 100;
	printf("TRA TRUOC: %d\n", tientralandau);
	int tienVay = 500000000 - tientralandau;
	int gocPhaiTra = tienVay / 288;
	int gopHangThang = gocPhaiTra + tienVay * (0.072 / 12);
	printf("TRA HANG THANG: %d", gopHangThang);
}
struct sinhVien {
	char ten[50];
	float diem;
	char hocLuc[30];
}sv[100];
int n;
void nhapSinhVien(int *n) {
	printf("\nNHAP THONG TIN SINH VIEN\n");
	printf("So luong sinh vien: ");
	scanf_s("%d", n);
	int goloi;
	goloi = getchar();
	for (int i = 0; i < *n; i++)
	{
		printf("Ho va Ten: "); gets_s(sv[i].ten,50);
		printf("Diem     : "); scanf_s("%f", &sv[i].diem);
		int goloi; goloi = getchar();
	}
}
void sapXepThongTinSinhVien(int n) {
	for (int i = 0; i < n; i++)
	{
		if (sv[i].diem >= 9) {
			strcpy(sv[i].hocLuc, "Hoc luc xuat sac");
		}
		else if (sv[i].diem >= 8) {
			strcpy(sv[i].hocLuc, "Hoc luc gioi");
		}
		else if (sv[i].diem >= 6.5) {
			strcpy(sv[i].hocLuc, "Hoc luc kha");
		}
		else if (sv[i].diem >= 5) {
			strcpy(sv[i].hocLuc, "Hoc luc trung binh");
		}
		else if (sv[i].diem >= 0) {
			strcpy(sv[i].hocLuc, "Hoc luc yeu");
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (sv[i].diem < sv[j].diem) {
				struct sinhVien temp;
				temp = sv[i];
				sv[i] = sv[j];
				sv[j] = temp;
			}
		}
	}
	//Xuất Sinh Viên
	for (int i = 0; i < n; i++)
	{
		printf("\nHo va Ten: %s\n", sv[i].ten);
		printf("Diem     : %.2f\n", sv[i].diem);
		printf("Hoc Luc: %s\n", sv[i].hocLuc);
	}
}

//game
void FPOLYLOTT() {
	int somayman1, somayman2;
	int diemmayman[5];
	srand(time(0));
	printf("Nhap so may man (1-15)\n");
	do {
		printf("Luot 1: ");
		scanf_s("%d", &somayman1);
	} while (somayman1 <= 0 || somayman1 > 15);
	do {
		printf("Luot 2: ");
		scanf_s("%d", &somayman2);
	} while (somayman2 <= 0 || somayman2 > 15);
	printf("THONG TIN GIAI\n");

	for (int i = 0; i < 4; i++)
	{
		diemmayman[i] = rand() % 15 + 1;
		printf("%d ", diemmayman[i]);
	}
	int count = 0;
	for (int i = 0; i < 4; i++)
	{
		if (somayman1 == diemmayman[i]) {
			count = 1;
		}

	}
	for (int i = 0; i < 4; i++)
	{
		if (somayman2 == diemmayman[i]) {
			count = 2;
		}

	}
	if (count == 2) {
		printf("Chuc mung da trung giai nhat");
	}
	else if (count == 1) {
		printf("Chuc mung ban da trung giai nhi");
	}
	else {
		printf("Chuc ban may man lan sau");
	}
}

struct phanSo {
	int tuSo;
	int mauSo;
}ps1,ps2;
void nhapPhanSo(struct phanSo *ps) {
	printf("\nNHAP PHAN SO \n");
	printf("Nhap tu so: ");
	scanf_s("%d", &ps->tuSo);
	do {
		printf("Nhap mau so: ");
		scanf_s("%d", &ps->mauSo);
	} while (ps->mauSo == 0);
}
void rutgonphanso(struct phanSo *ps) {
	int uscln = 1;
	int a = abs(ps->tuSo);
	int b = abs(ps->mauSo);
	if (a == 0) {
		uscln = a;
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
void xuatPhanSo(struct phanSo ps) {
	rutgonphanso(&ps);
	if (ps.mauSo < 0) {
		ps.tuSo *= -1;
		ps.mauSo *= -1;
	}
	if (ps.mauSo == 1) {
		printf("%d", ps.tuSo);
	}
	else {
		printf("%d/%d", ps.tuSo, ps.mauSo);
	}
}
struct phanSo cong(struct phanSo ps1, struct phanSo ps2) {
	struct phanSo ketqua;
	ketqua.tuSo = ps1.tuSo * ps2.mauSo + ps1.mauSo * ps2.tuSo;
	ketqua.mauSo = ps1.mauSo * ps2.mauSo;
	return ketqua;
}
struct phanSo tru(struct phanSo ps1, struct phanSo ps2) {
	struct phanSo ketqua;
	ketqua.tuSo = ps1.tuSo * ps2.mauSo - ps1.mauSo * ps2.tuSo;
	ketqua.mauSo = ps1.mauSo * ps2.mauSo;
	return ketqua;
}
struct phanSo nhan(struct phanSo ps1, struct phanSo ps2) {
	struct phanSo ketqua;
	ketqua.tuSo = ps1.tuSo * ps2.tuSo;
	ketqua.mauSo = ps1.mauSo * ps2.mauSo;
	return ketqua;
}
struct phanSo chia(struct phanSo ps1, struct phanSo ps2) {
	struct phanSo ketqua;
	ketqua.tuSo = ps1.tuSo * ps2.mauSo;
	ketqua.mauSo = ps1.mauSo * ps2.tuSo;
	return ketqua;
}
int main() {
	int goloi;
	int menu;
	do {
		printf("\n++===================MENU===================++\n");
		printf("++1.Kiem tra so nguyen                      ++\n");
		printf("++2.Tim USCLN va BSCNN cua 2 so             ++\n");
		printf("++3.Chuong trinh tinh tien cho quan karaoke ++\n");
		printf("++4.Tinh tien dien                          ++\n");
		printf("++5.Chuc nang doi tien                      ++\n");
		printf("++6.Tinh lai suat vay ngan hang             ++\n");
		printf("++7.Chuong trinh vay tien mua xe            ++\n");
		printf("++8.Sap xep thong tin sinh vien             ++\n");
		printf("++9.Xay dung game FPOLY-LOTT                ++\n");
		printf("++10.Chuong trinh tinh toan phan so         ++\n");
		printf("++0.Thoat                                   ++\n");
		printf("++==========================================++\n");
		printf("Vui long nhap: ");
		scanf_s("%d", &menu); goloi = getchar();
		switch (menu)
		{
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			USCLN_BSCNN();
			break;
		case 3:
			tinhTienKaraoke();
			break;
		case 4:
			tinhTienDien();
			break;
		case 5:
			doiTien();
			break;
		case 6:
			tinhLaiSuatNH();
			break;
		case 7:
			vayTienMuaXe();
			break;
		case 8:
			nhapSinhVien(&n);
			sapXepThongTinSinhVien(n);
			break;
		case 9:
			FPOLYLOTT();
			break;
		case 10:
			nhapPhanSo(&ps1);
			nhapPhanSo(&ps2);
			printf("Phan so 1: ");
			xuatPhanSo(ps1);
			printf("\nPhan so 2: ");
			xuatPhanSo(ps2);
			printf("\n");
			printf("PHEP TINH PHAN SO\n");
			xuatPhanSo(ps1); printf(" + "); xuatPhanSo(ps2); printf(" = "); xuatPhanSo(cong(ps1, ps2)); printf("\n");
			xuatPhanSo(ps1); printf(" - "); xuatPhanSo(ps2); printf(" = "); xuatPhanSo(tru(ps1, ps2)); printf("\n");
			xuatPhanSo(ps1); printf(" * "); xuatPhanSo(ps2); printf(" = "); xuatPhanSo(nhan(ps1, ps2)); printf("\n");
			xuatPhanSo(ps1); printf(" / "); xuatPhanSo(ps2); printf(" = "); xuatPhanSo(chia(ps1, ps2)); printf("\n");
			break;
		default:
			break;
		}
	} while (menu != 0);
}