// Kiem tra so nguyen to
#include <stdio.h>
#include <math.h>
int is_prime(int);
int main(){
	for (int i = 1; i <= 1000; i++)
		if (is_prime(i))
			printf("%5d", i);
}
int is_prime(int n)
{
	if ((n == 0) || (n == 1)) 
		return 0;
	int i = 2;
	while ((n % i != 0) && (i <= sqrt(n))) i++;
	if (i <= sqrt(n))
		return 0;
	else
		return 1;
}
