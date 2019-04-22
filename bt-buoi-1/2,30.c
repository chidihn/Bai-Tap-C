// Nhap vao 5 so va tach cac chu so do
#include <stdio.h>
int main()
{
    int number, a, b, c, d, e, f;
    printf("nhap vao so co 5 chu so: \n");
    scanf("%d", &number);
    a = number;
    b = a / 10000;
    c = a / 1000 % 10;
    d = a / 100 % 10;
    e = a / 10 % 10;
    f = a % 10;
    printf("%d %d %d %d %d\n", b, c, d, e, f);
    return 0;
}
