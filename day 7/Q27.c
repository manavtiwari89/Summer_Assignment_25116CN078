// WAP TO RECURSIVE SUM OF DIGITS
#include <stdio.h>
signed long long  SUM_OF_DIGITS_(int n);
int main() { 

int  num;

printf("ENTER THE NUMBER ");       // INPUT - NUMBER OF TERMS

scanf("%d",&num);



    int ABSOLUTE_VALUE=(num< 0) ? -num : num;                       // for negative number

    printf("THE SUM of digits of %d is %lld\n",num,SUM_OF_DIGITS_(ABSOLUTE_VALUE));

    return 0;}

    signed long long SUM_OF_DIGITS_(int n) {

        if(n==0) { return 0; }

        return(n % 10) + SUM_OF_DIGITS_(n / 10);


}
