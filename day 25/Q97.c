// Wap to merge to sorted arrays 

#include <stdio.h>

int main()
 {
int array_1[50],array_2[50], temp[100],p,q,i,p1=0,p2=0;
printf("Enter size of first array: "); scanf("%d",&p);

printf("Enter sorted elements of  array 1: ");
for (i = 0; i<p; i++) scanf("%d",&array_1[i]);
printf("Enter size of second array: ");
 scanf("%d",&q);
printf("Enter sorted elements of second array: ");


for (i = 0; i<q; i++) 
{scanf("%d", &array_2[i]);}
for (i = 0; i<p+q; i++)
 {
if (p1>=p) 
{
temp[i]=array_2[p2];
p2++;
} 
else if (p2>=q)
 {
temp[i]=array_1[p1];
p1++;
}
 else if (array_1[p1]< array_2[p2])
 {
temp[i] =array_1[p1];
p1++;
} 
else {
temp[i]=array_2[p2];
p2++;
}
}
printf("Merged sorted array: ");
for (i = 0; i <p+q; i++) 
{
printf("%d ",temp[i]);
}
return 0;
}
