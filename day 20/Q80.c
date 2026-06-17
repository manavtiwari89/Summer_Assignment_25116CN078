// WAP TO FIND COLUMN WISE SUM
                                                                                     
                                                                                        
#include <stdio.h>
int main() 
{
int A[100][100], rows,column,i,j,sum;

printf("ENTER THE NUMBER OF ROWS: ");

scanf("%d",&rows);
printf("ENTER THE NUMBER OF COLUMNS: ");
scanf("%d",&column);

printf("ENTER ELEMENTS FOR MATRIX A: \n");

for (i = 0; i < rows; i++) {
for (j = 0; j < column; j++) 
{
scanf("%d",&A[i][j]);
}}


for (j = 0; j< rows; j++) 
{sum=0;
for (i = 0; i< column; i++)
 {
sum=sum+A[i][j];}
printf("SUM OF COLUMN %d IS: %d\n",j+1,sum);
}
return 0;}                                                                                                                                                                                  