//Viết chương trình tính tổng s = 1 + 1/2! + 1/3! + … + 1/n!, n nguyên dương nhập vào từ bàn phím.
#include<stdio.h>   
int main(){  
  int i,giaithua=1,n;  
  
  printf("Nhap mot so bat ky: ");  
  scanf("%d",&n);  
  float tong = 0;
  for(i=1;i<=n;i++){

      giaithua=giaithua*i; 
      tong = tong + 1.0/giaithua;
      
  }  
    printf("tong cua so do la:%f ",tong);
  
} 