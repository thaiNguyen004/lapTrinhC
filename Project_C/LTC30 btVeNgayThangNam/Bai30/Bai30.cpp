/*
Tìm số ngày trong tháng, ngày kế tiếp, ngày trước đó, ngày thứ bao nhiêu
*/

/*Viết chương trình lập trình C nhập ngày tháng năm
 a, Hãy cho biết tháng đó có bao nhiêu ngày
 b, Tính xem ngày đó là ngày thứ bao nhiêu trong năm
 c, Tính ngày trước ngày vừa nhập (ngày, tháng, năm)
 d,Tìm ngày kế ngày vừa nhập (ngày, tháng, năm)

*/

#include<stdio.h>




int ngaytrongthang(int thang, int nam) {
	switch (thang) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		return(nam%400==0||nam%4==0&&nam%100!=0) ? 29 : 28;
	default:
		return -1;
	}

}


int ngaytrongnam(int ngay, int thang, int nam) {
	int songay = 0;
	for (int i = 1; i < thang; i++) {
		songay += ngaytrongthang(i, nam);
	}
	songay += ngay;
	return songay;
}


void inNgaytruocdo(int ngay, int thang, int nam) {
	if (ngay == 1) {
		if (thang == 1) {
			ngay = 31;
			thang = 12;
			nam--;
		}
		else {
			thang--;
			ngay = ngaytrongthang(thang, nam);
		}
	}
	else {
		ngay--;
	}
	printf("Ngay truoc do: %d/%d/%d\n", ngay, thang, nam);
}

void inNgaykedo(int ngay, int thang, int nam) {
	int ntc = ngaytrongthang(thang, nam);
	if (ngay = ntc) {
		if (thang == 12) {
			ngay = 1;
			thang = 1;
			nam++;
		}
		else {
			ngay = 1;
			thang++;
		}
	}
	else {
		ngay++;
	}
	printf("Ngay ke do la: %d/%d/%d", ngay, thang, nam);
}
int main() {
	int ngay, thang, nam;
	printf("Tinh so ngay trong thang\n");
	do {
		printf("Nhap vao ngay, thang, nam :");
		scanf("%d%d%d", &ngay, &thang, &nam);
	} while (ngay < 1 && ngay>31 || thang < 1 && thang>12 || nam < 1);

	printf("So ngay la:%d\n", ngaytrongthang(thang, nam));


	printf("Tinh so ngay tu thang 1 den bay gio\n");
	printf("So ngay la:%d\n",ngaytrongnam(ngay,thang, nam));


	//c
	inNgaytruocdo(ngay, thang, nam);


	//d

	inNgaykedo(ngay, thang, nam);
}
