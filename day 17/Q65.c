 // WAP TO MERGE ARRAYS                                                                                                          
#include <stdio.h>

int main() {   
int A[100],B[100],merged_array[200],sizeA,sizeB,sizeC,i,j;
printf("ENTER THE NUMBER OF ELEMENTS OF ARRAY 'A': ");
scanf("%d",&sizeA); 
for (i = 0; i < sizeA; i++)
 {
printf("ELEMENT %d\n",i+1);
scanf("%d",&A[i]);
}

printf("ENTER THE NUMBER OF ELEMENTS OF ARRAY 'B': ");
scanf("%d",&sizeB); 
for (i = 0; i < sizeB; i++)
 {
printf("ELEMENT %d\n",i+1);
scanf("%d",&B[i]);
    }

    
sizeC =sizeA+sizeB;
for (i = 0; i < sizeA; i++) 
{
merged_array[i]=A[i];
    }
for (j = 0; j < sizeB; j++)
 { 
merged_array[i]=B[j];
i++;
    }

printf("MERGED ARRAY:\n ");
for (i = 0; i < sizeC; i++) {
 printf("%d\t",merged_array[i]);
    }
return 0;
}