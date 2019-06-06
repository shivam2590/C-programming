#include<stdio.h>
int main()
{
 int a[5],i,*ptr,sum=0;
 ptr = a;
 printf("enter the array : ");
 for(i=0;i < 5;i++)
 {
 scanf("%d",ptr+i);
 }
  for(i=0;i<5;i++)
  {
   sum = sum + *(ptr+i);
  }
  printf("sum = %d",sum);
 return 0;
} 

