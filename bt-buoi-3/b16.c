//Viết chương trình tính số pi theo công thức: PI/4 = 1 - 1/3 + 1/5 - 1/7 + … + (-1)n+1/(2n+1),
// với n là số nguyên nhập vào từ bàn phím và n > 0.
#include<stdio.h>   
#include<math.h>
int main(){  
  int i,n;  
  
  printf("Nhap mot so bat ky: ");  
  scanf("%d",&n);  
  float tong = 0;
  for(i=0;i<=n;i++){
      tong = tong +  -(pow((-1),i+1))/(1+2*i );
  }  
    printf("so PI = %f ",tong);
  
} 