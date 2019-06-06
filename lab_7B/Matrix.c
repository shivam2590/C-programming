#include<stdio.h>
#define COL 4


int main()
{
  int a[2][COL],i,j,b[2][COL];
  int *ptr,*ptr2;
  ptr = a;
  ptr2 = b;
  
  for(i=0;i< 2;i++)
     {
      for(j=0;j< COL;j++)
         {
         printf("\nEnter the value : ");
         scanf("%d",ptr + COL * i +j);  
         }   
     }
     for(i=0;i<2;i++)
     {
      for(j=0;j<COL;j++)
         {
            printf("%d ",a[i][j]);
                  
         }   
         printf("\n");
     }
      for(i=0;i<4;i++)
     {
      for(j=0;j<2;j++)
         {
          *(ptr + 2*j + i) = *(ptr + COL*i+j);
          b[j][i]=a[i][j];    
         }   
         
     }
     for(i=0;i<4;i++)
     {
      for(j=0;j<2;j++)
         {
            printf("\n%d ",b[i][j]);
                  
         }   
         printf("\n");
     }

     
     
}
