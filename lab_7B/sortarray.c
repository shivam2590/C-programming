#include<stdio.h>
int main()
{
  int a[10],*p,new,t,i,j;
  p = a;
  new =11;
  
  for(i=0;i<=4;i++)
   {
       printf("Enter yourn int array : ");
       scanf("%d",p);
   }
   
   for(i=0;i<=3;i++)
      {
        for(j=i+1;j<=4;j++)
          {
             if(*(p+i) > *(p+j) )
               {
                  t = *(p+i);
                  *(p+i) = *(p+j);
                  *(p+j) = t;
               }
              
          }
        }
        for(i=0;i<=4;i++)
            {
              printf("%d",a[i]);
              printf("\n")  ;
            }
 }
                
          
