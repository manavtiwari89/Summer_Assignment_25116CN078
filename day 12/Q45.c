// WAP TO WRITE FUNCTION FOR PALINDROME


#include <stdio.h>
 signed long long PAL( signed long long x);

int main() {  
long  long input,rev;


printf("ENTER THE  NUMBER: " );
scanf("%lld",&input);

rev=input;

if (rev==PAL(input))
{
    printf("THE NUMBER IS PALINDROME");
    return 0;
}
else
{
    printf("THE NUMBER IS NOT A PALINDROME");
    return 0;
}

return 0;

}

 signed long long PAL( signed long long x)
{
signed long long temp,t,r=0;
temp=x;
while (x!=0)
{
    t=x%10;
    r=r*10+t;
    x=x/10;
}
return r;
}
