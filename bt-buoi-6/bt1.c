#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],m[100];
	printf("Moi ban nhap vao chuoi ky tu:");
	fflush(stdin);
	gets(a);
	int n=strlen(a)-1;
	int c=0,b=n;
	while(a[c]==' ')	c++;
	while(a[b]==' ') 	b--;
	for(int i=c;i<=b;i++)
	{
		while(a[i]==' '&&a[i+1]==' ')
		{
			for(int j=i;j<=b;j++)
			{
				a[j]=a[j+1];
			}
			b--;
		}
	}
	printf("\nXau sau khi loai bo cach trong la: ");
	for(int i=c;i<=b;i++)
					printf("%c",a[i]);
					
	//ky tu xuat hien trong xau
	
	printf("\nKTXH[]=\"");
	for(int i=c;i<=b;i++)
	{
		if(a[i]!=' ')
		{
			int t=0;
			for(int k=c;k<i;k++)
				if(a[i]==a[k])
				t++;
			if(t==0)
			printf("%c ",a[i]);
		}
	}
	printf("\" \n");
//hien thi so lan xuat hien
	printf("SLXH[]= ");

	for(int i=c;i<=b;i++)
	{
		int t=0;
		int dem=0;
		if(a[i]!=' ')
			{
				for(int k=0;k<=i-1;k++)
				if(a[i]==a[k])
				t++;
				if(t==0)
				{ 
					for(int j=0;j<=n;j++)
					{
						if(a[i]==a[j])
						dem++;
	
					}
					printf("%d ",dem);
				}
			}
	}
	printf("\n");
	
	printf("\nMoi ban nhap chuoi can ktra vao:  ");
	fflush(stdin);
	gets(m);
	char *k;
	k=strstr(a,m);
	if(k!=NULL)
				printf("Chuoi vua nhap la chuoi con!");
	else
				printf("Chuoi vua nhap khong la chuoi con!");
	return 0;
}
