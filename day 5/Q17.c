 //  WAP TO CHECK PERFECT NUMBER
 
#include <stdio.h>

int main() {
int i,sum=0,num;
printf("ENTER THE NUMBER ");       // INPUT - NUMBER 
scanf("%d",&num); 
  if(num<1)
  {
    printf(" IT IS NOT A PERFECT NUMBER");
     return 0;
  }
for(i=1;i<num;i++)
{
    if(num%i==0)
    {
        sum=sum+i;
    }
}
 if(num==sum)
 {
     printf("IT IS A PERFECT NUMBER");
 }
 else
 {
     printf(" IT IS NOT A PERFECT NUMBER");
 }
 return 0;
}