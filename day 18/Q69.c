// WAP TO BUBBLE SORT
                                                                    
#include <stdio.h>
int main() 
{
int A[100];
int n,i,j,temp;
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&n);
printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++) 
{
scanf("%d",&A[i]);
}
for (i = 0; i < n-1; i++) 
{
for (j = 0; j < n-i-1; j++) 
{
        
if (A[j]  >A[j+1])
 {
temp =A[j];
A[j]=A[j+1];
A[j+1]=temp;
}
}
}
printf("SORTED ARRAY IN ASCENDING ORDER:\n");
for (i = 0; i < n; i++) {
printf("%d\t",A[i]);
    }
return 0;
}