// WAP TO ADD MATRICES
                                                                              
#include <stdio.h>
int main() 
{
int A[100][100],B[100][100],C[100][100],rows,column,i,j; 
printf("ENTER THE NUMBER OF ROWS: ");
scanf("%d",&rows);
printf("ENTER THE NUMBER OF COLUMNS:");
scanf("%d",&column);
printf("ENTER ELEMENTS FOR MATRIX A: \n");
for (i = 0; i < rows; i++) 
    {
for (j = 0; j < column; j++) 
{
scanf("%d",&A[i][j]);
}
}

printf("ENTER ELEMENTS FOR MATRIX B:\n");
for (i = 0; i < rows; i++) 
{
for (j = 0; j < column; j++) 
 {
scanf("%d",&B[i][j]);}}

for (i = 0; i < rows; i++) 
{
for (j = 0; j < column; j++) 
{
C[i][j] =A[i][j]+B[i][j];
 }}
  printf("RESULTANT MATRIX C: \n");
for (i = 0; i < rows; i++) 
{
for (j = 0; j < column; j++) 
{
printf("%d\t",C[i][j]);
}
printf("\n");}

    return 0;
}                                                                    