//Nhập vào 1 mảng n+1 số thực là các hệ số của 1 đa thức bậc n.
// Nhập x và tính giá tri của đa thức.
#include <stdio.h>
#include<math.h>
int main()
{
    int n,x;
    int a[10];
    int i,k;
    int h = 0;
    int t = 0;
    //Nhap mang
    printf("Nhap vao da thuc bac n: ");
    scanf("%d", &n);
    printf("Nhap vao x: ");
    scanf("%d", &x);
    for (i = 0; i <= n; i++)
    {
        printf("x^%d =", i );
        scanf("%d", &a[i]);
        t= a[i]*pow(x,i);
        h += t;
    }
     printf("gia tri cua da thuc bac n la %d",h);
    
}    