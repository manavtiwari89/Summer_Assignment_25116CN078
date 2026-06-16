// WAP TO FIND MISSING NUMBER IN ARRAY                                                         
#include <stdio.h>        
int MISSING_NUMBER(int A[],int n);                                                     
                                                                                           
int main()                                                                        
{
int A[100],num,i,n,FIND_MISSING_NUMBER;
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

for ( i = 0; i<num ; i++)
{
    printf(" ELEMENT %d\n",i+1);
    scanf("%d",&A[i]);
}

n=num+1;

FIND_MISSING_NUMBER=MISSING_NUMBER(A,n);

printf("THE MISSING NUMBER IS: %d",FIND_MISSING_NUMBER);
return 0;
}

int MISSING_NUMBER(int A[],int n) {
int i;
int expected_sum= (n*(n+1))/2;                            // SUM OF FIRST N NATURAL NUMBERS FORMULA
int actual_sum=0;                                   

for ( i = 0; i <n-1; i++)
{
    actual_sum=actual_sum+A[i];                                     // TO FIND THE  MISSING NUMBER
}

return expected_sum-actual_sum;
}