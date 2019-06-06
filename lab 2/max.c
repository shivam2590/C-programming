#include<stdio.h>
#define N 3
int main()
{
   int i,j,max,min,a[N][N]={1,2,3,4,5,6,7,8,9}; 
   min=max=a[0][0];
      for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       {
           if(max < a[i][j])
           max=a[i][j];
           if(min > a[i][j])
           min = a[i][j];
         }
    }
      printf("max value is %d\n",max);
      printf("min value is %d\n",min); 
}
