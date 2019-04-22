//Tim min max cua mang
#include <stdio.h>
int main() {
	int max,min;

	int n, i, check = 1;
	int a[100];
	// Nhập mảng
	printf("Nhap n: ");
	scanf("%d",&n);
	
	for ( i = 0; i < n; i++)
	{
		printf("a[%d] =",i+1);
		scanf("%d", &a[i]);
	}

    max == a[0];
	min == a[0];
    for(int i=0;i<n;i++){
	    if (max < a[i]){
	        max = a[i]; 
	    } 
	    if (min > a[i] ){
	        min = a[i] ;
	    } 
	} 
	for ( int i=0; i< n; i++ ) {
		if (a[i]== max) {
		    printf("max is: %d ",max);
		}
		
		if (a[i] == min ) {
		    printf("||     min is: %d ",min);
		}	
	}
}
