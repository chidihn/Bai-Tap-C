// Nhan mang a[] voi n
#include <stdio.h>
#define SIZE 7
int main() {
	float a[SIZE] = { 1, 3, 4, 6, 8, 10 };
	int n = 6;
	int x;
	printf("Enter  x= "); scanf("%d", &x);
	//insert k into a
	if (x >= a[n - 1])
		//insert to the last of a
		a[n] = x;
	else
	{
		//find the position
		int k = 0;
		for (int i = 0; i < n - 1; i++)
			if (x < a[i])
			{
				k = i;
				break;
			}
		//insert
		for (int i = n; i >= k; i--)
			a[i] = a[i - 1];
		a[k] = x;
	}

	printf("\array\n");
	for (int i = 0; i <= n; i++)
		printf("%6.2f", a[i]);
}