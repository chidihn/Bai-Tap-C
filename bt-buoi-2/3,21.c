//phan biet x-- --x
#include <stdio.h>
int main() {
  int x;
  x = 5;
  printf( "ket qua --x : \n" );
  printf( "%d\n", x );
  printf( "%d\n", --x );
  printf( "%d\n", x );
  x = 5;
  printf( "ket qua x--: \n" );
  printf( "%d\n", x );
  printf( "%d\n", x-- );
  printf( "%d\n", x );
  return 0;
}
