#include<stdio.h>
int main( )
{
int divide(int,int);
int a,b,ans;
printf("Enter the two integer number");
scanf("%d%d",&a,&b);
if(a >= 30 && a <= 39 || b >=30 & b <= 39)
  { 
   ans = divide(a,b);
  }
else
  {
   printf("Invalid Integer,SIR");
  }
}
int divide( int x,int y)
{
float z;
z=(float)x/y;
printf("%f",z);
return z;
}
