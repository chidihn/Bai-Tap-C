//Viết chương trình tính tổng s = 12 + 22 + ... + n2, với n nguyên dương được nhập vào từ bàn phím.
#include <stdio.h>
int main()
{
    int n, j = 0;
    float i = 1.0;
    double pi = 0.0;
    printf("%s", "Nhap n(n>0)= ");
    scanf("%d",&n);
    if ( n <= 0) return 0;
    while( j <= n) {
        pi = pi + i/(2*j+1);
        i *= -1;
        j++;
    }
    printf("So PI = %f\n", pi*4);
    return 0;
}