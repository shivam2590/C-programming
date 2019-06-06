#include<stdio.h>
#define N 3
int main()

{
   int a[N][N],i,j;
for(i=0;i<N;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("\nEnter the a[%d][%d]",i,j);
           scanf("%d",&a[i][j]);
       }
   }
 for(i=0;i<N;i++)
   {
       for(j=0;j<3;j++)
       {
          printf("%d",a[i][j]);
       }
       printf("\n");
    }
return 0;
}
