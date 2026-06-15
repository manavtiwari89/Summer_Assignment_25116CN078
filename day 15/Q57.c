//  WAP TO REVERSE ARRAY
#include <stdio.h>                                                             
                                                                                           
int main()                                                                        
{
int A[100],num,i;
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

for ( i = 0; i<num ; i++)
{
    printf(" ELEMENT %d\n",i+1);
    scanf("%d",&A[i]);
}
 
printf("THE REVERSED ARRAY IS\n");

for ( i = num-1; i >=0; i--)
{
    printf("%d\t",A[i]);
}
return 0;
}
