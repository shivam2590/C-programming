#include<stdio.h>
int fact(int);
int main()
{
  int Fact,n;
  printf("enter the number : ");
  scanf("%d",&n);
  Fact = fact(n);
  printf("%d\n",Fact);
} 
int fact(int x)
{
 if(x==1)
   return 1;
 else
   return(x*fact(x-1));

  
}
