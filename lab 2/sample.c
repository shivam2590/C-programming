#include<stdio.h>
int main( )
{
int i , j , row , col , A[10][10] , B[10][10] , C[10][10];
printf(" Enter number of rows for both the matrices : ");
scanf(" %d ", &row );
printf(" \nEnter number of columns for both the matrices : ");
scanf(" %d ", &col);
printf(" \nPlease enter values for matrix A ." );
for( i = 0 ; i < row ; i++ )
{

for( j = 0 ; j < col ; j++ )
scanf(" %d ", &A[i][j] );
}
printf("\n Please enter values for matrix B ." );
for( i = 0 ; i < row ; i++ )
{

for( j = 0 ; j < col ; j++ )
scanf(" %d ", &B[i][j] );
}
printf("\nGenerating resultant matrix C...");
for( i = 0 ; i < row ; i++ )
for( j = 0 ; j < col ; j++ )
C[i][j] = A[i][j] + B[i][j] ;
printf(" \nDisplaying Resultant Matrix C : ");
for( i = 0 ; i < row ; i++ )
{
for( j = 0 ; j < col ; j++ )
printf(" %d ", C[i][j] );
printf(" \n ");
}
return 0;
}
