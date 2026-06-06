// WAP TO FIND x^n without pow()
#include <stdio.h>

int main() {
int i,base,exponent;
long long multip=1;
printf("ENTER THE BASE AND EXPONENT ");       // INPUT - NUMBER 
scanf("%d\t%d",&base,&exponent);
for ( i = 1;i<=exponent;i++)
{
    multip=multip*base;
}
printf("%d RAISED TO THE POWER OF %d IS %d\n ",base,exponent,multip);
return 0;
}