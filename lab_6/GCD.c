#include<stdio.h>
int main()
{
 int n1,n2,i,gcd =1,*ptr,LCM ;
 ptr = &i;
 
 printf("enter the two number : ");
 scanf("%d",&n1);
 scanf("%d",&n2);
 *ptr=1;
 while(*ptr<=n1 && *ptr <= n2)
 {
  if(n1 % *ptr == 0 && n2 % *ptr == 0)
  gcd = *ptr;
  ++(*ptr);
 }
 printf("%d",gcd);
 LCM = (n1 * n2)/gcd ;
 printf("\nLCM = %d",LCM);
 return 0;
}
