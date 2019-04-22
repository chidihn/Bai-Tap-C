//Viết chương trình nhập vào một số thực x và một dãy n các số thực a0, a1, a2, …, an.
// Tính và in ra giá trị của đa thức bậc n: f(x) = anxn + an-1xn-1 + … + a1x1 + a0.
#include <stdio.h> 
#include <math.h> 

int main(){ 

    float x, a, f = 0; 

    int n, i = 0; 

    printf("%s","Nhap x = "); 

    scanf("%f",&x); 

    printf("%s","Nhap n = "); 

    scanf("%d",&n); 
    for( i=0;i<=n;i++){
        printf("Nhap so thuc a%d = ",i); 
        scanf("%f",&a);
        
    }
    f += a*pow(x,n);
    printf("F(x) = %.2f\n",f); 

   
    


    return 0; 

}

