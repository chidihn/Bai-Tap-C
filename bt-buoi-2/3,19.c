// phan mem tinh lai suat
#include <stdio.h>
#include <stdbool.h>
int main()
{
    float vay, lai, ngay;
    while (true)
    {
        printf("Nhap vao so tien vay( -1 to end ): ");
        scanf("%f", &vay);
        if (vay == -1)
        {
            return 0;
        }
        printf("Nhap vao phan tram lai : ");
        scanf("%f", &lai);
        printf("nhap vao so ngay vay ");
        scanf("%f", &ngay);

        printf("so tien lai phai tra %.2f\n", vay * lai * ngay / 365);
    }
    return 0;
}
