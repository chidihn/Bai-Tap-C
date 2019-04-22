#include <stdio.h>
#include <string.h>
struct phanso{
	int ts;
	int ms;
};
void nhap(phanso p[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("\n Nhap phan so thu %d", i);
		printf("\n Tu so:"); scanf_s("%d", &p[i].ts);
		printf("\n Mau so:"); scanf_s("%d", &p[i].ms);
		if (p[i].ms < 0)
		{
			p[i].ts = -p[i].ts;
			p[i].ms = -p[i].ms;
		}
	}
}
void inps(phanso p[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%5d/%d", p[i].ts, p[i].ms);
}
phanso cong(phanso a, phanso b)
{
	phanso c;
	c.ts = a.ts*b.ms + a.ms*b.ts;
	c.ms = a.ms*b.ms;
	return c;
}
phanso tong(phanso p[], int n)
{
	phanso s = p[0];
	for (int i = 1; i < n; i++)
		s = cong(s, p[i]);
	return s;
}
void sapxep(phanso p[], int n)
{
	for (int i = 0; i<n-1; i++)
		for (int j = i+1; j<n; j++)
			if (p[i].ts*p[j].ms > p[i].ms*p[j].ts)
			{
				phanso t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
}
phanso ps_max(phanso p[], int n)
{
	phanso m = p[0];
	for (int i = 1; i < n; i++)
		if (m.ts*p[i].ms < m.ms *p[i].ts)
			m = p[i];
	return m;
}
void main() {
	phanso p[100];
	int n;
	printf("\n Nhap n = "); scanf_s("%d", &n);
	nhap(p, n);
	printf("\n Mang da nhap:");
	inps(p, n);
	phanso s = tong(p, n);
	printf("\n Tong = %d/%d",s.ts,s.ms);

	phanso m = ps_max(p, n);
	printf("\n Phan so lon nhat = %d/%d", m.ts, m.ms);

	sapxep(p, n);
	printf("\n Mang da sap xep:");
	inps(p, n);

	
}


