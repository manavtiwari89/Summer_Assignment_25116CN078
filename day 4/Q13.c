// WAP TO GENERATE A FIBONACCI SERIES
#include <stdio.h>

int main() { 
int a=0,b=1,i,c,num;
printf("ENTER THE NUMBER OF TERMS ");       // INPUT - NUMBER OF TERMS
scanf("%d",&num);
if(num<=0) {
    printf("INVALID");
}
if(num>=1) {
    printf("%d\t",a);
}
if(num>=2) {
    printf("%d\t",b);
}



for(i=3;i<=num;i++)
{
    c=a+b;
    printf("%d\t",c);
    a=b;
    b=c;
}
return 0;
}