#include<stdio.h>
int main()
{
 int a[5],i,*ptr;
 ptr = a;
 printf("enter the array : ");
 for(i=0;i < 5;i++)
 {
 scanf("%d",ptr+i);
 }
  for(i=0;i<5;i++)
  {
   printf("\nAddress of a[%d]= %u",i,ptr+i);
  }
 return 0;
} 

