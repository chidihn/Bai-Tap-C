// so sanh 2 so
#include <stdio.h>
int main(void)
{
    int a1, a2;
    int sosanh;
    printf("nhap so thu nhat: \n");
    scanf("%d", &a1);
    printf("nhap so thu hai: \n");
    scanf("%d", &a2);
    if (a1 > a2)
    {
        printf(" so thu nhat lon hon");
    }
    if (a1 < a2)
    {
        printf(" so thu 2 lon hon so thu nhat");
    }
    else
    {
        printf(" 2 so bang nhau");
    }
}
