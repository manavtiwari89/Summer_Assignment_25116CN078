// WAP TO RECURSIVE FUNCTION

#include <stdio.h>
 long long  factorial(int n);


int main() {
int num;
printf("Enter a POSITIVE number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for Negative numbers.\n");
    } 
    else
    {
       printf("THE FACTORIAL OF %d IS %lld\n",num,factorial(num));

    }
    return 0;
}

 long long factorial(int n) {
     
  if (n<=1)
    {
   return 1;
     }
     
  
return n*factorial(n-1);


}
