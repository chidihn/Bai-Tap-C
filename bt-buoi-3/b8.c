//Viết chương trình in ra các số hoàn hảo từ 1 đến n với n là số nguyên dương nhập từ bàn phím. 
#include <stdio.h>
#include<math.h>
int main() {
  int  n ;
  printf( "nhap so: " );
  scanf( "%d", &n );
  int i ; 
  int tong = 0;
  
    for ( i = 2; i< n || i == pow(2,n)-1;i++){
		tong = pow (2,i-1)*(pow(2,i)-1);
        
        if(tong < n){
            if (tong >0) {
                
            printf(" %d ||",tong);
            }
            
    }
	}
  return 0;
}

