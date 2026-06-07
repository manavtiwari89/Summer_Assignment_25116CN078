// WAP TO RECURSIVE FIBONACCI
#include <stdio.h>
signed long long  FIBONACCI(int n);

int main() { 
int  num;
printf("ENTER THE NUMBER OF TERMS ");       // INPUT - NUMBER OF TERMS
scanf("%d",&num);
if(num<=0) {
    printf("INVALID");
}
else
{
 printf("FIBONACCI SERIES:  ");
    for (int i= 1;i<= num;i++) 
    { printf("%llu\t",FIBONACCI(i));
        }
        printf("\n");
    }
    return 0;
}
signed long long  FIBONACCI(int n) {
if (n==1) { return 0;
    }
    if (n==2) {return 1;}
    
    return FIBONACCI(n-1) + FIBONACCI(n - 2);
}
 


