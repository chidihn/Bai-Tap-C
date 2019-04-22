// tim so lon nhat trong 10 so
#include <stdio.h>
int main() {
  int counter = 0, number = 0, largest = 0;
  while ( counter < 10 ) {
    printf( "Nhap vao mot so: \n" );
    scanf( "%d", &number );
    if ( number >= largest ) {
      largest = number;
    }
    counter++;
  }
  printf( "So lon nhat la %d\n", largest );
  return 0;
}
