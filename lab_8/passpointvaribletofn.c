#include<stdio.h>
int main()
{  
  void swap(char **p,char **q);
  char *ps1 = "abc";
  char *ps2 = "xyz";
  
  printf("\nps1 point to : %s",ps1);
  printf("\nps2 point to : %s",ps2);
  printf("\n\n\n -----After Swap-----\n\n");
  
  swap(&ps1,&ps2);
  printf("\nps1 point to : %s",ps1);
  printf("\nps2 point to : %s",ps2);
   
}
void swap(char **p1, char **p2)
{
  char *t;
  t = *p1;
  *p1 = *p2;
  *p2 = t;
}
