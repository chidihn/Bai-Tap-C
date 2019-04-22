//Tính số lần xuất hiện của các phần tử trong mảng.
#include<stdio.h>

int a[100];
int b[100];
int n;

void nhap(){
        printf("\nNhap n = ");
        scanf("%d", &n);
        for( int i = 0; i< n; i++ ){
                printf("\na[%d] = ", i+1);
                scanf("%d", &a[i]);
        }
        for( int i = 0; i< n; i++ )
                b[i] = 1; // gia tri a[i] tuong ung chua dc xet                                                                                                                                                    
}

void dem(){
        printf("Gia tri \t so lan\n");

        for( int i = 0; i< n; i++ ){
                int count = 1;
                if( b[i] ){
                        b[i] = 0; // da xet a[i]                                                                                                                                                                   
                        for( int j = 1+i; j < n; j ++ ){
                                if( a[j] == a[i] ) {
                                        count++;
                                        b[j] = 0;
                                }
                        }
                        printf("%5d\t\t%5d\n", a[i], count);
                }
        }
}

int main(){
        nhap();
        dem();
        return 0;
}


