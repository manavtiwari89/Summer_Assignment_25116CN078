  // WAP TO MOVE ZEROES TO END      

 #include <stdio.h>
void MOVE_ZEROES(int A[],int n);                                                                                                                                                                                                                                       

int main() {
 int A[100],num,i,r,n;
 printf("ENTER THE NUMBER OF ELEMENTS: ");
 scanf("%d",&num);

for ( i = 0; i<num ; i++)
    {  printf("ELEMENT %d\n",i+1);
scanf("%d",&A[i]);  }
                                                                    
 
n =num; 

printf("ORIGINAL ARRAY:\n");
for ( i = 0;i < num;i++)
    {
printf("%d\t",A[i]); }
printf("\n"); 

MOVE_ZEROES(A,n);

printf("ARRAY AFTER MOVING ZEROES TO THE END:\n");
    for ( i = 0 ; i < num; i++) 
{
printf("%d\t",A[i]); }
printf("\n");
return 0;
}

void MOVE_ZEROES(int A[],int n) 
{
int count = 0;                                       // KEEPS TRACK OF  THE  POSITION FOR NON ZERO ELEMENTS
 for (int i = 0; i < n; i++) 
{if (A[i] != 0) 
 {A[count]=A[i];
count++;
}}
while (count<n) {
A[count]=0;
count++;
}
}


                                       