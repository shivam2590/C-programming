#include<stdio.h>
int main()
{
  FILE *fp;
  fp = fopen("myfile.txt","r");
  if(fp == NULL)
    {
     printf("Couldn't open");
    }   
   else
    {
     printf("file opened");
    }
    printf("\n fp = %u\n",fp); 
   fclose(fp);   
   return 0;
}
