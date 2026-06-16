//  WAP TO FIND MAIMUM FREQUENCY ELEMENT                           
#include <stdio.h>        
int MAX_FREQUENCY(int A[],int num);                                                     
                                                                                           
int main()                                                                 
{       
int A[100],num,i,output;
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

for ( i = 0; i<num ; i++)
{
    printf(" ELEMENT %d\n",i+1);
    scanf("%d",&A[i]);
}

output=MAX_FREQUENCY(A,num);
printf("THE MAXIMUM FREQUENCY ELEMENT IS: %d",output);
return 0;
}

int MAX_FREQUENCY(int A[],int num) {
int max_count,most_frequent_element=A[0],count=0,i,j;
for ( i = 0; i < num; i++) 
{
 
    count =0;

    for ( j = 0; j < num; j++) 
 {
    if (A[i]==A[j]) {
count++;
} 
}

if (count >max_count) 
{
    max_count=count;
 most_frequent_element =A[i];
}
 }
 return most_frequent_element;
}

