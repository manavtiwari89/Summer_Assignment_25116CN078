// WAP TO WRITE FUNCTION FOR ARMSTRONG


#include <stdio.h>

#include <math.h>
 signed long long ARM( signed long long x);

int main() {  
long  long input;


printf("ENTER THE  NUMBER: " );
scanf("%lld",&input);

if (input==ARM(input))
{
printf("THE GIVEN NUMBER IS ARMSTRONG NUMBER");
return 0;
}
 else
 {
    
printf("THE GIVEN NUMBER IS  NOT AN ARMSTRONG NUMBER");
return 0;
 }
 

return 0;

}

 signed long long ARM( signed long long x)
{
signed long long temp,t,r=0,count=0;
temp=x;
while (x!=0)
{
    
    count++;
    x=x/10;
}
  
x= temp;
while (x!=0)
{
   t=x%10;
   r=r+ (long long )round(pow(t,count));
    x=x/10; 
}

return r;
}
