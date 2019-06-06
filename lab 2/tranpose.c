#include<stdio.h>
#define N 3
int main()
{
    int a[N][N],b[N][N],i,j;
    for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       { printf("\n Enter the value a[%d][%d]:",i,j);
         scanf("%d",&a[i][j]);
       }
   }
     for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       { 
          b[i][j]=a[j][i];
        }
    }
     printf("your trans is\n");
   for(i=0;i<N;i++)
   {
       for(j=0;j<N;j++)
       {
           printf(" %d",b[i][j]);
       }
      printf("\n");
    }
   return 0;
}
