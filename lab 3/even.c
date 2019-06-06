#include<stdio.h>
int ask(int);
void main()
{
  int n,r;
  printf("\nEnter the value : ");
  scanf("%d",&n);
  r = ask(n);
  if(r==1)
    printf("this number is even ");
   else
    printf("this number is odd");
}

int ask(int x)
{
  if(x%2 == 0)
   return (1);
  else
    return(0); 
}
