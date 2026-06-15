// WAP TO ROTATE ARRAY LEFT                                                          

#include <stdio.h>
void LEFT_ROTATE(int A[],int r,int n);

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

LEFT_ROTATE(A,r,n);

printf("ARRAY AFTER ROTATED TO LEFT:\n");
    for ( i = 0 ; i < num; i++) 
{
printf("%d\t",A[i]); }
printf("\n");
return 0;
}

void LEFT_ROTATE(int A[], int r, int n) {
                                                                         // WHEN r IS GREATER THAT ARRAY SIZE
r = r%n;
if (r ==0) return;
 int temp[r];

for (int i = 0; i < r; i++) 
{temp[i] =A[i];}

                                                                               // SHIFT THE ELEMENTS TO THE LEFT
for (int i = r; i < n; i++) 
{ A[i - r]=A[i];
 }

                                                                               // COPY THE TEMP ELEMENTS TO THE  START OF ORIGINAL ARRAY 
for (int i = 0; i < r; i++) 
{  A[n -r+i] =temp[i];
 }
}