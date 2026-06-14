// WAP TO FREQUENCY OF AN ELEMENT                                                                                  
                                                                                    
                                                                               
int FREQUENCY(int B[],int num1,int target1);

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

output=FREQUENCY(A,num,target);

if (output==0)
{
      printf("THE ELEMENT IS NOT PRESENT");
}
else
{
    printf("THE TARGET ELEMENT %d APPEARS  %d TIMES",target,output);
}
}

int FREQUENCY(int B[],int num1,int target1)
 {
    int j,count=0;

for ( j = 0; j< num1; j++)
{
    if (B[j]==target1)
    {
      count++;
    }

}
return count;

}

