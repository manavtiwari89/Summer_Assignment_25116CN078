// WAP TO CHECK SYMMETRIC MATRIX
                                                                                        

#include <stdio.h>
int main() 
{
int A[100][100];
int rows,column,i,j,temp=1;

printf("ENTER THE NUMBER OF ROWS: ");

scanf("%d",&rows);
printf("ENTER THE NUMBER OF COLUMNS: ");
scanf("%d",&column);



if (rows != column) {
printf("MATRIX MUST BE SQUARE TO CHECK ITS  SYMMETRY \n");
return 0;
}


printf("ENTER ELEMENTS FOR MATRIX A:\n");

for (i = 0; i < rows; i++)
 {
for (j = 0; j < column; j++) 
{
scanf("%d",&A[i][j]);
}}

for (i = 0; i < rows; i++) 
{
for (j = 0; j < column; j++) {
if (A[i][j] != A[j][i]) 
{
temp=0;
break;
}}
}


if (temp== 1) 
{
printf("THE MATRIX IS A SYMMETRIC MATRIX");
}
else

{
printf("THE MATRIX IS NOT A SYMMETRIC MATRIX");
}
return 0;
}