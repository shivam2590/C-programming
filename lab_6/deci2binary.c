#include<stdio.h>
int main()
{
 int n , r ,*ptrn,*ptrr;
 ptrn = &n,ptrr= &r;
 printf("give me the number which you want conver it in binary : ");
 scanf("%d",ptrn);
 while(n != 0)
 {
   *ptrr = n%2;
   printf("\n%d",*ptrr);
   *ptrn=*ptrn/2;
 }
 
}
