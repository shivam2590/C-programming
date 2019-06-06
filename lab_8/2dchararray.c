#include<stdio.h>
#include<string.h>
int main()
{
  char name[7][10] = {"mon","tue","wed","thu","fri","sat","sun"};
  void swap(char **p1);
  char *p[7];
  int i,j;
  for(i=0;i<7;i++)
    {
      p[i]=name[i];
      
    }
   for(i=0;i<7;i++)
   {
     printf("\n %s\n",p[i]);
   }
   for(i=0;i<6;i++)
     {
       for(j=i+1;j<7;j++)
          {
            if(strcmp(p[i],p[j])>0)
             {
               swap(&p[i],&p[j]);
             }
          }
     }
}

void swap(char **p2)
{
  char *t;
  t = *p2[i];
  *p2[i] = *p2[j];
  *p2[j] = t;
}
