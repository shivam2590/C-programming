#include<stdio.h>
#include<string.h>
int main()
{
 char a[10] ;
 int i,j,len,temp;
 len = strlen(a);
 printf("Enter the word which you  want arrange : ");
 scanf("%s",a);
 for(i=0;i<len-1;i++)
 {
  for(j=i+1;j<len;j++)
  {
    if (a[i] > a[j])
    {
      temp = a[i];
      a[i]=a[j];
      a[j]=temp;
    }
    
   }
 }
 for(i=0;i<len-1;i++)
 {
  for(j=i+1;j<len;j++)
  {
      printf("\n%s\n",a);
  }
}
 
 return 0 ; 
 
     
}
