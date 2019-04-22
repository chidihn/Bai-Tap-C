//Viết chương trình tính tổng s = 1 + 2 + 3 + … + n, với n nguyên dương được nhập vào từ bàn phím.
#include<stdio.h>
int main(){
	int n;
	printf("Ban hay nhap gia tri cho n : \n");
	scanf("%d",&n);
	int i;
    int tong;
	for ( i = 1; i<= n; i++){
		tong = tong + i;
	}
	printf("ket qua la %d",tong);
	return 0;
}
