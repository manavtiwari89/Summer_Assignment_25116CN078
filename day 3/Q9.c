// WAP TO CHECK WHETHER A NUMBER IS PRIME
#include <stdio.h>
int main() {
    int num,count=0,i;
    printf ("enter the number\t");    
 scanf("%d",&num);      // TAKING THE INPUT
 if(num==0)
 {
    printf(" it is not a prime number");             // WHEN INPUT IS ZERO
    return 0;
}
 for(i=1;i<=num;i++)                                // COUNTING ITS FACTORS 
 {
    if(num%i==0)
    {
        count++;
    }
}
  if(count==2)
 { printf("  it is a prime number");                    // OUTPUT FOR PRIME NUMBER
}
else
{ printf(" it is not a prime number");                  // OUTPUT FOR NON PRIME NUMBER

}
return 0;
}
