// WAP TO CHECK STRONG NUMBER
#include <stdio.h>

int main() {
int i,sum=0,num,temp,f=1,t,n;
printf("ENTER THE NUMBER ");       // INPUT - NUMBER 
scanf("%d",&num); 
  if(num<1)
  {
    printf(" IT IS NOT A STRONG NUMBER");
     return 0;
  }
temp=num;
while(temp!=0)
{
    t=temp%10;
    n=t;
    f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
sum=sum+f;
temp=temp/10;
}

if(sum==num)
{
  printf(" IT IS A STRONG NUMBER");
}
else 
{
      printf(" IT IS NOT A STRONG NUMBER");
}
 return 0;
}

