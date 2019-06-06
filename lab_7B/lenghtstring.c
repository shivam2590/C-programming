#include<stdio.h>
int main()
{  
   int cnt = 0;
   char a[50]="this is shivam";
   char *p;
   p = a;
   
   while( p != \0)
     {
       cnt++;
     }
     printf("string lenght = %d",cnt);
 return 0;    
}
