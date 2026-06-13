// WAP TO FIND SUM AND AVERAGE OF ARRAY
                                                                          
#include <stdio.h>                                                             
                                                                                           
int main()
{
int A[100],num,i;
double sum=0,average;
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

for ( i = 0; i<num ; i++)
{
    printf(" ELEMENT %d\n",i+1);
    scanf("%d",&A[i]);
}     

for ( i = 0; i<num ; i++)
{
    sum= sum+A[i];

}     

printf("THE SUM OF THE ARRAY IS %.2f\n",sum);

average=sum/num;
printf("THE AVERAGE OF THE ARRAY IS: %.2f",average);

return 0;
}