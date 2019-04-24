// Sắp xếp lại mảng
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 500000 
int main() {
	int a[SIZE] = { 1, 3, 1, 2, 3, 10000, 2, 3, 4, 10000 };
	// unsigned char a[SIZE];
	//generate random numbers for testing algorithm
	srand(time(NULL));
	for ( int i = 0; i < SIZE; i++)
	{
		unsigned char r = 1 + rand() % 100;
		a[i] = r;
	}
	printf("Bat dau sap xep...\n");

	for ( int i = 0; i < SIZE-1; i++)
		for ( int j = i + 1; j < SIZE; j++)
			if (a[i] > a[j]) 
			{
				unsigned char x = a[i];
				a[i] = a[j];
				a[j] = x;
			}

	printf("\n Sap xep xong\n");
	// outputs array
	//for (int i = 0; i < SIZE;  i++) 
	//	printf("%6d", a[i]);

}
