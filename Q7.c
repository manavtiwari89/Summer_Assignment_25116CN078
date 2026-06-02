// wap to find products of digits
#include <stdio.h>
int main() {
    int num,dig,prod=1;

printf ("enter the number\t");    
 scanf("%d",&num);      // TAKING THE INPUT
 if(num == 0)
 {
    prod=0;
 }
    while (num!=0)
    {
        dig=num%10;
        prod = prod*dig;
        num=num/10;

    }
    printf("%d",prod);   // output
    
    return 0;
}
