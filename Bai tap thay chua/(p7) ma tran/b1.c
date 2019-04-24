#include <stdio.h>
#define SIZE 50
int main() {
	float a[SIZE][SIZE];
	int n,m;
	printf("Enter the number of rows:");
	scanf("%d", &n);
	printf("Enter the number of columns:");
	scanf("%d", &m);

	//Nhap ma tran
	for (int i = 0; i<n; i++)
		for (int j = 0; j < m; j++)
		{
			printf("a[%d][%d] = ", i, j);
			scanf("%f", &a[i][j]);
		}
	//In ma tran
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j < m; j++)
			printf("%6.2f", a[i][j]);
		printf("\n");
	}
    //Tim min max cua ma tran va tinh tb cac row cua no
	float min = a[0][0];
	float max = a[0][0];
	for (int i = 0; i < n; i++)
	{
		float row_avg = 0;
		for (int j = 0; j < m; j++)
		{
			if (min > a[i][j]) min = a[i][j];
			if (max < a[i][j]) max = a[i][j];
			row_avg = row_avg + a[i][j];
		}
		printf("\n Average of row %d = %6.2f", i, row_avg / n);
	}
	printf("\n min = %6.2f, max = %6.2f", min, max);
}
