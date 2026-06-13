// WAP TO COUNT EVEN AND ODD ELEMENTS 
                                                                             
 #include <stdio.h>                                                             
                                                                                           
int main()
{
int A[100],num,i,count_odd=0,count_even=0;


printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

for ( i = 0; i<num ; i++)
{
    printf(" ELEMENT %d\n:",i+1);
    scanf("%d",&A[i]);
}     

for ( i = 0; i < num; i++)
{
    if (A[i]%2==0)
    {
        count_even++;
    }
    
    else
    {
        count_odd++;
    }
    
}

printf("THE NUM OF ODD AND EVEN ELEMENTS ARE: %d\t%d",count_odd,count_even);
return 0;
}


                                                                           