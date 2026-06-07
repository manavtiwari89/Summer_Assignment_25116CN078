//  WAP TO RECURSIVE REVSERSE NUMBER
#include <stdio.h>

int REVERSE(int num);
int rev(int num, int REVERSE_VALUE);

int main() {
    int num;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &num);
   
    int Negative = (num < 0);
  int ABS = Negative ? -num : num;              // for negative number
 int result =REVERSE(ABS);

    if (Negative) {
        result = -result;
    }
    printf("THE REVERSED NUMBER IS: %d\n", result);

    return 0;
}
int REVERSE(int num) {
    return rev(num,0);
}


int rev(int num, int REVERSE_VALUE) {
     if (num == 0) {
        return REVERSE_VALUE;
    }
 REVERSE_VALUE = (REVERSE_VALUE*10) + (num%10);
 return rev(num / 10, REVERSE_VALUE);
}