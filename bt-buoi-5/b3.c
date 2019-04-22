// kiem tra tinh doi xung
#include <stdio.h>
int main() {
	int n,i,j;
	int check =1 ;
	int a[10];

	//Nhap mang
	printf("Nhap so phan tu:");
	scanf("%d", &n);
	for ( i = 0; i < n/2; i++){
        for(j=0; j<n; j++){
            if ( a[i] != a[n-j-1]){
                check ==0;
		        break;
            }
        }
    }		    
    if (check){
        printf("mang doi  xung");
    }else{
        printf("mang khong doi xung");
    }
}
