// in mảng theo thứ tự đảo ngược.
#include <stdio.h>
int main() {
	int n;
	int a[5];
	int i;
	//Nhap mang
	printf("Nhap so phan tu:");
	scanf("%d", &n);
	for ( i = 0; i < n; i++)
	{
		printf("a[%d] =",i);
		scanf("%d", &a[i]);
	}
	//in mang
	for (i = 0; i < n; i++)
		printf("%d", a[i]);
	//In nguoc
	printf("\n in nguoc\n");
	for (i =n-1; i >=0; i--)
		printf("%d", a[i]);
}
