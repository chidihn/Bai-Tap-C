// chuyen dang string ve dang viet hoa va dau cach
#include <stdio.h>
#include <string.h>
int main() {
	char st[255],st1[255];
	printf("Enter a string:"); gets(st);
	
	int j = 0, first_space = 1;
	for (int i = 0; i < strlen(st); i++)
	{
		if (st[i] != ' ')
		{
			if ((i >= 1) && (st[i - 1] == ' ') && (first_space == 0)) st1[j++] = ' ';
			if (first_space == 1)
			{
				st1[j++] = st[i];
				first_space = 0;
			}
			else
			st1[j++] = st[i];
		}
	}
	//end of the string
	st1[j] = '\0';
	//Chuyen chu hoa
	if (st1[0] >= 97) st1[0] = st1[0] - 32;
	for (int i = 1; i < strlen(st1)-1; i++)
	{
		if ((st1[i] == ' ') && (st1[i + 1] != 32))
			if (st1[i + 1] >= 97) st1[i + 1] = st1[i + 1] - 32;
	}
	printf("\n The normalized string is:"); puts(st1);
}