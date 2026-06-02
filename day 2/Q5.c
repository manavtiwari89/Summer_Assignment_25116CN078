//wap to find sum of digits of a number
#include <stdio.h>
int main() {
    int num,sum=0,digits;
    printf ("enter the number\t");    
    scanf("%d",&num);      // TAKING THE INPUT
    while (num!=0)
    {
        digits= num%10;

        sum = sum + digits;
        num = num / 10;
    }
    printf("%d",sum);    //output
return 0;
}
