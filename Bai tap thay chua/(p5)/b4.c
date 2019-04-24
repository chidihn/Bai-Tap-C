#include <stdio.h>
#include <math.h>
int main(){
	float s = 1, h =1, x;
	printf("Nhap x: ");
	scanf("%f", &x);

	for (int i = 1; ; i++) {
		h = h * x / i;
		s += h;
		if (h <= 0.00000001)
			break;
	}
	printf("S = %f", s);
}