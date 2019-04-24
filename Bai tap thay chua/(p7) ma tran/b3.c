//Tinh tich 2 ma tran
#include <stdio.h>
#define SIZE 50
void addArray(char ch,float A[][SIZE], int n, int m);
void printArray(char ch,float A[][SIZE], int n, int m);
void multiArrays(float A[][SIZE], float B[][SIZE], float C[][SIZE], int n, int m, int k);
int main() {
	float A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
	int n, m,k;
	printf("Enter the number of rows of A:"); scanf("%d", &n);
	printf("Enter the number of columns of A:"); scanf("%d", &k);
	printf("Enter the number of columns of B:"); scanf("%d", &m);

	addArray('A',A, n, k);
	addArray('B',B, k, m);
	multiArrays(A, B, C, n, m, k);
	printArray('A',A, n, k);
	printArray('B',B, k, m);
	printArray('C',C, n, m);
}
//
void addArray(char ch,float A[][SIZE], int n, int m)
{
	printf("\n Enter the matrix %c\n", ch);
	for (int i = 0; i<n; i++)
		for (int j = 0; j < m; j++)
		{
			printf("%c[%d][%d] = ",ch,i, j);
			scanf("%f", &A[i][j]);
		}
}
void printArray(char ch,float A[][SIZE], int n, int m)
{
	printf("\n Matrix %c \n",ch);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			printf("%6.2f",A[i][j]);
		printf("\n");
	}
}
void multiArrays(float A[][SIZE], float B[][SIZE], float C[][SIZE], int n, int m, int k)
{
	for (int i = 0; i <n; i++)
		for (int j = 0; j < m; j++)
		{
			C[i][j] = 0;
			for (int t = 0; t < k; t++)
				C[i][j] = C[i][j] + A[i][t] * B[t][j];
		}
}
