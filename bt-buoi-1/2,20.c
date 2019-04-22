// Nhap vao ban kinh, tinh cac thong so cua hinh tron
#include <stdio.h>
int main(void)
{
    float r;
    printf("nhap vao ban kinh:");
    scanf("%f", &r);
    printf("duong kinh cua hinh tronla: %f \n", r * 2);
    printf(" chu vi hinh tron la: %f \n", 2 * 3.1416 * r);
    printf("dien tich hinh tron la: %f \n", 3.1416 * r * r);
}
