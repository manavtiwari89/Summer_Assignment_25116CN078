// WAP TO SELECTION SORT
                                                                      
#include <stdio.h>
int main() {
int n,i,j,r,temp,A[100];
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d", &n);

printf("Enter elements:  %d\n", n);
for (i = 0; i < n; i++)
 {
scanf("%d",&A[i]); }
    
for (i = 0; i < n - 1; i++) 
{        r = i; 
for (j = i + 1; j < n; j++) 
{
 if (A[j] <A[r])
  {r=j;  }}

if (r!= i) {
temp= A[i];
A[i]=A[r];
A[r]=temp;
 }}

printf(" ARRAY SORTED IN ASCENDING ORDER:\n");
for (i = 0; i < n; i++) 
{
printf("%d\t",A[i]);}
return 0;
}

