//Dãy Fibonacci là dãy vô hạn các số tự nhiên được sinh theo công thức: f0 = 1, f1 = 1 và fn = fn-2 + fn-1 với n ≥ 2.
// Viết chương trình nhập vào một số nguyên dương n và in ra dãy các số Fibonacci từ 1 đến n.
#include<stdio.h>  
int main()  
{  
 int n1=1,n2=1,n3,i,n;  
  
 printf("Ban hay nhap so n: ");  
 scanf("%d",&n);  
 printf("\n%d  ",n1);  
  
 for(i=2;i<n;i++)   
 {  
  n3=n1+n2;  
  if (n3 <n) {
     printf(" %d ",n3);
    n1=n2;  
    n2=n3;  
  }
  
    
 }  
   
}  