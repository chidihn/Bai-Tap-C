//Viết chương trình in ra các số nguyên tố từ 1 đến n với n nhập từ bàn phím.
#include <stdio.h>
#include<math.h>
int main() {
  int  n ;
  printf( "nhap so: " );
  scanf( "%d", &n );
  int i ; 
  int tong;
  
  
    for ( i = 1; i< n;i++){
		tong = pow(2,i)-1;
        if(tong < n){
            
                
            printf(" %d ||",tong);
           
            
    }
	}
  return 0;
}

