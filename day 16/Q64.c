// WAP TO REMOVE DUPLICATES FROM ARRRAY                                                             
                                                                                               
#include <stdio.h>        
int REMOVE_DUPLICATES(int A[],int *num);                                                     
                                                                                           
int main()                                                                        
{
int A[100],num,i,target_sum;
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

for ( i = 0; i<num ; i++)
{
    printf(" ELEMENT %d\n",i+1);
    scanf("%d",&A[i]);
}
printf("\n");

REMOVE_DUPLICATES(A,&num);

printf("AFTER DUPLICATIONS ARE REMOVED\n");

for ( i = 0; i<num ; i++)
{
    printf("%d\t",A[i]);
   
}
 return 0;
}

int REMOVE_DUPLICATES(int A[],int *num) {

int i, j, k;   
for (i = 0; i < *num; i++) {
for (j=i+1; j < *num; j++) 
{
if (A[i]==A[j])
 {
            
for (k = j;k<*num-1;k++)
 {
 A[k]=A[k + 1];
}
(*num)--;
j--; 
}}}}