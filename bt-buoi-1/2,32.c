// nhap so can nang chieu cao =>> chi so bmi
#include <stdio.h>
int main()
{
    int weightInPounds, heightInInches, BMI, height, weight;
    printf("nhap vao so can nang cua ban(pound): \n");
    scanf("%d", &weightInPounds);
    printf("nhap vao so chieu cao cua ban (inch): \n");
    scanf("%d", &heightInInches);
    weight = weightInPounds * 703;
    height = heightInInches * heightInInches;
    BMI = weight / height;
    printf("chi so BMI la: %d\n", BMI);
    printf("BMI Values\n");
    printf("Underweight:\t it hon 18.5\n");
    printf("Normal:\t\t giua 18.5 va 24.9\n");
    printf("Overweight:\tgiua 25 va 29.9\n");
    printf("Obese:\t\t30 hoac tot hon\n");
    return 0;
}
