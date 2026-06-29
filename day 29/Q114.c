// Wap to create menu driven array operating system 

#include <stdio.h>
#include <stdlib.h>

#define MAX 50
int main() {
int A[MAX];
int k=0;
int q,j,w,m,g,x;

printf("--- Array System Loaded ---\n");

printf("Enter initial number of elements (Max %d): ",MAX);
scanf("%d",&k);
if(k>0&&k<=MAX) {
printf("Enter %d elements:\n",k);
for(j=0;j<k;j++) {
printf("Index %d: ",j);
scanf("%d",&A[j]);
}} 

else {
k=0;
printf("Starting with an empty array.\n");
}
do {
printf("\n1.Show 2.Insert 3.Delete 4.Search 5.Exit\n");
printf("Choice: ");
scanf("%d",&q);
switch(q) {
case 1:
if(k==0) {
printf("Array is empty.\n");
} 
else {
printf("Elements: ");
for(j=0;j<k;j++) {
printf("%d ",A[j]);
}
printf("\n");

}
break;
case 2:
if(k>=MAX) 
{
printf("Array Full!\n");
} 
else {
printf("Enter value and index (0-%d): ",k);
scanf("%d %d",&w,&m);
if(m>=0&&m<=k) 
{
for(j=k-1;j>=m;j--) {
A[j+1]=A[j];
}
A[m]=w;
k++;
printf("Inserted.\n");
} else {
printf("Invalid index.\n");
}}


break;
case 3:
if(k==0)
 {
printf("Array Empty!\n");
} 
else {
printf("Enter index to delete (0-%d): ",k-1);
scanf("%d",&m);
if(m>=0&&m<k) {
printf("Removed: %d\n",A[m]);
for(j=m;j<k-1;j++) {
A[j]=A[j+1];
}
k--;
} else {
printf("Invalid index.\n");
}}

break;
case 4:
if(k==0)
 {
printf("Array Empty!\n");
} else {
printf("Enter value to find: ");
scanf("%d",&g);
x=0;
for(j=0;j<k;j++) {
if(A[j]==g) {
printf("Found at index %d\n",j);
x=1;
}
}
if(!x) 
{
printf("Not found.\n");
}
}
break;
case 5:
printf("Exiting system.\n");
break;
default:
printf("Invalid choice.\n");
}
} while(q!=5);
return 0;
}
