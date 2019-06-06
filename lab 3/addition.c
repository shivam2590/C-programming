#include<stdio.h>
int add(int,int);
void main()
{
  int n,r,a,b;
  printf("\n enter the value");
  scanf("%d %d",&a,&b);
  r = add(a,b);
  printf("\nadd=%d",r);
}
 int add(int x,int y)
{
 return(x+y);
}
