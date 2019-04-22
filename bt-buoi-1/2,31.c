//Tinh  binh phuong, lap phuong cac so tu 1-10
#include <stdio.h>
int main() {
int x;
for(size_t x = 0; x <= 10; x++)
{
printf("number\tsquare\tcube\n");
printf("%d\t%d\t%d\n", x, x* x, x* x * x );
}
return 0;
}
