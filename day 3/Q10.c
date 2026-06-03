// WAP TO PRINT PRIME NUMBERS IN A RANGE


#include <stdio.h>

int main() {
          int i,j,start,end,count;

    printf("Enter the starting and ending range: ");
           scanf("%d %d",&start,&end);
 printf("Prime numbers between %d and %d are:\n", start,end);
   for (i = start; i <= end; i++) {           // OUTER LOOP
        
        
           if (i == 0 || i == 1) {             // SKIP 0 AND 1 
            continue;  }
        
  count = 1;

        
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                count = 0; 
                break;    
            }
        }
if (count == 1) {           // IF THE NUMBER IS PRIME
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}