#include<stdio.h>
#include<string.h>
int main()
{
  char a[50];
  int i,j,flag,len;
  printf("Enter the word : ");
  scanf("%s",a);
  len= strlen(a);
  flag = 0;
  for(i=0,j=len-1;i<j;i++,j--)
     {
       if(a[i] !=a[j])
       { 
       flag = 1;
       } 
       else 
         flag = 0;
     }
    if(flag == 1)
     printf("not same");
     else if(flag = 0)
     printf("not same");
}
