#include<stdio.h>
int fibo(int);
int main()
{
  int n,i,answer;
  printf("enter the n : ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
      {
        answer = fibo(i);
        printf("%d,",answer);
      }
}
int fibo(int x)
{
  if(x==0)
   return 0;
  else if(x==1)
    return 1;
  else
    return(fibo(x-1)+fibo(x-2)) ;
}
