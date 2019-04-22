#include<stdio.h> 
#include<string.h> 
void main() 
{ 
  char chuoi[255]; 
  int i = 0, j; 

  printf("\nNhap vao chuoi kiem tra : "); 
  gets(chuoi); 
  j = strlen(chuoi) - 1; 

  while(chuoi[i++] == chuoi[j--])     // thuc hien j+1 lan 
  ; 
  if (--i>=++j)          // luc nay chac chan j==0 va i== strlen(chuoi) ( neu chuoi doi xung) 
   printf("Chuoi doi xung"); 
  else 
   printf("Chuoi khong doi xung"); 
}  
