// WAP TO CONVERT BINARY TO DECIMAL
#include <stdio.h>

int main() {
int i,sum=0,f=1,d,num;
printf("ENTER THE BINARY NUMBER ");       // INPUT - NUMBER 
scanf("%d",&num); 
while (num>0)
{
    d=num%10;
    sum=sum+d*f;
    num=num/10;
    f=f*2;
}
printf(" THE DECIMAL NUMBER IS %d",sum);
return 0;
}