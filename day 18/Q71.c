// WAP TO BINARY SEARCH

 #include <stdio.h>
int main() 
{
int A[100],n,i,target,start,end,mid,found=0;
printf("ENTER THE NUMBER OF ELEMENTS: ");
scanf("%d",&n);
printf("ENTER THE ELEMENTS IN ASCENDING ORDER: \n");

for (i = 0; i < n; i++) 
{
scanf("%d",&A[i]);}
printf("ENTER THE NUMBER  TO SEARCH: ");
scanf("%d",&target);

start=0;         
end=n-1;    
while (start<=end) 
{
mid=start+(end-start)/2; 
if (A[mid] == target) 
{
printf("ELEMENT %d FOUND AT INDEX POSITION: %d\n",target,mid);
found = 1;
break;
}        
else if (target <A[mid])
 {
end=mid-1;
        }  
else {
start=mid+1;
}
}
if (found == 0) 
{
printf("ELEMENT %d NOT FOUND IN THE ARRAY",target);}
return 0;
}                                                                   