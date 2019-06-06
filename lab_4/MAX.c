#include<stdio.h>
int MAX(int a ,int b ,int c)

{
  
  int maximum;
  
  printf("Enter the three number : \n");
  scanf("%d %d %d",&a,&b,&c);

  maximum = MAX(a, b ,c);
  printf("\n\nThe maximum number amoung three is = %d",maximum);
}

{
  int MAX(int x, int y, int z)
  if(x > y && x > z)
  {
    return (x);
  }
  else if (y > x && y > z)
  {
    return (y);
  }
  else
  {
    return (z);
  }
}
