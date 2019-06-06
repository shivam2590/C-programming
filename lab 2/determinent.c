#include<stdio.h>
#define N 3
int main ()
 {
     int a[N][N],i,j,D;
        for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       { printf("\n Enter the value a[%d][%d]:",i,j);
         scanf("%d",&a[i][j]);
       }
   }
     D = a[0][0]* (a[1][1]*a[2][2] - a[2][1]*a[1][2]) - a[0][1]*(a[1][0]*a[2][2] - a[2][0]*a[1][2]) + a[0][2]*(a[1][0]*a[2][1] - a[2][0]*a[1][1]);
   

    printf("answer = %d",D);

   return 0;
 }













