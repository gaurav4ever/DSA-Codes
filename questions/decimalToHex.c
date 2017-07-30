#include<stdio.h> 
int main() 
{ 
   int a=10;
   int *ptr=&a;
   printf("%d\n",sizeof(*(char*)ptr) ); 
   return 0; 
}