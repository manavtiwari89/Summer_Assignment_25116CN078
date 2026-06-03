// WAP TO FIND LCM OF TWO NUMBERS
#include <stdio.h>

int main() {
    int num1, num2, max, i, output;

printf("Input first number: ");
scanf("%d", &num1);
printf("Input second number: ");
scanf("%d", &num2);
if(num1>num2) max = num1;
else max = num2;

    for(i=max; i<=(num1*num2); i++) {
        if(i%num1==0 && i%num2==0) {
            output = i;
            break; } } 
        
    

    printf("The LCM is: %d\n", output);
    return 0;
}