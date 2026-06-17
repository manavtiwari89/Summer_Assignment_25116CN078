// WAP TO FIND DIAGONAL SUM                                             
                                                                                
#include <stdio.h>
int main() {
int A[100][100],rows,column,i,j,sum = 0;

printf("ENTER THE NUMBER OF ROWS: ");
scanf("%d",&rows);
printf("ENTER THE NUMBER OF COLUMNS: ");
scanf("%d",&column);

if (rows != column) 
{
printf("DIAGONAL SUM IS ONLY POSSIBLE FOR SQUARE MATRICES\n");
return 0;}

printf("ENTER ELEMENTS FOR MATRIX A: \n");
for (i = 0; i < rows; i++) {
for (j = 0; j < column; j++) {
scanf("%d",&A[i][j]);}}

for (i = 0; i < rows; i++) 
{
sum =sum+A[i][i];
}
printf("SUM OF DIAGONAL ELEMENTS :  %d\n",sum);
return 0;}
