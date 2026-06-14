// WAP TO LINEAR SEARCH
                                                                               
int LINEAR_SEARCH(int B[],int num1,int target1);

 #include <stdio.h>                                                             
                                                                                           
int main()
{
int A[100],num,i,target,output;
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&num);

for ( i = 0; i<num ; i++)                                                
                                                                        
{
    printf(" ELEMENT %d\n",i+1);
    scanf("%d",&A[i]);
}


printf("ENTER THE TARGET ELEMENT: ");
scanf("%d",&target);

output=LINEAR_SEARCH(A,num,target);

if (output==-1)
{
      printf("THE TARGET ELEMENT IS NOT FOUND");
}
else
{
    printf("THE TARGET ELEMENT %d IS FOUND AT INDEX %d ",target,output);
}
}

int LINEAR_SEARCH(int B[],int num1,int target1)
 {
    int j;

for ( j = 0; j< num1; j++)
{
    if (B[j]==target1)
    {
      return j;
    }

}
return -1;

}

