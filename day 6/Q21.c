// WAP TO CONVERT DECIMAL TO BINARY
#include <stdio.h>

int main() {
int i,sum=0,f=1,d,num;
printf("ENTER THE DECIMAL NUMBER ");       // INPUT - NUMBER 
scanf("%d",&num); 
while (num>0)
{
    d=num%2;
    sum=sum+d*f;
    num=num/2;
    f=f*10;
}
printf(" THE BINARY NUMBER IS %d",sum);
return 0;
}