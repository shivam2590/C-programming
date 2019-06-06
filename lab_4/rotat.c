#include<stdio.h>
#include<string.h>
int main()
{
 char y[10],temp;
 int len,i,j;
 printf("enter the word: ");
 scanf("%s",y);
 len = strlen(y);
 puts(y);
  for(j=1;j<len;j++)
     {
       temp = y[0];
       for(i=1;i<len;i++)
          {
            y[i-1] = y[i];
          }
        y[len-1] = temp ;
        puts(y); 
     }
  


}
