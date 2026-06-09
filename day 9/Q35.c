/*  WAP TO PRINT REPEATED CHARACTER PATTERN
A
BB
CCC
DDDD
EEEEE   */

#include <stdio.h>
int main() {
int i,j;


for ( i = 1; 5>=i; i++)
{
    for ( j=1;j <= i; j++)
    {
        printf("%c",'A'+ i-1);
    }
    printf("\n");
}
return 0;
}
