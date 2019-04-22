// Sắp xếp tăng dần mảng đã nhập và in ra mảng đã sắp. Nhập tiếp một số thực x và chèn số thực vào mảng đã sắp đề được một mảng sắp tăng dần.
#include <stdio.h>

int a[100];
int b[100];
int n, x;
void nhap()
{
    printf("\nNhap n = ");
    scanf("%d", &n);
    printf("\nNhap x = ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        printf("\na[%d] = ", i + 1);
        scanf("%d", &a[i]);
    }
}
void xuatmang()
{
    for (int i = 0; i <= n; i++)
    {
        printf("%d ||", a[i]);
    }
}
void sapxep()
{

    //find the position
    int k = 0;
    for (int i = 0; i < n - 1; i++)
        if (x < a[i])
        {
            k = i;
            break;
        }
    //insert
    for (int i = n; i >= k; i--)
        a[i] = a[i - 1];
    a[k] = x;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {

                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n mang sap xep tang la: ");
}

int main()
{
    nhap();
    sapxep();
    xuatmang();
    return 0;
}
