#include <stdio.h>

int a[100];
int n, x,k;
void nhap()
{
    printf("\nNhap n = ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }
}

void sapxep()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {       
                for (k = i; k < n; k++) 
				{
					a[k] = a[k + 1];
					n--;
					i--;
				}
            }
        }  
    }

    printf("\n mang sap xep tang la: ");
}
void xuatmang()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ||", a[i]);
    }
}

int main()
{
    nhap();
    xuatmang();
    return 0;
}
