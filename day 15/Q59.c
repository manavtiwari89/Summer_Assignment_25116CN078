
// WAP TO ROTATE ARRAY RIGHT                                                                                 
#include <stdio.h>
void RIGHT_ROTATE(int A[],int r,int n);

int main() {
 int A[100],num,i,r,n;
 printf("ENTER THE NUMBER OF ELEMENTS: ");
 scanf("%d",&num);

for ( i = 0; i<num ; i++)
    {  printf("ELEMENT %d\n",i+1);
scanf("%d",&A[i]);  }
                                                                                    //INPUT TO HOW MANY POSITIONS TO ROTATE
 printf("ENTER THE NUMBER OF POSITIONS TO ROTATE: ");
scanf("%d",&r);
n =num; 

printf("ORIGINAL ARRAY:\n");
for ( i = 0;i < num;i++)
    {
printf("%d\t",A[i]); }
printf("\n"); 

RIGHT_ROTATE(A,r,n);

printf("ARRAY AFTER ROTATED TO RIGHT:\n");
    for ( i = 0 ; i < num; i++) 
{
printf("%d\t",A[i]); }
printf("\n");
return 0;
}

void RIGHT_ROTATE(int A[],int r,int n) {
                                                                         // WHEN r IS GREATER THAT ARRAY SIZE
r = r%n;
if (r ==0) return;
int temp[r];
for (int i = 0; i < r; i++) 
{temp[i] =A[n-r+i];}                                                                                              
                                                                               // SHIFT THE ELEMENTS TO THE RIGHT
for (int i = n - 1; i >= r; i--) 
{A[i] =A[i-r];}        
                                                                               // COPY THE TEMP ELEMENTS TO THE  START OF ORIGINAL ARRAY 
for (int i = 0; i < r; i++) 
{A[i]=temp[i];}
}