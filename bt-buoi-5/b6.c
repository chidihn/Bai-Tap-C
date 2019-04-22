//kiem tra day don dieu tang    
#include <stdio.h>
int main()
{
    int n;
    int a[10];
    int i,k;

    //Nhap mang
    printf("Nhap so phan tu:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("a[%d] =", i + 1);
        scanf("%d", &a[i]);
    }
    //in mang
    for (i = 0; i < n; i++)
    {
        printf("mang do la: ");
        printf("%d", a[i]);
        printf("=======================");
        if (a[i] >= a[i+1]) {
             k ==0;
             break;
        }
    }
    if (k == 0) {
        printf("no khong la day don dieu tang");
    }
    else
    {
        printf("no la day don dieu tang");
    }
    
    
}