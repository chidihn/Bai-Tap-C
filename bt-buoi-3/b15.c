//Viết chương trình nhập vào một dãy n số thực, tính giá trị trung bình của dãy đã nhập.
#include <stdio.h> 
#include <math.h> 
int main(){ 
    float n, a, f; 
    int  i = 0;
    printf("Nhap so thuc n = "); 
    scanf("%f",&n); 
    for( i=1;i<=n;i++){
        printf("Nhap so thuc a%d = ",i); 
        scanf("%f",&a); 
        f = f+ a/(n*1.0) ; 
    }
    
    printf("Tbc = %.3f \n",f); 
    return 0; 

}

