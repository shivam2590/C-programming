#include<stdio.h>
#include<string.h>
int main()
{
   char name[3][10];
   char *p[3],*t;
   p[0]= name[0];
   p[1] = name[1];
   p[2]  = name[2];
   int i,j;
   for(i=0;i<3;i++)
      {
        printf("Enter your first,second,third word");
        scanf("%s",name[i]);
      }
      for(i=0;i<3;i++)
      {
          printf("\n\n %s",name[i]);     
       }
       printf("length = %d",strlen(name[0]));
       
       for(i=0;i<3-1;i++)
         { 
           for(j=i+1;j<3;j++)
             {
               if(strlen(p[i]) > strlen(p[j])
                 {
                   t = p[i];
                   p[i]=p[j];
                   p[j]= t;
                   
                 } 
              }
           } 
           for(i=0;i<3;i++)
           {
             printf("\n Ans = %c",*p[i]);
           }
}  
        
