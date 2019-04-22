// app banking
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int sotaikhoan;
    float nhapsodu, tongchiphi, tongsotindung, gioihan, sodutaikhoan;
    while (true)
    {
        printf("Nhập vào số tài khoản ( -1 to end ): ");
        scanf("%d", &sotaikhoan);
        if (sotaikhoan == -1)
        {
            return 0;
        }
        printf("Nhập vào số dư: ");
        scanf("%f", &nhapsodu);
        printf("Nhập vào tổng chi phí: ");
        scanf("%f", &tongchiphi);
        printf("Nhập vào tổng số tín dụng: ");
        scanf("%f", &tongsotindung);
        printf("Nhập vào giới hạn được nợ: ");
        scanf("%f", &gioihan);
        sodutaikhoan = nhapsodu + tongchiphi - tongsotindung;
        if (sodutaikhoan > gioihan)
        {
            printf("Tài khoản:\t%d\n", sotaikhoan);
            printf("Giới hạn:\t%.2f\n", gioihan);
            printf("Số dư tài khoản:\t%.2f\n", sodutaikhoan);
            printf("Quá giới hạn.\n");
        }
    }
    return 0;
}
