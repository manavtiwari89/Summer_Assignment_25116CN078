// WAP TO COUNT SET BITS IN A NUMBER
#include <stdio.h>

int main() {
int i,temp,count=0,num;
printf("ENTER A POSITIVE  NUMBER ");       // INPUT - NUMBER 
scanf("%d",&num); 
temp=num;
while (num>0)
{
if ((num&1)==1)
{
    count++;
}
num=num>>1;
}
printf("THE NUMBER OF SET BITS (1s) IN  %d IS %d\n",temp,count);
return 0;
}