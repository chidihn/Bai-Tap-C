// nhap gia va tinh luong cho nhan vien
#include <stdio.h>
#include <stdbool.h>
int main() {
  float gia;
  while(true) {
    printf( "Nhap vao gia ca cua san pham ( -1 to end ): " );
    scanf( "%f", &gia );
    if (gia == -1 ) {
      return 0;
    }  
    printf( "luong cua nhan vien la %.2f\n",gia / 100 * 9 + 200 );
  }
  return 0;
}
