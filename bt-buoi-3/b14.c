//Viết chương trình tính ex theo công thức ex = 1 + x + x2/2! + x3/3! + …, với độ chính xác epxilon = 0.001.
#include<stdio.h>   
#include<math.h>
int main(){  
  int i,giaithua=1,n;  
  float x;
  printf("Nhap vao so nguyen n: ");  
  scanf("%d",&n); 
  printf("nhap vao mot so thuc x ") ;
  scanf("%f",&x);
  float tong = 0;
  for(i=1;i<=n;i++){

      giaithua=giaithua*i; 
      tong +=  pow(x,i)/giaithua;
      
  }  
    printf("tong cua so do la:%.3f ",tong);
  
} 
