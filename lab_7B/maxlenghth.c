#include<stdio.h>
int main()
{
   char a[50];
   int i,j,k,cnt=1,sp[10]={0},val[10];
   sp[0]=-1  ;
   printf("Enter your string: ");
   
   scanf("%[^\n]",a);
   for(i=0;a[i]!='\0';i++)
      {
        if(a[i]== ' ')
         {
            sp[cnt]=i;
            cnt++;
         }
      }
      sp[cnt]=i;
      for(i=0;sp[i] != 0 ; i++)
           {
              val[i-1]= sp[i]-sp[i-1] - 1;
              
           }
           printf("\ntotal word %d",cnt);
           printf("\ntotal word %d",val[i]);
           printf me locha baki sab ok
 return 0;
 
}
