#include <stdio.h>
#include <math.h>
int main(){
	float s = 1, h =1, x;
	printf("Nhap x: ");
	scanf("%f", &x);
	int i = 1;
	while (h > 0.00000001)
	{
		h = h * x / i;
		s += h;
		i++;
	}
	printf("i = %d,s = %f", i,s);
}