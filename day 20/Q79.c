// WAP TO FIND ROW WISE SUM
                                                                                        
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


for (i = 0; i < rows; i++) 
{sum=0;
for (j = 0; j < column; j++) 
{
sum=sum+A[i][j];}
printf("SUM OF ROW %d IS: %d\n",i+1,sum);
}
return 0;}                                                                                         