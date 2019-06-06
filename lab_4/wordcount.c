#include<stdio.h>
#include<string.h>
int main()
{
  char c[50];
  int i,len,count=0,x;
 
  printf("Enter the string : ");
  gets(c);
   len = strlen(c);
  
  for(i=0;i < len;i++)
   {
     if(c[i] == ' ' && c[i+1] != '\0')
      {
        count++;
      }
    }
   x= len - count ;
   printf("char = %d ",x);
   printf("\n%d",count+1);
 return 0; 

}

