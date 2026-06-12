// WAP TO WRITE FUNCTION FOR A PERFECT NUMBER

#include <stdio.h>

 signed long long PER( signed long long x);

int main() {  
long  long input,perfect;


printf("ENTER THE POSITIVE NUMBER: " );
scanf("%lld",&input);



if (input<=0)
{
printf("INVALID");
return 0;
}
perfect =PER(input);

if (input==PER(input))
{
printf("THE GIVEN NUMBER IS PERFECT NUMBER");
return 0;
}
 else
 {
    
printf("THE GIVEN NUMBER IS  NOT A PERFECT NUMBER");
return 0;
 }
 

return 0;

}

 signed long long PER( signed long long x)
{
signed long long sum=0,i;

 
for ( i = 1; i < x; i++)
{
    if (x%i==0)
    {
       sum=sum+i; 
    }
    
    
}


return sum;
}



