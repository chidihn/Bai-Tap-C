// Tong tich va TBC cua 3 so, tim so lon nhat
#include <stdio.h>
int main(void)
{
    int a1, a2, a3, max;
    printf("nhap so thu nhat: \n");
    scanf("%d", &a1);
    printf("nhap so thu hai: \n");
    scanf("%d", &a2);
    printf("nhap so thu ba: \n");
    scanf("%d", &a3);
    printf("tong cua no la: %d \n", a1 + a2 + a3);
    printf("tich cua no la: %d \n", a1 * a2 * a3);
    printf("trung binh cong cua no la: %d \n", (a1 + a2 + a3) / 3);
    max = a1;
    if (a2 > a1)
        max = a2;
    if (a3 > max)
        max = a3;
    printf("\nSo lon nhat la %d", max);
}
