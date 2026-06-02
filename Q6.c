//WAP TO REVERSE A NUMBER
#include <stdio.h>
int main() {
    int num,dig,rev=0;

printf ("enter the number\t");    
 scanf("%d",&num);      // TAKING THE INPUT
    while (num!=0)
    {
        dig=num%10;
        rev= rev*10+dig;
        num=num/10;

    }
    printf("%d",rev);   // output
    
    return 0;
}
