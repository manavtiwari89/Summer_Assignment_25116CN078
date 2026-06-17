// WAP TO UNION OF ARRAYS                                                                

#include <stdio.h>

int main() {
int A[100],B[100],UNION[200],sizeA,sizeB,sizeC=0,i,j,r;

printf("ENTER THE NUMBER OF ELEMENTS OF ARRAY 'A: ");
scanf("%d",&sizeA);
printf("ENTER ELEMENTS OF ARRAY A:\n");
for (i = 0; i < sizeA; i++)
 {
 scanf("%d",&A[i]);
    }

printf("ENTER THE NUMBER OF ELEMENTS OF ARRAY 'B': ");
scanf("%d",&sizeB);
printf(" ENTER ELEMENTS OF ARRAY B:\n");
for (i = 0; i < sizeB; i++) 
{
 scanf("%d",&B[i]);
    }
for (i = 0; i < sizeA; i++)
 {
UNION[sizeC]=A[i];
sizeC++; 
    }
for (i = 0; i < sizeB; i++) 
{
r=0;

for (j = 0; j < sizeC; j++)
 {
if (B[i]==UNION[j])
 {
r=1; 
break;
 }
 }

if (r==0)
 {
UNION[sizeC]=B[i];
sizeC++;
}
}
printf("UNION OF ARRAYS IS:\n");
for (i = 0; i < sizeC; i++) {
printf("%d\t",UNION[i]);
    }

    return 0;
}                                                                                            