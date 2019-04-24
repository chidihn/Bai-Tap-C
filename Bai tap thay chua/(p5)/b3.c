#include <stdio.h>
#include <math.h>
int main(){
	int n;
	double s = 0, h =1;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		h = h * 1.0 / i;
		s += h;
	}
	printf("S = %g", s);
}