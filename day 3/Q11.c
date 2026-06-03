// WAP TO FIND GCD OF TWO NUMBERS 

#include <stdio.h>

     int main() {
    int num1, num2, min, i, output;
 printf("Input the first number: ");
        scanf("%d", &num1);
        printf("Input the second number: ");
        scanf("%d", &num2);
    if(num1 < num2) min = num1;          
    else min = num2;
    for(i = min; i >= 1; i--) 
      {  if(num1 % i == 0 && num2 % i == 0) {
            output = i;
            break; 
        }
    }
    printf("The GCD of the two numbers is: %d\n", output);
    return 0;
}