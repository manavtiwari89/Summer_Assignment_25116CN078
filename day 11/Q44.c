// WAP TO WRITE FUNCTION TO FIND FACTORIAL

#include <stdio.h>
 unsigned long long fact( unsigned long long x);

int main() {  
long  long input;


printf("ENTER THE POSITIVE NUMBER: " );
scanf("%lld",&input);

 if (input==0)
{
   printf(" 0! = 1"); 
   return 0; 
}

 if (input<=0)
{
   printf(" NEGATIVE NUMBERS DONT HAVE FACTORIAL"); 
   return 0; 
}

unsigned long  long a = (long long) input;

printf(" THE FACTORIAL OF %llu IS: %llu",a,fact(a));
return 0;



return 0;
}

 unsigned long long fact( unsigned long long x)
{
unsigned long long multiply=1,i;

for ( i = 1; i <= x; i++)
{
    multiply=multiply*i;
}


return multiply;
}