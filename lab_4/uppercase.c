#include<stdio.h>
int upper(char);
int Convert(char);
int main()
{
  char ch,a,converted;
  printf("Enter the character: ");
  scanf("%c",&ch);
  a = upper(ch);
  if(a == 0)
   printf("lowercase");
  else if(a == 1)
   printf("Uppercase");

  converted = Convert(ch);
  printf("\nyour converted character is = %c",Convert(ch));
}

int upper(char x)
{   int j;
    if(x>=65 && x <=90)
    
    j = 1 ;
 
    else if(x >=97 &&  x <=122)
 
     j = 0;
  return j;
}

int Convert(char y)

{
  if(y>=65 && y <=90)
    {
      y = y +32;
    }
   return y;
  
}
