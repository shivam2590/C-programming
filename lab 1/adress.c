#include<stdio.h>
#define N 5
void main()
{ 
   float a[N];
   int i;
   for(i=0;i<N;i++)
      { 
        printf("enter the value a[%f]",i);
        scanf("%f",&a[i]);
      }
   for(i=0;i<N;i++)
      {
        printf("\nAdd of a[%f]=%u\n",i,&a[i]);
      }
}
 
