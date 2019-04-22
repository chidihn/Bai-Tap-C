//Tính và in ra số lượng các phần tử dương, số lượng các phần tử âm có trong mảng.
#include <stdio.h>
int main()
{
    int n;
    int a[10];
    int i, sd, sa;

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
        printf("%d", a[i]);
        if (a[i] > 0)
        {
            ++sd;
        }
        else
        {
            ++sa;
        }
    }

    printf("so phan tu duong trong mang la: %d", sd);
    printf("so phan tu a, trong mang la: %d", sa);
}