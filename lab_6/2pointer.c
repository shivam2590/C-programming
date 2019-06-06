#include<stdio.h>
int main()
{
  int a,b,*ptr1,*ptr2,c;
  ptr1=&a;ptr2=&b;
  printf("give me value of a and b: ");
  scanf("%d",ptr1);
  scanf("%d",ptr2);
  c = *ptr1+*ptr2;
  printf("%d",c);
}
