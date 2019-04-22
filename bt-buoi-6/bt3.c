#include <stdio.h>
#include <string.h>
//check a char 'ch' in string s
int check(char ch, char s[])
{
	for (int i = 0; i < strlen(s); i++)
		if (ch == s[i]){
			return 1;
		}
	return 0;
}
int countWords(char st[],char s[])
{
	int i = 0, n = strlen(st), d = 0;
	while (i < n)
	{
		while ((check(st[i], s) == 1) && (i<n)) i++;
		while ((check(st[i], s) == 0) && (i < n)) i++;
		d = d + 1;
	}
	return d;
}
void main() {
	char s[] = { '.',',','!',' ','-','+','*'};
	char st[255];
	printf("Enter a string:"); gets(st);
	printf("The number of words are %d", countWords(st, s));

}

