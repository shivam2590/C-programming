#include<stdio.h>
int main()
{
  int a,*ptr ;
  a=5;ptr = &a;
  printf("\na=%d,add of a=%u",a,&a);
  printf("\na=%d,add of a=%u",*ptr,ptr);
  *ptr = 10;
  printf("\na=%d,add of a=%u",a,&a);
  
}
