// cộng vào 2 xâu
#include <stdio.h>
#include <string.h>
int main() {
	char n1[1000], n2[1000];
	printf("\n Nhap xau so n1 = "); gets(n1);
	printf("\n Nhap xau so n2 = "); gets(n2);
	if (strlen(n1) < strlen(n2))
	{
		char n[1000];
		strcpy(n, n1);
		strcpy(n1, n2);
		strcpy(n2, n);
	}
	//them so '0' vao truoc n2
	char n3[1000];
	strcpy(n3, n1);
	int k = 0;
	for (int i = 0; i < strlen(n1); i++)
		if (i < strlen(n1) - strlen(n2))
			n3[i] = '0';
		else
			n3[i] = n2[k++];

	printf("\n n1= %s", n1);
	printf("\n n2= %s", n3);

	//thuc hien phep +
	int nho = 0;
	char n[1000];
	k = strlen(n1);
	for (int i = k-1; i>=0; i--)
	{
		int x = (n1[i] - 48) + (n3[i] - 48) + nho;
		nho = x / 10;
		x = x % 10;
		n[i] = x + 48;
	}
	if (nho > 0)
	{
		for (int i = k; i > 0; i--)
			n[i] = n[i - 1];
		n[0] = nho + 48;
		n[k + 1] = '\0';
	}
	else
		n[k] = '\0';
	printf("\n n = %s", n);
}