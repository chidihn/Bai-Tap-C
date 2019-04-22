// tinh luong nhan vien
#include <stdio.h>
#include <stdbool.h>
int main() {
  int gio;
  float luong, tongluong ;
  while(true) {
    printf( "Nhap vao gio lam ( -1 to end ): " );
    scanf( "%d", &gio );
    if (gio == -1 ) {
      return 0;
    }  
    printf( "nhap vao so luong moi h: " );
    scanf( "%f", &luong );
    if (gio >40){
      tongluong =  luong*(gio + (gio - 40)/2  );
      printf( "so luong cua nhan vien do la %.2f\n", tongluong);
    }
    else{
      printf( "so luong cua nhan vien do la %.2f\n", luong*gio);
    }         
  }
  return 0;
}
