#include<stdio.h>
int main()
{
  float r,*fptr,area,peri;
  fptr = &r;
  printf("what is  radius : ");
  scanf("%f",fptr);
  area = 3.14 * (*fptr) * (*fptr);
  peri = 2 * 3.14 * (*fptr) ;
  printf("area of circle = %f , peri of circle = %f",area,peri);
  

}
