// In nguoc mang
#include <stdio.h>
int main() {
	int n;
	int a[5];
	//Nhap mang
	printf("Nhap so phan tu:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] =",i);
		scanf("%d", &a[i]);
	}
	//in mang
	for (int i = 0; i < n; i++)
		printf("%5d", a[i]);
	//In nguoc
	printf("\n in nguoc\n");
	for (int i =n-1; i >=0; i--)
		printf("%5d", a[i]);
}
