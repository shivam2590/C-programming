#include<stdio.h>
int main()
{
  FILE *fp;
  char c;
  fp = fopen("myfile2.txt","w");
   printf("\n location = %d",ftell(fp)); 
  fprintf(fp,"\n%s","ABCD");
  
  printf("\n location = %d",ftell(fp));
  fclose(fp);
  
  fopen("myfile2.txt","r");
  while((c=getc(fp)) != EOF)
 { putchar(c);
  }
  
  
  fclose(fp);
  return 0;
}
