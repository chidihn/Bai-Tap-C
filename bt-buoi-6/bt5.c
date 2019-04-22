#include <stdio.h>
#include <string.h>
void main() {
	int n;
	char b[] = "0000 0000";
	printf("\n Nhap n = "); scanf("%d", &n);
	int i = 8;
	while (n != 0)
	{
		int d = n % 2;
		if (i != 4){
			b[i] = 48 + d;
		}
		i--;
		n = n / 2;
	}
	printf("\n n = %s",  b);
	
}
