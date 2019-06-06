#include<stdio.h>
#define N 10
void main()
{
 int a[N],i,sum=0;
 float avg;
     for(i=0;i<N;i++)
    {printf("give the value a[%d]",i);
     scanf("%d",&a[i]);
     }
   for(i=0;i<N;i++)
     {
      sum=sum+a[i];
     }
    printf("sum = %d",sum);
}
