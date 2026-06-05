// WAP TO FIND THE LARGEST PRIME FACTOR

#include <stdio.h>

int main() {
int i,num,largest_factor =2;
printf("ENTER THE NUMBER ");       // INPUT - NUMBER 
scanf("%d",&num); 
  if(num<2)
  {
    printf(" INVALID ");       // NUMBERS LESS THAN TWO DO NOT HAVE PRIME FACTORS
     return 0;
  }
  while (num>1)
  {
    if (num%largest_factor==0)
    {
        num=num/largest_factor;
    }
    else
    {
        largest_factor++;
    }
    
  }
  printf("THE LARGEST PRIME FACTOR IS : %d",largest_factor);
  return 0;
}