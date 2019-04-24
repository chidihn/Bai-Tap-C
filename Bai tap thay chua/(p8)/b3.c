// tinh diem hoc ki cho sinh vien
#include <stdio.h>
#include <string.h>
struct sinhvien {
	int msv;
	char hoten[30];
	char ns[11];
	float dcc, dgk, dt, dtb;
};
sinhvien sv[30];

int main() {
	int n;
	//nhap
	printf("\n Nhap n = "); scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		printf("\n Nhap sinh vien thu %d", i);
		fflush(stdin);
		printf("\n Ma sinh vien:"); scanf("%d",&sv[i].msv);
		fflush(stdin);
		printf("\n Ho va ten:"); gets(sv[i].hoten);
		fflush(stdin);
		printf("\n Ngay sinh:"); gets(sv[i].ns);
		fflush(stdin);
		printf("\n Diem chuyen can:"); scanf("%f", &sv[i].dcc);
		printf("\n Diem giua ky:"); scanf("%f", &sv[i].dgk);
		printf("\n Diem thi:"); scanf("%f", &sv[i].dt);
		sv[i].dtb = (sv[i].dcc * 2 + sv[i].dgk * 3 + sv[i].dt * 5) / 10;
	}
	//in ra danh sach

	for (int i = 0; i < n; i++)
	{
		printf("\n Sinh vien thu %d", i);
		printf("\n Ma sinh vien: %d",sv[i].msv);
		printf("\n Ho va ten:"); puts(sv[i].hoten);
		printf("\n Ngay sinh:"); puts(sv[i].ns);
		printf("\n Diem chuyen can:%6.2f",sv[i].dcc);
		printf("\n Diem giua ky:%6.2f",sv[i].dgk);
		printf("\n Diem thi:%6.2f",sv[i].dt);
		printf("\n Dem TBC: %6.2f", sv[i].dtb);
	}
	_getch();
}
