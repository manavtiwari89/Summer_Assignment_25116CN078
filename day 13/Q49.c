// WAP TO INPUT AND DISPLAY ARRAY

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
 
printf("THE ELEMENTS IN  THE ARRAY ARE\n");

for ( i = 0; i < num; i++)
{
    printf("%d\t",A[i]);
}
return 0;
}
