// xac nhan xem so do co phai boi so hay ko 
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("nhap vao hai so: \n");
    scanf("%d%d", &num1, &num2);
    if (num2 % num1 == 0)
    {
        printf("%d la boi so cua %d\n", num2, num1);
    }
    else
    {
        printf("%d khong la boi su cua %d\n", num2, num1);
    }
    return 0;
}
