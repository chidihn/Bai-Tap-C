//Tinh tong hieu tich thuong cua 2 so
#include <stdio.h>
int main()
{
    int x, y, sum, product, difference, quotient, remainder;
    printf("Nhap vao hai so\n");
    scanf("%d%d", &x, &y);
    sum = x + y;
    printf("tong cua %d va %d la %d.\n", x, y, sum);
    product = x * y;
    printf("tich la %d.\n", product);
    difference = x - y;
    printf("hieu cua %d va %d la %d.\n", x, y, difference);
    quotient = x / y;
    printf("phan du cua 2 so la %d.\n", quotient);
    remainder = x % y;
    printf("The remainder of %d and %d is %d.\n", x, y, remainder);

    return 0;
}
