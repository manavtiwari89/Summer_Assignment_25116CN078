//  WAP TO FIND PAIR WITH GIVEN SUM                                         
#include <stdio.h>        
int FIND_PAIR(int A[],int num,int target_sum);                                                     
                                                                                           
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
                                  
printf("TARGET SUM: ");
scanf("%d",&target_sum);

FIND_PAIR(A,num,target_sum);
 
return 0;
}

int FIND_PAIR(int A[],int num,int target_sum)
{
int found = 0,i,j;
for (i = 0; i < num-1; i++) 
        {
for ( j = i+1; j < num; j++) 
{
if (A[i]+A[j]==target_sum)
 {
printf("PAIR FOUND AT INDEX %d AND %d  THAT ARE %d AND %d RESPECTIVELY",i,j,A[i],A[j]);
found = 1;
 }
     }
    }

if (found==0) {
printf("NO PAIR FOUND WITH GIVEN SUM");
}
}




