#include<stdio.h>
main()
{
  int i;
  struct employee
  {
    int id_no;
    char sex;
    float height,weight;
  }emp[3];
    struct employee ;
    printf("please give the information about you, ID,Sex,Height,Weight :");
    for(i=0;i<=2;i++)
    {
      scanf("%d %c %f %f",&emp[i].id_no,&emp[i].sex,&emp[i].height,&emp[i].weight);                                                           
               
    }
       for(i=0;i<=2;i++)
       {
        printf("\nRecord No: %d",i);
        printf("\nID no =%d \nSex=%c \nHeight=%f \nWeight = %f",emp[i].id_no,emp[i].sex,emp[i].height,emp[i].weight);
        
        }
    
   
}
