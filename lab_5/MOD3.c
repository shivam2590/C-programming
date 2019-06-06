#include<stdio.h>
int main()
{
   int i;
   struct employee
   {
     int id_no;
     char sex;
     float height,weight;
     struct 
      {
       int date;
       int month;
       int year;
      }dob;
   }emp[3];
   
    struct employee ;
    printf("please give the information about you, ID,Sex,Height,Weight,DOB :");
    for(i=0;i<=2;i++)
    {
      scanf("%d %c %f %f %d %d %d",&emp[i].id_no,&emp[i].sex,&emp[i].height,&emp[i].weight,&emp[i].dob.date,&emp[i].dob.month,&emp[i].dob.year);                                                           
               
    }
       for(i=0;i<=2;i++)
       {
        printf("\nRecord No: %d",i);
        printf("\nID no =%d \nSex=%c \nHeight=%f \nWeight = %f \nDOB = %d/%d/%d",emp[i].id_no,emp[i].sex,emp[i].height,emp[i].weight,emp[i].dob.date,emp[i].dob.month,emp[i].dob.year);  
       }
}

