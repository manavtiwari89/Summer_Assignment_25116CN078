// WAP TO INTERSECTION OF ARRAYS IN C                                                 
                                                                                         
#include <stdio.h>
int main() {
int A[100],B[100],C[200],sizeA,sizeB,sizeC=0,i,j,r,k;

printf("ENTER THE NUMBER OF ELEMENTS OF ARRAY 'A: ");
scanf("%d",&sizeA);
printf("ENTER ELEMENTS OF ARRAY A:\n");
for (i = 0; i<sizeA; i++)
 {
 scanf("%d",&A[i]);
    }

printf("ENTER THE NUMBER OF ELEMENTS OF ARRAY 'B: ");
scanf("%d",&sizeB);
printf("ENTER ELEMENTS OF ARRAY B:\n");
for (i = 0; i<sizeB; i++) 
{
 scanf("%d",&B[i]);
    }                                                                                            
for (i = 0; i < sizeA; i++) {
for (j = 0; j < sizeB; j++) {            
if (A[i]==B[j]) {
r=0;
for (k = 0; k <sizeC; k++) {
if (A[i]==C[k])
 {
r=1;
 break;
}
 }     
if (r==0) 
{
C[sizeC]=A[i];
sizeC++;
 }               
 }}
}
if (sizeC==0)
 {
printf("NO COMMON ELEMENTS FOUND\n");
} else
 {
 printf("INTERSECTION OF ARRAYS IS:\n");
for (i = 0; i < sizeC; i++) {
 printf("%d\t",C[i]);
 }
 printf("\n");
}
return 0;
}