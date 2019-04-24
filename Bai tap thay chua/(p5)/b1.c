// Chuyen so ve dang nhi phan
#include <stdio.h>
void to_binary(int);
int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);
	to_binary(n);
}
void to_binary(int n)
{
	if (n == 0)
	{
		return;
	}
	else
	{
		to_binary(n / 2);
		printf("%d", n % 2);
	}
}