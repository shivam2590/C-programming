#include<stdio.h>
int prime(int);
int main()
{
  int n,ans;
  printf("enter your number");
  scanf("%d",&n);
  ans=prime(n);
  if(ans==1)
  printf("Number is prime");
 else if(ans==0)
  printf("not prime");
return 0;
}
int prime(int x)
{
  int i,r,cnt =0;
  for(i=1;i<=x;i++)
     {
       r= x%i;
       if(r==0)
        cnt++; 
     }
    if(cnt==2)
     return 1;
    else
      return 0;

}
