// WAP TO CHECK WHETHER A NUMBER IS PALINDROME
#include <stdio.h>
int main() {
    int num,temp,dig,pal=0;

printf ("enter the number\t");    
 scanf("%d",&num);      // TAKING THE INPUT
temp=num;
  while (num!=0)
    {
        dig=num%10;
        pal= pal*10+dig;
        num=num/10;

    }
    if(pal==temp)
    {printf("IT IS A PALINDROME");
    }
    else
    {
        printf("IT IS NOT A PALINDROME");
    }
    return 0;
}
