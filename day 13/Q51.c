//  WAP TO FIND LARGEST AND SMALLEST ELEMENT                                                                      
                                                                             
#include <stdio.h>                                                             
                                                                                           
int main()
{
int A[100],num,i,MAX=0,MIN=0;

printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

for ( i = 0; i<num ; i++)
{
    printf(" ELEMENT %d\n:",i+1);
    scanf("%d",&A[i]);
}     

for ( i = 0; i < num; i++)
{
    if (A[MAX]<A[i])
    {
        MAX=i;
    }
    
}
printf("THE LARGEST ELEMENT IS : %d\n",A[MAX]);
 
for ( i = 0; i < num; i++)
{
    if (A[MIN]>A[i])
    {
        MIN=i;
    }
    
}
printf("THE SMALLEST ELEMENT IS : %d",A[MIN]);
return 0;
}