#include<stdio.h>
int main()
{
 int a[5],*ptr,i,j,t;
 ptr = a;
 for(i=0,j=4;i<j;i++,j--)
   {
     t = *(ptr + i);
     *(ptr+i) = *(ptr+j);
     *(ptr+j) = t;
   } 
   return 0;
}
