#include<stdio.h>
#define N 5
void main()
{
  int a[N];
  int i;
for(i=0;i<N;i++)
 { printf("\nenter a[%d]:",i);
   scanf("%d",&a[i]);
 }  
  for(i=0;i<N;i++)
     {
       printf("\na[%d]=%d\n",i,a[i]);
     }
}
