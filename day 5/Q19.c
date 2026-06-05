// WAP TO PRINT FACTORS OF A NUMBER

#include <stdio.h>

int main() {
int i,num;
printf("ENTER THE NUMBER ");       // INPUT - NUMBER 
scanf("%d",&num); 
  if(num<0)
  {
    printf(" INVALID ");
     return 0;
  }
  if(num==0)
  {
    printf(" FACTORS ARE  1 ");
     return 0;
  }
  printf(" FACTORS ARE   ");
  for(i=1;i<=num;i++)
{
    if(num%i==0)
    {
        printf("%d\t",i);
    }
}
return 0;
}