// đếm số  lần xuất hiện trong một mảng
#include <stdio.h>
#define SIZE 10 
int main() {
	int a[SIZE] = { 1, 3, 1, 2, 3, 10000, 2, 3, 4, 10000 };
	int b[SIZE] = { 0 };
	int c[SIZE];
	for (int i = 0; i < SIZE; i++) 
		c[i] = 1;

	for (int i = 0; i < SIZE; i++)
		for (int j = i + 1; j < SIZE; j++)
			if ((a[i] == a[j]) && (b[j] != -1))
			{
				c[i] ++;
				b[j] = -1;
			}
	/* display results */
	printf("%s%17s\n", "Element", "Frequency");

	/* output the frequencies in a tabular format */
	for (int i = 0; i < SIZE;  i++) 
		if (b[i] == 0)
	 	  printf("%6d%17d\n", a[i], c[i]);
	
}