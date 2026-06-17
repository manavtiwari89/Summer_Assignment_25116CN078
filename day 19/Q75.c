// WAP TO TRANSPOSE MATRIX                                                      
                                                                                         
#include <stdio.h>
int main() 
{
int A[100][100], T[100][100],rows,column,i,j;
printf("ENTER THE NUMBER OF ROWS: ");
scanf("%d",&rows);
printf("ENTER THE NUMBER OF COLUMNS: ");
scanf("%d",&column);
printf("ENTER ELEMENTS FOR MATRIX A: \n");
for (i = 0; i < rows; i++) {
for (j = 0; j < column; j++) {
scanf("%d",&A[i][j]);}
}

for (i = 0; i < rows; i++) 
{
for (j = 0; j < column; j++) 
{
T[j][i]=A[i][j]; }}

printf("TRANSPOSE MATRIX: \n");
for (i = 0; i < column; i++) 
{
for (j = 0; j < rows; j++) 
{
printf("%d\t",T[i][j]);}
printf("\n");
}
return 0;
}                                                                                         