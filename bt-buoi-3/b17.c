//Viết chương trình tính tổng s = 1(1!) + 2(2!) + 3(3!) + … + n(n!)
//với n là số nguyên dương nhập từ bàn phím.
#include<stdio.h>   

int main(){  
  int i,giaithua=1,n;  
  
  printf("Nhap mot so bat ky: ");  
  scanf("%d",&n);  
  int tong = 0;
  for(i=1;i<=n;i++){

      giaithua=giaithua*i; 
      tong = tong + i*giaithua;
      
  }  
    printf("tong cua so do la:%d ",tong);
  
} 