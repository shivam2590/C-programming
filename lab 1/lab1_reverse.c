#include<stdio.h>
#define N 5
void main()
{
  int a[N],b[N],i;
 for(i=0;i<N;i++)
    {
       printf("enter the value : a[%d]",i);
       scanf("%d",&a[i]);
    }
     for(i=0;i<N;i++)
   {
    b[i]=a[N-i-1];
   }
 for(i=0;i<N;i++)
   {printf("value of b[%d] is %d",i,b[i]);}
}
