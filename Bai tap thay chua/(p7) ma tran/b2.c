// Tinh tong 2 ma tran
#include <stdio.h>
#define SIZE 50
void addArray(char ch,float A[][SIZE], int n, int m);
void printArray(char ch,float A[][SIZE], int n, int m);
void sumArrays(float A[][SIZE], float B[][SIZE],float C[][SIZE], int n, int m);
int main() {
	float A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];
	int n, m;
	printf("Enter the number of rows:"); scanf("%d", &n);
	printf("Enter the number of columns:"); scanf("%d", &m);
	addArray('A',A, n, m);
	addArray('B',B, n, m);
	sumArrays(A, B, C, n, m);
	printArray('A',A, n, m);
	printArray('B',B, n, m);
	printArray('C',C, n, m);
}
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
void sumArrays(float A[][SIZE], float B[][SIZE], float C[][SIZE], int n, int m)
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			C[i][j] = A[i][j] + B[i][j];

}
