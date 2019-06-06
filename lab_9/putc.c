#include<stdio.h>
int main()
{
  FILE *fp;
  fp = fopen("myfile1.txt","w");
   printf("\n location = %d",ftell(fp)); 
  putc('a',fp);
  
  printf("\n location = %d",ftell(fp));
  fclose(fp);
  return 0;
}
