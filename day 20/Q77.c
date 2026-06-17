// WAP TO MULTIPLY MATRICES                                                                       
                                                                                         
#include <stdio.h>
int main() 
{
int A[100][100],B[100][100],C[100][100],r1,c1,r2,c2,i,j,k;
printf("ENTER ROWS AND COLUMNS FOR MATRIX A: ");
scanf("%d %d",&r1,&c1);
printf("ENTER ROWS AND COLUMNS FOR MATRIX B: ");
scanf("%d %d",&r2,&c2);
if (c1 != r2)
 {
printf("MATRIX MULTIPLICATION IS NOT POSSIBLE \n");
return 0;}

printf("ENTER ELEMENTS FOR MATRIX A: \n");
for (i = 0; i < r1; i++) 
{
for (j = 0; j < c1; j++)
 {
scanf("%d",&A[i][j]);
}}

printf("ENTER ELEMENTS FOR MATRIX B: \n");

for (i = 0; i < r2; i++) {
for (j = 0; j < c2; j++) {
scanf("%d",&B[i][j]);}
}
 


for (i = 0; i < r1; i++) 
{
for (j = 0; j < c2; j++) 
{
C[i][j]=0;
for (k = 0; k < c1; k++) 
{
C[i][j]=C[i][j]+A[i][k]*B[k][j];
}}}

printf("RESULTANT MATRIX C:\n");
for (i = 0; i < r1; i++) 
{
for (j = 0; j < c2; j++) {
printf("%d\t",C[i][j]);
}
printf("\n");
}
return 0;
}                                                                                         