// WAP TO FIND DUPLICATES IN ARRAY                                                       
                                                                                          

#include <stdio.h>  

int main()
{
int A[100],num,i,j,found=0;

printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

for ( i = 0; i<num ; i++)
{
    printf(" ELEMENT %d\n:",i+1);
    scanf("%d",&A[i]);
}     

printf("THE DUPLICATE ELEMENTS ARE:\n");

for ( i = 0; i < num; i++)
{
    for ( j = i+1; j < num; j++)
    {
        if (A[i]==A[j])
        {
            printf("%d\t",A[i]);
            found=1;
            break;
        }
        
    } }
    if (found==0)
    {
        printf("NO DUPLICATE FOUND");
    }
    return 0;
}



                                                                             